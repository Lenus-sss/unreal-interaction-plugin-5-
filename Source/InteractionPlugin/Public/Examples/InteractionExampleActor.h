#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionExampleActor.generated.h"

class UInteractionComponent;
class UStaticMeshComponent;

/**
 * 可直接拖入关卡的交互示例 Actor。
 * 它使用 UE 默认 Cube 作为可被准心命中的物体，并预置“按 E 交互”的提示和“打印一个字”行为。
 */
UCLASS(Blueprintable)
class INTERACTIONPLUGIN_API AInteractionExampleActor : public AActor
{
	GENERATED_BODY()

public:
	/** 创建默认 Cube、配置 Visibility 碰撞，并挂载预配置的交互组件。 */
	AInteractionExampleActor();

	/** 示例物体的可见网格，同时作为 Actor 根组件与准心射线碰撞体。 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction Example")
	TObjectPtr<UStaticMeshComponent> CubeMesh;

	/** 示例物体的交互配置；在详情面板中为其指定 Prompt Widget Class 即可显示提示。 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction Example")
	TObjectPtr<UInteractionComponent> InteractionComponent;
};
