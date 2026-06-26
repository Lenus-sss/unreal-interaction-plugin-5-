#include "InteractionPlugin.h"

// 为本翻译单元定义本地化宏命名空间，避免与其他模块的文本键冲突。
#define LOCTEXT_NAMESPACE "FInteractionPluginModule"

// 实例化头文件中声明的插件日志分类。
DEFINE_LOG_CATEGORY(LogInteractionPlugin);
// 注册 Runtime 模块，使 Unreal 能在加载插件时创建该模块。
IMPLEMENT_MODULE(FInteractionPluginModule, InteractionPlugin)

// 清理本翻译单元使用的本地化宏，防止污染后续包含内容。
#undef LOCTEXT_NAMESPACE
