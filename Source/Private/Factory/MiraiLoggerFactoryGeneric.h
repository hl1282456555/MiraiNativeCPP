#ifndef MIRAI_LOGGER_FACTORY_GENERIC_H
#define MIRAI_LOGGER_FACTORY_GENERIC_H


#include "Interfaces/IMiraiLoggerFactory.h"

class MiraiLoggerFactoryGeneric : public IMiraiLoggerFactory
{
public:
	virtual ~MiraiLoggerFactoryGeneric() override;

	virtual std::shared_ptr<IMiraiLogger> createPlatformLogger(const std::shared_ptr<std::string> Identity) override;
};

#endif