#include "InteractionComponent.h"

#include "InteractionPlugin.h"
#include "InteractionPromptWidgetBase.h"
#include "Kismet/KismetMathLibrary.h"

UInteractionComponent::UInteractionComponent()
{
	// 提示的显示状态由玩家端射线检测驱动，因此物品组件本身无需每帧 Tick。
	PrimaryComponentTick.bCanEverTick = false;
}

void UInteractionComponent::BeginPlay()
{
	// 先执行基类初始化，确保 Owner 和世界上下文已可用。
	Super::BeginPlay();

	// 专用服务器没有本地 UI，不创建 WidgetComponent 以节省资源。
	if (GetNetMode() != NM_DedicatedServer)
	{
		// 在客户端或单机环境创建默认隐藏的物体上方提示。
		CreatePromptWidget();
	}
}

void UInteractionComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	// 只在曾成功创建运行时 WidgetComponent 时执行回收。
	if (PromptWidgetComponent)
	{
		// 销毁动态注册的子组件，避免 Actor 生命周期结束后残留 UI 组件。
		PromptWidgetComponent->DestroyComponent();
		// 清空 UObject 引用，避免后续析构路径误用已销毁组件。
		PromptWidgetComponent = nullptr;
	}

	// 最后交给基类完成标准组件销毁流程。
	Super::OnComponentDestroyed(bDestroyingHierarchy);
}

bool UInteractionComponent::CanInteract() const
{
	// 必须同时满足手动启用，以及一次性交互尚未被消费这两个条件。
	return bCanInteract && (!bInteractOnlyOnce || !bHasBeenInteracted);
}

void UInteractionComponent::ExecuteInteraction(AActor* Interactor)
{
	// 在执行前再次校验，防止焦点失效或一次性交互已消费时仍触发行为。
	if (!CanInteract())
	{
		// 当前不可交互时直接返回，不打印日志也不广播成功事件。
		return;
	}

	// 根据编辑器选择的枚举执行当前内置示例行为。
	switch (InteractionAction)
	{
	case EInteractionAction::PrintOneCharacter:
		// 示例类型一：向 Output Log 输出一个汉字。
		UE_LOG(LogInteractionPlugin, Log, TEXT("一"));
		// 当前分支完成，避免继续落入其他行为。
		break;

	case EInteractionAction::PrintTwoCharacters:
		// 示例类型二：向 Output Log 输出两个汉字。
		UE_LOG(LogInteractionPlugin, Log, TEXT("两个"));
		// 当前分支完成，避免继续落入默认分支。
		break;

	default:
		// 当未来新增枚举却未实现时输出警告，便于开发时发现遗漏。
		UE_LOG(LogInteractionPlugin, Warning, TEXT("未处理的交互类型。"));
		// 默认分支同样必须结束 switch。
		break;
	}

	// 记录物品与交互者名称，便于在 Output Log 中定位交互来源。
	UE_LOG(LogInteractionPlugin, Log, TEXT("%s 被 %s 交互。"), *GetOwner()->GetName(), Interactor ? *Interactor->GetName() : TEXT("Unknown"));
	// 在原生示例行为完成后广播成功事件，供项目接入额外逻辑。
	OnInteractionExecuted.Broadcast(this, Interactor, InteractionAction);

	// 一次性物品在首次成功执行后立刻标记为已使用。
	if (bInteractOnlyOnce)
	{
		// 改变可交互性判断，让后续射线检测不再锁定本物品。
		bHasBeenInteracted = true;
		// 立即隐藏当前提示，避免玩家看到已失效的交互入口。
		SetInteractionFocused(false);
	}
}

void UInteractionComponent::SetInteractionFocused(bool bInFocused)
{
	// 即使玩家请求聚焦，也只允许可交互物品进入焦点状态。
	bIsFocused = bInFocused && CanInteract();

	// 未配置 Widget Blueprint 时组件仍可交互，只是没有视觉提示。
	if (PromptWidgetComponent)
	{
		// 聚焦前先同步最新文本与来源组件，支持运行时修改 PromptText。
		if (bIsFocused)
		{
			// 将数据写入实际创建的 Widget 实例。
			UpdatePromptWidget();
		}

		// 根据最终焦点状态显示或隐藏物体上方提示，并传播到子控件。
		PromptWidgetComponent->SetVisibility(bIsFocused, true);
	}
}

void UInteractionComponent::UpdatePromptFacing(const FVector& CameraLocation)
{
	// 仅在提示可见、组件存在且使用 World 空间时才需要计算朝向。
	if (!bIsFocused || !PromptWidgetComponent || PromptWidgetSpace != EWidgetSpace::World)
	{
		// Screen 空间 Widget 天然面向屏幕，或未聚焦时无需更新。
		return;
	}

	// 计算从提示位置看向相机位置的旋转，使世界空间 UI 始终面对玩家。
	const FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(PromptWidgetComponent->GetComponentLocation(), CameraLocation);
	// 将计算出的朝向应用到 WidgetComponent。
	PromptWidgetComponent->SetWorldRotation(LookAtRotation);
}

