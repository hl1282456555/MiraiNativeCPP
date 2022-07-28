#include "MiraiBotConfigurationImp.h"

#include "NativeCPPCommon.h"

MiraiBotConfigurationImp::MiraiBotConfigurationImp()
	: _MiraiBotConfigurationHandle{nullptr}
{

}

MiraiBotConfigurationImp::MiraiBotConfigurationImp(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration DefaultConfig)
	: _MiraiBotConfigurationHandle(DefaultConfig)
{
	
}

MiraiBotConfigurationImp::~MiraiBotConfigurationImp()
{
	if (_MiraiBotConfigurationHandle.pinned != nullptr)
	{
		GMiraiSymbols->DisposeStablePointer(_MiraiBotConfigurationHandle.pinned);
		_MiraiBotConfigurationHandle.pinned = nullptr;
	}
}
