![Interaction Plugin Demo](Show/interact.gif)

# Interaction Plugin

适用于 Unreal Engine 5 的 C++ Runtime 交互插件：玩家准心锁定物体时，在物体上方显示世界空间提示 Widget；按下 **E** 后执行配置的交互类型。

## 文件职责

- `InteractionComponent`：挂在物品上，管理交互配置、提示 Widget 和交互执行。
- `InteractionInteractorComponent`：挂在本地玩家 Pawn/Character 上，进行准心射线检测和 E 键检测。
- `InteractionPromptWidgetBase`：你的提示 Widget Blueprint 的 C++ 父类，自动将文字写入名为 `PromptTextBlock` 的文本控件。
- `InteractionTypes`：定义可在物品组件中选择的原生交互类型。

## 安装

1. 将整个 `InteractionPlugin` 文件夹复制到目标项目的 `Plugins/` 目录。
2. 对 C++ 项目重新生成项目文件并编译；首次打开项目时如 UE 提示编译插件，选择确认。
3. 在 UE 的 **Edit > Plugins** 中确认 `Interaction Plugin` 已启用，然后重启编辑器（若被要求）。

插件没有内容资源、没有输入映射资产，也不需要修改 `.uproject`。默认直接检测原始 **E** 键。

## 制作物体上方的提示 Widget

1. 创建一个 **Widget Blueprint**，父类选择 `InteractionPromptWidgetBase`。
2. 在 Designer 中自行放置图标、按键图标和文本控件；建议使用 Horizontal Box，将图标放在文字左侧。
3. 放入一个 `Image` 并命名为 `PromptIcon`，将其 Brush 设置为你的交互图标；插件会自动设为 **88×88 px**。
4. 放入一个文本控件并将其命名为 `PromptTextBlock`；将 Font 设为 `Unibit`，插件会自动写入 `Prompt Text` 并设为 **42 px**。
5. 如需额外的视觉变化，可在 Event Graph 实现 `OnPromptTextChanged`。
6. 保存该 Widget Blueprint，例如 `WBP_InteractionPrompt`。

提示由插件在运行时以 `WidgetComponent` 创建，默认使用 **World** 空间并位于物体根组件上方 100 单位。默认画布为 **384×128 px**，整体 World 缩放为 **0.1**，实际约为 **38.4×12.8 cm**；你可在物品的交互组件中改为 Screen 空间、调整偏移、尺寸和缩放。

## 图标与字体资源

插件已启用 Content 资源目录，请在 UE 的 Content Browser 中按以下位置导入资源：

- `Plugins/InteractionPlugin/Content/InteractionPrompt/Icons/`：交互图标、按键图标等 Texture 资源；
- `Plugins/InteractionPlugin/Content/InteractionPrompt/Fonts/`：导入 `.ttf` 或 `.otf` 后生成的 Font 资源。

在你的 `WBP_InteractionPrompt` 中：

1. 添加 `Image` 控件并将其 Brush 设置为导入的图标；
2. 添加并命名一个 `TextBlock` 为 `PromptTextBlock`；
3. 在该 TextBlock 的 Font 属性中选择导入的字体资源。

准心锁定携带 `Interaction Component` 的物体时，插件会显示该 Widget，并从 C++ 自动把该组件的 `Prompt Text` 写入 `PromptTextBlock`。请将 Image 命名为 `PromptIcon` 以应用推荐的 88×88 px 图标尺寸；请将 TextBlock 命名为 `PromptTextBlock` 以应用推荐的 Unibit 42 px 字号。

## 配置物品

1. 打开需要交互的 Actor Blueprint（或 C++ Actor）。
2. 添加 `Interaction Component`。
3. 设置：
   - `Prompt Widget Class`：选择你的 `WBP_InteractionPrompt`；
   - `Prompt Text`：例如“按 E 交互”；
   - `Interaction Action`：选择“打印一个字”或“打印两个字”；
   - 可选：`Interact Only Once`。
4. 确保物品的碰撞组件会**阻挡 Visibility** 通道；准心射线使用这个通道检测。

## 配置玩家

1. 打开玩家 Pawn / Character Blueprint（或 C++ 类）。
2. 添加 `Interaction Interactor Component`。
3. 设置 `Interaction Distance`（默认 500）。
4. 如果提示必须完全对准中心才出现，调大 `Interaction Trace Radius`；默认 35，设为 0 时使用精确线检测。

如果玩家是 C++ Character，可在头文件前置声明并保存组件引用：

```cpp
class UInteractionInteractorComponent;

UPROPERTY(VisibleAnywhere, Category = "Interaction")
TObjectPtr<UInteractionInteractorComponent> InteractionInteractorComponent;
```

然后在构造函数中创建组件：

```cpp
#include "InteractionInteractorComponent.h"

InteractionInteractorComponent = CreateDefaultSubobject<UInteractionInteractorComponent>("InteractionInteractorComponent");
```

组件只在本地控制的 Pawn 上运行。它每帧从玩家视角中心向前射线检测，焦点变化时显示/隐藏物体的提示；按下原始 **E** 键会调用交互。

若项目已有 Enhanced Input 或其他输入架构，将 `Use Raw E Key` 设为 false，并从自己的输入回调调用 `Try Interact` 即可。

## 使用默认 Cube 示例 Actor

插件提供 `InteractionExampleActor`，可作为最小可运行示例：

1. 编译插件后，在 **Place Actors** 或 Content Browser 的 C++ Classes 中找到 `InteractionExampleActor` 并拖入关卡；
2. 它会自动使用 UE 的默认 Cube，Cube 已配置为阻挡 `Visibility`；
3. 在该 Actor 的 `Interaction Component` 中，将 `Prompt Widget Class` 指定为你的 `WBP_InteractionPrompt`；
4. 运行游戏并用准心对准 Cube，提示会显示在 Cube 上方；按 **E** 后会在 Output Log 输出 `一`。

该示例默认使用“打印一个字”交互类型。你可以直接在详情面板修改 `Prompt Text`、`Interaction Action`、提示偏移和其他交互属性。

## 当前示例交互行为

- `Print One Character`：输出 Log `一`
- `Print Two Characters`：输出 Log `两个`

成功交互后会广播 `On Interaction Executed`，可用于接入项目自己的 C++ 或蓝图逻辑。后续可在 `EInteractionAction` 和 `UInteractionComponent::ExecuteInteraction` 中添加更多原生交互类型。

## 注意事项

- 这是本地交互检测与显示逻辑；多人游戏中的权威服务器校验、RPC 和同步需要按项目网络规则扩展。
- 一个客户端默认面向单一的本地玩家视角；分屏项目需自行扩展每个本地玩家的提示实例。
- `Binaries/` 与 `Intermediate/` 是编译生成物，不应提交到 GitHub。
