#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InteractionPromptWidgetBase.generated.h"

class UInteractionComponent;
class UImage;
class UTextBlock;

/**
 * 物体上方提示 Widget Blueprint 的 C++ 基类。
 * 继承此类的 Widget 可自行设计图标和布局；若文本控件命名为 PromptTextBlock，C++ 会自动更新它。
 */
UCLASS(Abstract, Blueprintable)
class INTERACTIONPLUGIN_API UInteractionPromptWidgetBase : public UUserWidget
{
	GENERATED_BODY()

public:
	/** 默认提示文字字号；会保留 Widget Blueprint 中选择的字体资源，只覆盖其 Size。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction Prompt", meta = (ClampMin = "1", ClampMax = "256"))
	int32 PromptTextFontSize = 42;

	/** 默认方形图标尺寸，按 1024×1024 源图以约 8.6% 比例显示。 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction Prompt", meta = (ClampMin = "1.0", ClampMax = "512.0"))
	FVector2D PromptIconSize = FVector2D(88.0, 88.0);

	/** 保存新的提示文本、同步可选的文本控件，并通知 Blueprint 进行额外视觉更新。 */
	UFUNCTION(BlueprintCallable, Category = "Interaction Prompt")
	void SetPromptText(const FText& InPromptText);

	/** 返回当前由交互组件提供的提示文本，供 Widget Blueprint 查询。 */
	UFUNCTION(BlueprintPure, Category = "Interaction Prompt")
	FText GetPromptText() const { return PromptText; }

	/** 返回创建该 Widget 的交互组件，便于 Widget Blueprint 读取扩展数据。 */
	UFUNCTION(BlueprintPure, Category = "Interaction Prompt")
	UInteractionComponent* GetInteractionComponent() const { return InteractionComponent.Get(); }

	/** 可选 Blueprint 事件：提示文本更新后触发，可用于播放动画或更新自定义控件。 */
	UFUNCTION(BlueprintImplementableEvent, Category = "Interaction Prompt")
	void OnPromptTextChanged(const FText& InPromptText);

private:
	// 仅允许交互组件在创建 Widget 后写入其来源组件。
	friend class UInteractionComponent;

	/** 记录创建此 Widget 的交互组件，避免对外暴露不必要的写入入口。 */
	void SetInteractionComponent(UInteractionComponent* InInteractionComponent);

	/** 缓存最新提示文本，即使 Widget 没有文本控件也可供 Blueprint 读取。 */
	UPROPERTY(Transient, BlueprintReadOnly, Category = "Interaction Prompt", meta = (AllowPrivateAccess = "true"))
	FText PromptText;

	/** 可选自动绑定的文本控件；在 Widget Blueprint 中将 TextBlock 命名为 PromptTextBlock 即可。 */
	UPROPERTY(BlueprintReadOnly, Category = "Interaction Prompt", meta = (BindWidgetOptional, AllowPrivateAccess = "true"))
	TObjectPtr<UTextBlock> PromptTextBlock;

	/** 可选自动绑定的图标控件；在 Widget Blueprint 中将 Image 命名为 PromptIcon 即可。 */
	UPROPERTY(BlueprintReadOnly, Category = "Interaction Prompt", meta = (BindWidgetOptional, AllowPrivateAccess = "true"))
	TObjectPtr<UImage> PromptIcon;

	/** 缓存来源交互组件，避免 Widget 持有裸指针。 */
	UPROPERTY(Transient, BlueprintReadOnly, Category = "Interaction Prompt", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UInteractionComponent> InteractionComponent;
};