void UInteractionComponent::CreatePromptWidget()
{
	// 缺少 Widget 类、已创建过组件或 Owner 无效时，不重复创建。
	if (!PromptWidgetClass || PromptWidgetComponent || !GetOwner())
	{
		// 保持无提示状态；交互逻辑本身仍可继续使用。
		return;
	}

	// 提示必须附着到 Actor 根组件，先取得该附着点。
	USceneComponent* RootComponent = GetOwner()->GetRootComponent();
	// 没有根组件的 Actor 无法安全附着运行时 Widget。
	if (!RootComponent)
	{
		// 输出具体 Actor 名称，方便定位物品蓝图配置问题。
		UE_LOG(LogInteractionPlugin, Warning, TEXT("交互物 %s 没有 RootComponent，无法创建提示 Widget。"), *GetOwner()->GetName());
		// 终止创建，避免未附着组件出现位置异常。
		return;
	}

	// 以 Owner 为 Outer 创建瞬态 WidgetComponent，使其随 Actor 生命周期回收。
	PromptWidgetComponent = NewObject<UWidgetComponent>(GetOwner(), TEXT("InteractionPromptWidget"));
	// 将动态组件登记到 Actor，确保其生命周期与组件系统正确管理。
	GetOwner()->AddInstanceComponent(PromptWidgetComponent);
	// 把提示附着到根组件，使物品移动时提示同步移动。
	PromptWidgetComponent->SetupAttachment(RootComponent);
	// 应用提示位置；自动模式会放在拥有者包围盒中心，手动模式使用配置偏移。
	PromptWidgetComponent->SetRelativeLocation(CalculatePromptRelativeLocation(RootComponent));
	// 应用 World 或 Screen 空间配置。
	PromptWidgetComponent->SetWidgetSpace(PromptWidgetSpace);
	// 使用透明混合，避免 Widget 背景在场景里显示成突兀的灰色矩形。
	PromptWidgetComponent->SetBlendMode(EWidgetBlendMode::Transparent);
	// 提示只负责显示，不参与碰撞或交互射线，避免挡住玩家准心检测。
	PromptWidgetComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	// 交互提示不需要接收键鼠焦点，输入仍交给玩家控制器处理。
	PromptWidgetComponent->SetWindowFocusable(false);
	// 中心对齐投影位置，让提示 Widget 的中心落在物体中心。
	PromptWidgetComponent->SetPivot(FVector2D(0.5f, 0.5f));
	// 仅对 World 空间提示应用物理缩放，避免影响屏幕空间 Widget 的屏幕尺寸。
	if (PromptWidgetSpace == EWidgetSpace::World)
	{
		// 以 0.1 的默认缩放将 384×128 px 画布控制在适合物体上方展示的实际大小。
		PromptWidgetComponent->SetRelativeScale3D(FVector(PromptWorldScale));
	}
	// 应用固定绘制尺寸配置。
	PromptWidgetComponent->SetDrawSize(PromptDrawSize);
	// 应用是否使用 Widget 期望尺寸的配置。
	PromptWidgetComponent->SetDrawAtDesiredSize(bDrawAtDesiredSize);
	// 指定要实例化的提示 Widget Blueprint 类。
	PromptWidgetComponent->SetWidgetClass(PromptWidgetClass);
	// 注册前先隐藏，确保只有被准心锁定时才出现。
	PromptWidgetComponent->SetVisibility(false, true);
	// 注册到世界后，UE 才会创建真实的 UserWidget 实例并参与渲染。
	PromptWidgetComponent->RegisterComponent();
	// 注册完成后同步文本和来源组件到刚创建的 Widget。
	UpdatePromptWidget();
}

FVector UInteractionComponent::CalculatePromptRelativeLocation(const USceneComponent* RootComponent) const
{
	// 手动模式保持旧配置，适合需要特殊偏移的交互物。
	if (!bAutoPlacePromptAtOwnerCenter || !GetOwner() || !RootComponent)
	{
		return PromptRelativeLocation;
	}

	// 读取拥有者的世界包围盒，中心点就是提示应该对齐的位置。
	FVector BoundsOrigin;
	FVector BoundsExtent;
	GetOwner()->GetActorBounds(false, BoundsOrigin, BoundsExtent);

	// WidgetComponent 附着在根组件上，所以要把世界坐标换算成根组件局部坐标。
	return RootComponent->GetComponentTransform().InverseTransformPosition(BoundsOrigin);
}

void UInteractionComponent::UpdatePromptWidget()
{
	// 未成功创建 WidgetComponent 时没有可同步的目标。
	if (!PromptWidgetComponent)
	{
		// 安全返回，允许未配置提示 UI 的纯逻辑交互物继续工作。
		return;
	}

	// 只处理继承插件基类的 Widget，避免错误类导致非法调用。
	if (UInteractionPromptWidgetBase* PromptWidget = Cast<UInteractionPromptWidgetBase>(PromptWidgetComponent->GetUserWidgetObject()))
	{
		// 写入来源组件，使 Widget Blueprint 可访问物品交互数据。
		PromptWidget->SetInteractionComponent(this);
		// 写入当前提示文本，并驱动自动绑定文本控件和 Blueprint 事件。
		PromptWidget->SetPromptText(PromptText);
	}
}
