#ifndef MIRAI_PLATFORM_LOGGER_H
#define MIRAI_PLATFORM_LOGGER_H

#include "Interfaces/IMiraiLogger.h"

class MiraiPlatformLogger : public IMiraiLogger
{
public:
	explicit MiraiPlatformLogger(const char* Identity);
	virtual ~MiraiPlatformLogger() override;

	virtual const char* getIdentity() override;
	virtual void printLog(const char* Message, EMiraiLogLevel Level) override;

private:
	std::string _Identity;
	void* _MiraiPlatformLoggerHandle;
};

#endif