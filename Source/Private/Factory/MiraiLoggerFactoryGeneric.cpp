#include "MiraiLoggerFactoryGeneric.h"

#include "Logger/MiraiPlatformLogger.h"

MiraiLoggerFactoryGeneric::~MiraiLoggerFactoryGeneric()
{
}

std::shared_ptr<IMiraiLogger> MiraiLoggerFactoryGeneric::createPlatformLogger(const std::shared_ptr<std::string> Identity)
{
	return std::make_shared<MiraiPlatformLogger>(Identity);
}
