#ifndef MIRAI_PLATFORM_LOGGER_H
#define MIRAI_PLATFORM_LOGGER_H

#include "Interfaces/IMiraiLogger.h"

#include "miraicore_api.h"

class MiraiPlatformLogger : public IMiraiLogger
{
public:
	explicit MiraiPlatformLogger(const char* Identity);
	virtual ~MiraiPlatformLogger() override;

	virtual const char* getIdentity() override;
	virtual void printLog(const char* Message, EMiraiLogLevel Level) override;

private:
	std::string _Identity;
	miraicore_kref_net_mamoe_mirai_utils_PlatformLogger _MiraiPlatformLoggerHandle;
};

#endif