#include "InteractionPromptWidgetBase.h"

#include "Components/Image.h"
#include "Components/TextBlock.h"

void UInteractionPromptWidgetBase::SetPromptText(const FText& InPromptText)
{
	// 先缓存文本，使 Blueprint 即使未放置 TextBlock 也能读取最新值。
	PromptText = InPromptText;
	// 仅在 Widget Blueprint 提供了指定名称的文本控件时写入 UI。
	if (PromptTextBlock)
	{
		// 读取 Widget Blueprint 已指定的字体资源与样式，避免覆盖用户选择的 Unibit 字体。
		FSlateFontInfo FontInfo = PromptTextBlock->GetFont();
		// 仅将字体大小统一为推荐的 42 px（或用户在基类默认值中调整后的数值）。
		FontInfo.Size = PromptTextFontSize;
		// 将保留字体资源后的字号设置回 TextBlock。
		PromptTextBlock->SetFont(FontInfo);
		// 将组件配置的提示文字显示到自动绑定的 TextBlock。
		PromptTextBlock->SetText(PromptText);
	}

	// 仅在 Widget Blueprint 中提供了名为 PromptIcon 的 Image 时调整图标尺寸。
	if (PromptIcon)
	{
		// 以 88×88 px 的默认目标尺寸显示 1024×1024 的方形交互图标。
		PromptIcon->SetDesiredSizeOverride(PromptIconSize);
	}

	// 通知 Blueprint 执行图标切换、动画等额外表现；未实现时此调用安全无副作用。
	OnPromptTextChanged(PromptText);
}

void UInteractionPromptWidgetBase::SetInteractionComponent(UInteractionComponent* InInteractionComponent)
{
	// 缓存来源组件，供 Widget Blueprint 在需要时查询交互配置。
	InteractionComponent = InInteractionComponent;
}
