#include "InteractionInteractorComponent.h"

#include "InteractionComponent.h"
#include "DrawDebugHelpers.h"
#include "EngineUtils.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "InputCoreTypes.h"

UInteractionInteractorComponent::UInteractionInteractorComponent()
{
	// 交互体验依赖实时准心检测，因此声明组件具备每帧 Tick 能力。
	PrimaryComponentTick.bCanEverTick = true;
}

void UInteractionInteractorComponent::BeginPlay()
{
	// 先让基类完成组件注册后的初始化。
	Super::BeginPlay();

	// 交互检测仅支持挂在 Pawn 或 Character 上，因此先尝试获取 Pawn Owner。
	const APawn* OwningPawn = Cast<APawn>(GetOwner());
	// 只为本地控制角色启用 Tick，避免服务端与其他客户端角色重复执行本地 UI 检测。
	SetComponentTickEnabled(OwningPawn && OwningPawn->IsLocallyControlled());
}

void UInteractionInteractorComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// 在 Pawn 离开世界前清除焦点，让上一次锁定的物品隐藏提示。
	UpdateFocusedInteraction(nullptr);
	// 最后交给基类处理常规 EndPlay 生命周期。
	Super::EndPlay(EndPlayReason);
}

void UInteractionInteractorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	// 保留基类 Tick 调用，以兼容 ActorComponent 的标准更新流程。
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// 每帧确认 Owner 仍是本地控制的 Pawn，防止控制权变化后继续显示提示。
	APawn* OwningPawn = Cast<APawn>(GetOwner());
	// Owner 无效或不再本地控制时，撤销旧焦点并结束本帧处理。
	if (!OwningPawn || !OwningPawn->IsLocallyControlled())
	{
		// 隐藏此前可能显示的物品提示。
		UpdateFocusedInteraction(nullptr);
		// 没有有效本地玩家时不进行射线与输入检查。
		return;
	}

	// 声明本帧相机视点输出变量。
	FVector ViewLocation;
	// 声明本帧相机旋转输出变量。
	FRotator ViewRotation;
	// 获取实际玩家视角失败时不能可靠检测准心目标。
	if (!GetPlayerView(ViewLocation, ViewRotation))
	{
		// 清除可能遗留的焦点提示。
		UpdateFocusedInteraction(nullptr);
		// 结束本帧，等待下帧重新获取视角。
		return;
	}

	// 在以准心为轴的窄锥里挑选最佳交互物，避免球形扫管导致侧边物体被误吸附。
	UInteractionComponent* NewFocusedInteraction = FindBestInteractionInCone(ViewLocation, ViewRotation, OwningPawn);

	// 开发调试时绘制准心射线，颜色反映本帧是否找到有效交互物。
	if (bDebugTrace)
	{
		// 命中有效交互物使用绿色，否则使用红色；锥体轮廓生命周期为单帧。
		const FVector ConeDirection = ViewRotation.Vector();
		const float ConeHalfAngleRadians = FMath::DegreesToRadians(InteractionConeHalfAngleDegrees);
		DrawDebugCone(GetWorld(), ViewLocation, ConeDirection, InteractionDistance, ConeHalfAngleRadians, ConeHalfAngleRadians, 24, NewFocusedInteraction ? FColor::Green : FColor::Red, false, 0.0f, 0, 1.0f);
	}

	// 对比新旧焦点并只在变化时执行提示隐藏或显示。
	UpdateFocusedInteraction(NewFocusedInteraction);
	// 焦点存在时持续让其 World 空间提示面向相机。
	if (UInteractionComponent* CurrentInteraction = FocusedInteraction.Get())
	{
		// 传入当前相机位置，由物品端组件计算 Widget 朝向。
		CurrentInteraction->UpdatePromptFacing(ViewLocation);
	}

	// 只有启用原始按键模式时才直接读取 E 键；其他输入系统可关闭该分支。
	if (bUseRawEKey)
	{
		// 从本地 Pawn 取得控制器，以查询本帧输入状态。
		if (const APlayerController* PlayerController = Cast<APlayerController>(OwningPawn->GetController()))
		{
			// 仅在 E 键从未按下变为按下的这一帧触发，避免长按每帧重复执行。
			if (PlayerController->WasInputKeyJustPressed(EKeys::E))
			{
				// 将输入转为对当前焦点物品的一次交互尝试。
				TryInteract();
			}
		}
	}
}

void UInteractionInteractorComponent::TryInteract()
{
	// 仅当仍有有效焦点时才允许执行，避免空指针与隔空交互。
	if (UInteractionComponent* CurrentInteraction = FocusedInteraction.Get())
	{
		// 将玩家 Owner 作为交互者传给物品端组件。
		CurrentInteraction->ExecuteInteraction(GetOwner());
		// 一次性交互成功后组件会变为不可用，此时立即从玩家焦点中清除。
		if (!CurrentInteraction->CanInteract())
		{
			// 触发旧焦点提示隐藏，避免本帧残留 UI。
			UpdateFocusedInteraction(nullptr);
		}
	}
}

