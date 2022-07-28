#include "Factory/MiraiLoggerFactoryGeneric.h"

#include "Logger/MiraiPlatformLogger.h"

MiraiLoggerFactoryGeneric::~MiraiLoggerFactoryGeneric()
{
}

std::shared_ptr<IMiraiLogger> MiraiLoggerFactoryGeneric::createPlatformLogger(const char* Identity)
{
	return std::make_shared<MiraiPlatformLogger>(Identity);
}
