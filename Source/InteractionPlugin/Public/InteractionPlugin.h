#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

// 声明插件专用日志分类，供交互执行结果和运行时警告统一输出。
DECLARE_LOG_CATEGORY_EXTERN(LogInteractionPlugin, Log, All);

// InteractionPlugin 的 Runtime 模块入口；当前无需额外的启动或关闭逻辑。
class FInteractionPluginModule final : public IModuleInterface
{
};
