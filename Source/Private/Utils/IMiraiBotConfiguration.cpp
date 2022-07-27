#include "IMiraiBotConfiguration.h"

#include "MiraiBotConfigurationImp.h"

#include "NativeCPPCommon.h"

std::shared_ptr<IMiraiBotConfiguration> IMiraiBotConfiguration::getDefault()
{
	CHECK_MIRAI_SYMBOLS();

	auto configurationInst = GMiraiSymbols->kotlin.root.net.mamoe.mirai.utils.BotConfiguration.Companion._instance();
	if (configurationInst.pinned == nullptr)
	{
		return nullptr;
	}

	return std::make_shared<MiraiBotConfigurationImp>(GMiraiSymbols->kotlin.root.net.mamoe.mirai.utils.BotConfiguration.Companion.get_Default(configurationInst));
}
