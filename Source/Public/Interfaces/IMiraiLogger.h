#ifndef I_MIRAI_LOGGER_H
#define I_MIRAI_LOGGER_H

#include "Definitions.h"

#include <string>
#include <memory>

EXPORT_SCOPE_START

enum class EMiraiLogLevel
{
	Verbose = 0,
	Debug,
	Info,
	Warning,
	Error
};

class MIRAI_NATIVE_CPP_API IMiraiLogger
{
public:
	virtual ~IMiraiLogger() {}

	// interface of MiraiLogger
	virtual std::shared_ptr<std::string> getIdentity() = 0;
	virtual void printLog(const std::string& Message, EMiraiLogLevel Level) = 0;
};

EXPORT_SCOPE_END

#endif