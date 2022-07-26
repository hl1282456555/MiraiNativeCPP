#ifndef I_MIRAI_LOGGER_H
#define I_MIRAI_LOGGER_H

#include <memory>
#include <string>

class IMiraiLogger
{
public:
	virtual ~IMiraiLogger() = 0;

	// interface of MiraiLogger
	virtual std::wstring getIdentity() = 0;
	virtual bool isEnabled() = 0;
	virtual bool isVerboseEnabled() = 0;
	virtual bool isDebugEnabled() = 0;
	virtual bool isInfoEnabled() = 0;
	virtual bool isWarningEnabled() = 0;
	virtual bool isErrorEnabled() = 0;
	virtual void verbose(const std::wstring& Message);
};

#endif