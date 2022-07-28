#ifndef I_MIRAI_BOT_CONFIGURATION_H
#define I_MIRAI_BOT_CONFIGURATION_H

#include "Definitions.h"

#include <memory>

enum class EBotHeatbeatStrategy
{
	STAT_HB = 0,
	REGISTER,
	NONE
};

enum class EMiraiProtocol
{
	ANDROID_PHONE = 0,
	ANDROID_PAD,
	ANDROID_WATCH,
	IPAD,
	MACOS
};

EXPORT_SCOPE_START

class MIRAI_NATIVE_CPP_API IMiraiBotConfiguration
{
public:
	virtual ~IMiraiBotConfiguration() {}

	static std::shared_ptr<IMiraiBotConfiguration> getDefault();

};

EXPORT_SCOPE_END

#endif