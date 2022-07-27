#ifndef I_MIRAI_LOGGER_FACTORY_H
#define I_MIRAI_LOGGER_FACTORY_H

#include "Definitions.h"
#include "IMiraiLogger.h"

#include <memory>

EXPORT_SCOPE_START

class IMiraiLoggerFactory
{
public:
	virtual ~IMiraiLoggerFactory() = 0;

	static std::shared_ptr<IMiraiLoggerFactory> get();
	virtual std::shared_ptr<IMiraiLogger> createPlatformLogger(const std::shared_ptr<std::string> Identity) = 0;
};

EXPORT_SCOPE_END

#endif
