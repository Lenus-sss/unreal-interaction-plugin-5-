using UnrealBuildTool;

// 定义 InteractionPlugin 模块在 Unreal Build Tool 中的编译依赖和预编译头策略。
public class InteractionPlugin : ModuleRules
{
	// 构造模块规则，并由 Target 提供当前构建目标的平台与配置。
	public InteractionPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		// 使用显式或共享预编译头，以兼顾编译速度和模块隔离性。
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		// 声明公共依赖：引用本插件公开头文件的模块也需要能访问这些模块。
		PublicDependencyModuleNames.AddRange(new[]
		{
			// Core 提供基础类型、日志和通用 UE 宏。
			"Core",
			// CoreUObject 提供 UObject、反射和垃圾回收支持。
			"CoreUObject",
			// Engine 提供 Actor、组件、碰撞检测和玩家控制器。
			"Engine",
			// InputCore 提供 EKeys::E 等原始按键定义。
			"InputCore",
			// UMG 提供 UUserWidget 与 UWidgetComponent 的 UI 能力。
			"UMG"
		});

		// 声明仅供 .cpp 实现使用的 UI 渲染依赖，避免不必要地暴露给使用者。
		PrivateDependencyModuleNames.AddRange(new[]
		{
			// Slate 是 UMG 底层控件框架。
			"Slate",
			// SlateCore 提供 Slate 的基础类型和样式定义。
			"SlateCore"
		});
	}
}
