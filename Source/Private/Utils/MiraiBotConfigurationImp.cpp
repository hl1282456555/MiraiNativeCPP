#include "MiraiBotConfigurationImp.h"

#include "NativeCPPCommon.h"

MiraiBotConfigurationImp::MiraiBotConfigurationImp()
	: _MiraiBotConfigurationHandle(nullptr)
{

}

MiraiBotConfigurationImp::MiraiBotConfigurationImp(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration* DefaultConfig)
	: _MiraiBotConfigurationHandle(DefaultConfig)
{
	
}

MiraiBotConfigurationImp::~MiraiBotConfigurationImp()
{
	if (_MiraiBotConfigurationHandle != nullptr)
	{
		GMiraiSymbols->DisposeStablePointer(_MiraiBotConfigurationHandle);
		_MiraiBotConfigurationHandle = nullptr;
	}
}
