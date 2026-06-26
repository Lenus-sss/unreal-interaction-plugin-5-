#include "Examples/InteractionExampleActor.h"

#include "Components/StaticMeshComponent.h"
#include "InteractionComponent.h"
#include "UObject/ConstructorHelpers.h"

AInteractionExampleActor::AInteractionExampleActor()
{
	// 创建静态网格组件，作为示例 Actor 的根组件和可见 Cube。
	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	// 将 Cube 指定为根组件，使交互提示能够随 Cube 一起移动和旋转。
	SetRootComponent(CubeMesh);

	// 查找引擎内置的 BasicShapes Cube 资源，因此示例不需要额外模型文件。
	static ConstructorHelpers::FObjectFinder<UStaticMesh> DefaultCubeMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
	// 仅在引擎默认资源成功找到时设置网格，避免资源路径异常导致空指针。
	if (DefaultCubeMesh.Succeeded())
	{
		// 将引擎默认 Cube 赋给静态网格组件。
		CubeMesh->SetStaticMesh(DefaultCubeMesh.Object);
	}

	// 启用查询与物理碰撞，使玩家端的 Visibility 射线能够命中该 Cube。
	CubeMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	// 让 Cube 阻挡所有通道，包含交互检测默认使用的 Visibility 通道。
	CubeMesh->SetCollisionResponseToAllChannels(ECR_Block);

	// 创建并挂载插件的物品端交互组件。
	InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
	// 设置准心锁定时要显示的默认提示文字。
	InteractionComponent->PromptText = NSLOCTEXT("InteractionExample", "DefaultPrompt", "按 E 交互");
	// 设置默认交互为输出一个汉字“ 一 ”的示例行为。
	InteractionComponent->InteractionAction = EInteractionAction::PrintOneCharacter;
	// 将提示放在默认 100 cm Cube 顶部上方，避免与网格重叠。
	InteractionComponent->PromptRelativeLocation = FVector(0.0, 0.0, 100.0);
}
