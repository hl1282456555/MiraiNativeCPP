#ifndef I_MIRAI_LOGGER_FACTORY_H
#define I_MIRAI_LOGGER_FACTORY_H

#include <memory>

class IMiraiLoggerFactory
{
public:
	virtual ~IMiraiLoggerFactory() = 0;

	virtual std::shared_ptr<IMiraiLoggerFactory> get() = 0;
};

#endif