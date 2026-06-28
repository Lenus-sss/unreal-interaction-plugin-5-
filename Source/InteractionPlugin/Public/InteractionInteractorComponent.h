#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "InteractionInteractorComponent.generated.h"

class UInteractionComponent;

/**
 * 挂载到本地控制 Pawn 或 Character 的玩家端交互组件。
 * 它从相机中心射线检测物品、驱动提示显隐，并可直接检测原始 E 键。
 */
UCLASS(ClassGroup = (Interaction), meta = (BlueprintSpawnableComponent))
class INTERACTIONPLUGIN_API UInteractionInteractorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	/** 初始化组件 Tick；实际仅在本地控制 Pawn 上启用。 */
	UInteractionInteractorComponent();

	/** 根据 Owner 是否为本地 Pawn 决定是否启用射线检测 Tick。 */
	virtual void BeginPlay() override;
	/** 结束游戏时清除焦点，确保物品提示被隐藏。 */
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	/** 每帧从玩家视角检测交互物、更新提示朝向并检查 E 键。 */
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** 从相机中心向前检测的最大距离，单位为 Unreal Units。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	float InteractionDistance = 500.0f;

	/** 准心扫描半径，单位为 Unreal Units；设为 0 时退回精确线检测。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction", meta = (ClampMin = "0.0"))
	float InteractionTraceRadius = 35.0f;

	/** 射线检测使用的碰撞通道；默认要求物品阻挡 Visibility。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	TEnumAsByte<ECollisionChannel> TraceChannel = ECC_Visibility;

	/** 使用其他输入系统时设为 false，并由项目输入回调调用 TryInteract。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	bool bUseRawEKey = true;

	/** 开启后绘制本帧准心射线，绿色代表锁定交互物，红色代表未锁定。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction|Debug")
	bool bDebugTrace = false;

	/** 对当前焦点物品执行交互，适合从 Enhanced Input 等外部输入回调调用。 */
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void TryInteract();

	/** 返回当前被本地准心锁定的交互组件；未锁定时返回 nullptr。 */
	UFUNCTION(BlueprintPure, Category = "Interaction")
	UInteractionComponent* GetFocusedInteraction() const { return FocusedInteraction.Get(); }

private:
	/** 获取玩家控制器实际使用的相机位置与旋转，用作射线起点与方向。 */
	bool GetPlayerView(FVector& OutLocation, FRotator& OutRotation) const;
	/** 在焦点对象变化时隐藏旧提示并显示新提示。 */
	void UpdateFocusedInteraction(UInteractionComponent* NewFocusedInteraction);

	/** 弱引用当前焦点，防止物品销毁后留下悬垂裸指针。 */
	TWeakObjectPtr<UInteractionComponent> FocusedInteraction;
};
