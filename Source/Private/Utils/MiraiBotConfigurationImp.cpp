#include "Utils/MiraiBotConfigurationImp.h"

#include "NativeCPPCommon.h"

MiraiBotConfigurationImp::MiraiBotConfigurationImp()
	: bIsDefault(false)
	, _MiraiBotConfigurationHandle{nullptr}
{
	CHECK_MIRAI_SYMBOLS();
}

MiraiBotConfigurationImp::MiraiBotConfigurationImp(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration DefaultConfig)
	: bIsDefault(true)
	, _MiraiBotConfigurationHandle(DefaultConfig)
{
	CHECK_MIRAI_SYMBOLS();
}

MiraiBotConfigurationImp::~MiraiBotConfigurationImp()
{
	if (_MiraiBotConfigurationHandle.pinned != nullptr)
	{
		if (!bIsDefault)
		{
			GMiraiSymbols->DisposeStablePointer(_MiraiBotConfigurationHandle.pinned);
		}

		_MiraiBotConfigurationHandle.pinned = nullptr;
	}
}
