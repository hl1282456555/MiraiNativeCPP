#ifndef I_MIRAI_LOGGER_FACTORY_H
#define I_MIRAI_LOGGER_FACTORY_H

#include "Definitions.h"
#include "IMiraiLogger.h"

#include <memory>

EXPORT_SCOPE_START

class MIRAI_NATIVE_CPP_API IMiraiLoggerFactory
{
public:
	virtual ~IMiraiLoggerFactory() {}

	static std::shared_ptr<IMiraiLoggerFactory> get();

	// MiraiLoggerFactory interface
	virtual std::shared_ptr<IMiraiLogger> createPlatformLogger(const char* Identity) = 0;
};

EXPORT_SCOPE_END

#endif
