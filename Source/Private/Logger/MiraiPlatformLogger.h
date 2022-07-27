#ifndef MIRAI_PLATFORM_LOGGER_H
#define MIRAI_PLATFORM_LOGGER_H

#include "Interfaces/IMiraiLogger.h"

class MiraiPlatformLogger : public IMiraiLogger
{
public:
	explicit MiraiPlatformLogger(const char* Identity);
	virtual ~MiraiPlatformLogger() override;

	virtual std::shared_ptr<std::string> getIdentity() override;
	virtual void printLog(const std::string& Message, EMiraiLogLevel Level) override;

private:
	std::string Identity_;
	void* MiraiPlatformLoggerHandle_;
};

#endif