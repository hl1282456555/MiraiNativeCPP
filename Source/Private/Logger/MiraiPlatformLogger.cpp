#include "Logger/MiraiPlatformLogger.h"

#include "NativeCPPCommon.h"

MiraiPlatformLogger::MiraiPlatformLogger(const char* Identity)
{
	CHECK_MIRAI_SYMBOLS()

	MiraiPlatformLoggerHandle_ = GMiraiSymbols->kotlin.root.net.mamoe.mirai.utils.PlatformLogger.PlatformLogger(Identity).pinned;
	if (MiraiPlatformLoggerHandle_ == nullptr)
	{
		throw std::exception("Can not create the logger of .kotlin.root.net.mamoe.mirai.utils.PlatformLogger.");
	}

	Identity_ = Identity;
}

MiraiPlatformLogger::~MiraiPlatformLogger()
{
	if (MiraiPlatformLoggerHandle_ != nullptr)
	{
		GMiraiSymbols->DisposeStablePointer(MiraiPlatformLoggerHandle_);
		MiraiPlatformLoggerHandle_ = nullptr;
	}
}

std::shared_ptr<std::string> MiraiPlatformLogger::getIdentity()
{
	return std::make_shared<std::string>(Identity_);
}

void MiraiPlatformLogger::printLog(const std::string& Message, EMiraiLogLevel Level)
{
	if (MiraiPlatformLoggerHandle_ == nullptr)
	{
		return;
	}

	switch (Level)
	{
	case EMiraiLogLevel::Verbose:
		GMiraiSymbols->kotlin.root.net.mamoe.mirai.utils.PlatformLogger.verbose0({ MiraiPlatformLoggerHandle_ }, Message.c_str(), { nullptr });
		break;
	case EMiraiLogLevel::Debug:
		GMiraiSymbols->kotlin.root.net.mamoe.mirai.utils.PlatformLogger.debug0({ MiraiPlatformLoggerHandle_ }, Message.c_str(), { nullptr });
		break;
	case EMiraiLogLevel::Info:
		GMiraiSymbols->kotlin.root.net.mamoe.mirai.utils.PlatformLogger.info0({ MiraiPlatformLoggerHandle_ }, Message.c_str(), { nullptr });
		break;
	case EMiraiLogLevel::Warning:
		GMiraiSymbols->kotlin.root.net.mamoe.mirai.utils.PlatformLogger.warning0({ MiraiPlatformLoggerHandle_ }, Message.c_str(), { nullptr });
		break;
	case EMiraiLogLevel::Error:
		GMiraiSymbols->kotlin.root.net.mamoe.mirai.utils.PlatformLogger.error0({ MiraiPlatformLoggerHandle_ }, Message.c_str(), { nullptr });
		break;
	}
}
