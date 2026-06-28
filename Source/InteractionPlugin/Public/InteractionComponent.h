#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/WidgetComponent.h"
#include "InteractionTypes.h"
#include "InteractionComponent.generated.h"

class UInteractionComponent;
class UInteractionPromptWidgetBase;

/** 成功执行交互后广播，携带交互组件、执行者和实际交互类型。 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInteractionExecutedSignature, UInteractionComponent*, InteractionComponent, AActor*, Interactor, EInteractionAction, Action);

/**
 * 挂载到可交互物品 Actor 的核心组件。
 * 它负责运行时创建物体上方的 WidgetComponent，并在玩家确认交互时执行配置的原生行为。
 */
UCLASS(ClassGroup = (Interaction), meta = (BlueprintSpawnableComponent))
class INTERACTIONPLUGIN_API UInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	/** 初始化默认提示配置；该组件不需要自身 Tick，由玩家端组件驱动焦点状态。 */
	UInteractionComponent();

	/** 在游戏开始时为非专用服务器创建提示 Widget。 */
	virtual void BeginPlay() override;
	/** 在组件销毁前回收运行时创建的提示 WidgetComponent。 */
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;

	/** 玩家准心锁定此物品时传给提示 Widget Blueprint 的文本。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	FText PromptText;

	/** 玩家按 E 后要执行的内置示例行为。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	EInteractionAction InteractionAction = EInteractionAction::PrintOneCharacter;

	/** 关闭后该物品不会被玩家端组件锁定或执行。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	bool bCanInteract = true;

	/** 开启后首次成功交互会永久禁用当前组件实例。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	bool bInteractOnlyOnce = false;

	/** 物体上方提示使用的 Widget Blueprint，必须继承 UInteractionPromptWidgetBase。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction|Prompt")
	TSubclassOf<UInteractionPromptWidgetBase> PromptWidgetClass;

	/** 提示相对拥有者根组件的位置，通常设置为物体上方。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction|Prompt")
	FVector PromptRelativeLocation = FVector(0.0, 0.0, 100.0);

	/** 指定提示 Widget 使用 World 还是 Screen 空间；Screen 默认不会被门板深度遮挡。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction|Prompt")
	EWidgetSpace PromptWidgetSpace = EWidgetSpace::Screen;

	/** 当不使用期望尺寸时，WidgetComponent 的渲染尺寸；屏幕提示不需要过大的画布。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction|Prompt")
	FIntPoint PromptDrawSize = FIntPoint(320, 96);

	/** 开启后按 Widget 的期望尺寸渲染，而非 PromptDrawSize。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction|Prompt")
	bool bDrawAtDesiredSize = false;

	/** World 空间提示的整体缩放；0.1 对应 384×128 px 画布约 38.4×12.8 cm。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction|Prompt", meta = (ClampMin = "0.01", ClampMax = "1.0"))
	float PromptWorldScale = 0.1f;

	/** 成功交互后广播，项目可绑定自己的后续逻辑。 */
	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FInteractionExecutedSignature OnInteractionExecuted;

	/** 判断组件当前是否允许被锁定和执行。 */
	UFUNCTION(BlueprintPure, Category = "Interaction")
	bool CanInteract() const;

	/** 执行配置的交互类型，并在成功后广播事件。 */
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void ExecuteInteraction(AActor* Interactor);

	/** 由玩家端组件在本地准心焦点变化时调用，以显示或隐藏提示。 */
	void SetInteractionFocused(bool bInFocused);

	/** 将 World 空间提示旋转到面向当前本地玩家相机。 */
	void UpdatePromptFacing(const FVector& CameraLocation);

private:
	/** 根据编辑器配置动态创建并注册物体上方的 WidgetComponent。 */
	void CreatePromptWidget();
	/** 把组件和提示文本同步给已创建的 Widget 实例。 */
	void UpdatePromptWidget();

	/** 运行时创建的提示组件；不保存到资源，也不参与复制。 */
	UPROPERTY(Transient)
	TObjectPtr<UWidgetComponent> PromptWidgetComponent;

	/** 记录一次性物品是否已成功执行过交互。 */
	bool bHasBeenInteracted = false;
	/** 记录本地玩家的准心是否正锁定当前物品。 */
	bool bIsFocused = false;
};