bool UInteractionInteractorComponent::GetPlayerView(FVector& OutLocation, FRotator& OutRotation) const
{
	// 先确认组件仍挂在 Pawn 上。
	const APawn* OwningPawn = Cast<APawn>(GetOwner());
	// 非 Pawn Owner 没有可靠的角色视角来源。
	if (!OwningPawn)
	{
		// 告知调用者视角获取失败。
		return false;
	}

	// 优先使用 PlayerController 的视点，以匹配实际相机和准心。
	if (const APlayerController* PlayerController = Cast<APlayerController>(OwningPawn->GetController()))
	{
		// 将控制器当前相机的位置与旋转写入输出参数。
		PlayerController->GetPlayerViewPoint(OutLocation, OutRotation);
		// 控制器视点成功获取。
		return true;
	}

	// 没有 PlayerController 时回退到 Pawn 眼睛位置，便于简单 AI/测试 Pawn 使用。
	OwningPawn->GetActorEyesViewPoint(OutLocation, OutRotation);
	// 回退视点同样可用于继续射线检测。
	return true;
}

UInteractionComponent* UInteractionInteractorComponent::FindBestInteractionInCone(const FVector& ViewLocation, const FRotator& ViewRotation, const APawn* OwningPawn) const
{
	// 没有世界或玩家时无法可靠扫描交互物。
	UWorld* World = GetWorld();
	if (!World || !OwningPawn)
	{
		return nullptr;
	}

	// 准星方向是锥体轴线，所有候选都要和它比较夹角。
	const FVector ViewDirection = ViewRotation.Vector();
	// 将半角转成余弦值，后续用点积判断是否落在锥体内。
	const float MinConeDot = FMath::Cos(FMath::DegreesToRadians(InteractionConeHalfAngleDegrees));
	// 分数越小越接近准星中心；距离作为次要因素，避免同角度时选太远的物体。
	float BestScore = TNumericLimits<float>::Max();
	UInteractionComponent* BestInteraction = nullptr;

	// 遍历场景 Actor 查找交互组件；小项目里成本可控，并且比粗球扫更符合准星语义。
	for (TActorIterator<AActor> ActorIt(World); ActorIt; ++ActorIt)
	{
		AActor* CandidateActor = *ActorIt;
		if (!CandidateActor || CandidateActor == OwningPawn)
		{
			continue;
		}

		UInteractionComponent* CandidateInteraction = CandidateActor->FindComponentByClass<UInteractionComponent>();
		if (!CandidateInteraction || !CandidateInteraction->CanInteract())
		{
			continue;
		}

		// 使用 Actor Bounds 中心作为瞄准点，能兼容小摆件、门等普通可交互物。
		FVector BoundsOrigin;
		FVector BoundsExtent;
		CandidateActor->GetActorBounds(false, BoundsOrigin, BoundsExtent);

		const FVector ToCandidate = BoundsOrigin - ViewLocation;
		const float DistanceToCandidate = ToCandidate.Size();
		if (DistanceToCandidate <= KINDA_SMALL_NUMBER || DistanceToCandidate > InteractionDistance)
		{
			continue;
		}

		const FVector DirectionToCandidate = ToCandidate / DistanceToCandidate;
		const float CandidateDot = FVector::DotProduct(ViewDirection, DirectionToCandidate);
		const float CandidateAngleRadians = FMath::Acos(FMath::Clamp(CandidateDot, -1.0f, 1.0f));
		const float ConeHalfAngleRadians = FMath::DegreesToRadians(InteractionConeHalfAngleDegrees);
		const float BoundsRadius = BoundsExtent.Size();
		const float AngularRadiusRadians = FMath::Asin(FMath::Clamp(BoundsRadius / DistanceToCandidate, 0.0f, 1.0f));
		if (CandidateDot < MinConeDot && CandidateAngleRadians > ConeHalfAngleRadians + AngularRadiusRadians)
		{
			continue;
		}

		// 用一次细线检测确认没有墙、桌面等阻挡物在玩家和候选物之间。
		FHitResult LineHit;
		FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(InteractionConeLineOfSight), false, OwningPawn);
		const bool bHitBlockingObject = World->LineTraceSingleByChannel(LineHit, ViewLocation, BoundsOrigin, TraceChannel, QueryParams);
		if (bHitBlockingObject && LineHit.GetActor() != CandidateActor)
		{
			continue;
		}

		// 用“偏离锥体中心的角度”评分，并扣除物体自身角半径，让瞄到物体边缘也能稳定选中。
		const float AngularScore = FMath::Max(0.0f, CandidateAngleRadians - AngularRadiusRadians);
		const float DistanceScore = DistanceToCandidate / FMath::Max(1.0f, InteractionDistance);
		const float CandidateScore = AngularScore * 100.0f + DistanceScore;
		if (CandidateScore < BestScore)
		{
			BestScore = CandidateScore;
			BestInteraction = CandidateInteraction;
		}
	}

	return BestInteraction;
}

void UInteractionInteractorComponent::UpdateFocusedInteraction(UInteractionComponent* NewFocusedInteraction)
{
	// 如果焦点对象未变则无需重复切换可见性，避免无意义的 Widget 更新。
	if (FocusedInteraction.Get() == NewFocusedInteraction)
	{
		// 保持当前提示状态并结束处理。
		return;
	}

	// 焦点变化前先取得旧对象并隐藏它的提示。
	if (UInteractionComponent* PreviousInteraction = FocusedInteraction.Get())
	{
		// 通知旧物品失去本地准心焦点。
		PreviousInteraction->SetInteractionFocused(false);
	}

	// 将弱引用更新为本帧检测到的新对象，或 nullptr。
	FocusedInteraction = NewFocusedInteraction;
	// 新焦点存在时显示其提示并同步文本。
	if (NewFocusedInteraction)
	{
		// 通知新物品获得本地准心焦点。
		NewFocusedInteraction->SetInteractionFocused(true);
	}
}
