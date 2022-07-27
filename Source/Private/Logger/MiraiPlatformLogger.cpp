#include "Logger/MiraiPlatformLogger.h"

#include "NativeCPPCommon.h"

MiraiPlatformLogger::MiraiPlatformLogger(const char* Identity)
{
	CHECK_MIRAI_SYMBOLS()

	_MiraiPlatformLoggerHandle = GMiraiSymbols->kotlin.root.net.mamoe.mirai.utils.PlatformLogger.PlatformLogger(Identity).pinned;
	if (_MiraiPlatformLoggerHandle == nullptr)
	{
		throw std::exception("Can not create the logger of .kotlin.root.net.mamoe.mirai.utils.PlatformLogger.");
	}

	_Identity = Identity;
}

MiraiPlatformLogger::~MiraiPlatformLogger()
{
	if (_MiraiPlatformLoggerHandle != nullptr)
	{
		GMiraiSymbols->DisposeStablePointer(_MiraiPlatformLoggerHandle);
		_MiraiPlatformLoggerHandle = nullptr;
	}
}

const char* MiraiPlatformLogger::getIdentity()
{
	return _Identity.c_str();
}

void MiraiPlatformLogger::printLog(const char* Message, EMiraiLogLevel Level)
{
	if (_MiraiPlatformLoggerHandle == nullptr || Message == nullptr)
	{
		return;
	}

	switch (Level)
	{
	case EMiraiLogLevel::Verbose:
		GMiraiSymbols->kotlin.root.net.mamoe.mirai.utils.PlatformLogger.verbose0({ _MiraiPlatformLoggerHandle }, Message, { nullptr });
		break;
	case EMiraiLogLevel::Debug:
		GMiraiSymbols->kotlin.root.net.mamoe.mirai.utils.PlatformLogger.debug0({ _MiraiPlatformLoggerHandle }, Message, { nullptr });
		break;
	case EMiraiLogLevel::Info:
		GMiraiSymbols->kotlin.root.net.mamoe.mirai.utils.PlatformLogger.info0({ _MiraiPlatformLoggerHandle }, Message, { nullptr });
		break;
	case EMiraiLogLevel::Warning:
		GMiraiSymbols->kotlin.root.net.mamoe.mirai.utils.PlatformLogger.warning0({ _MiraiPlatformLoggerHandle }, Message, { nullptr });
		break;
	case EMiraiLogLevel::Error:
		GMiraiSymbols->kotlin.root.net.mamoe.mirai.utils.PlatformLogger.error0({ _MiraiPlatformLoggerHandle }, Message, { nullptr });
		break;
	}
}
