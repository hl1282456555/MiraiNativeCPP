#ifndef I_MIRAI_LOGGER_H
#define I_MIRAI_LOGGER_H

#include <string>
#include <memory>

enum class EMiraiLogLevel
{
	Verbose = 0,
	Debug,
	Info,
	Warning,
	Error
};

class IMiraiLogger
{
public:
	virtual ~IMiraiLogger() = 0;

	// interface of MiraiLogger
	virtual std::shared_ptr<std::string> getIdentity() = 0;
	virtual void printLog(const std::shared_ptr<std::string> Message, EMiraiLogLevel Level);
};

#endif