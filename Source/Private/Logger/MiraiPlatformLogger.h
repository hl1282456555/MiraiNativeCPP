#ifndef MIRAI_PLATFORM_LOGGER_H
#define MIRAI_PLATFORM_LOGGER_H

#include "Interfaces/IMiraiLogger.h"

class MiraiPlatformLogger : public IMiraiLogger
{
public:
	explicit MiraiPlatformLogger(const std::shared_ptr<std::string> Identity);
	virtual ~MiraiPlatformLogger() override;

	virtual void printLog(const std::shared_ptr<std::string> Message, EMiraiLogLevel Level) override;

private:
	void* MiraiPlatformLoggerHandle_;
};

#endif