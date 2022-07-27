#include "Interfaces/IMiraiLoggerFactory.h"

#include "Factory/MiraiLoggerFactoryGeneric.h"

std::shared_ptr<IMiraiLoggerFactory> IMiraiLoggerFactory::get()
{
	static std::shared_ptr<IMiraiLoggerFactory> instance = std::make_shared<MiraiLoggerFactoryGeneric>();
	return instance;
}
