#pragma once

#include "CoreMinimal.h"
#include "InteractionTypes.generated.h"

/** UInteractionComponent 内置的示例交互行为，可在编辑器中直接选择。 */
UENUM(BlueprintType)
enum class EInteractionAction : uint8
{
	/** 交互成功后向 Output Log 输出一个汉字“ 一 ”。 */
	PrintOneCharacter UMETA(DisplayName = "打印一个字"),
	/** 交互成功后向 Output Log 输出两个汉字“ 两个 ”。 */
	PrintTwoCharacters UMETA(DisplayName = "打印两个字")
};
