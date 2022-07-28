#ifndef MIRAI_BOT_CONFIGURATION_IMP_H
#define MIRAI_BOT_CONFIGURATION_IMP_H

#include "Definitions.h"
#include "IMiraiBotConfiguration.h"

#include "miraicore_api.h"

class MiraiBotConfigurationImp : public IMiraiBotConfiguration
{
public:
	MiraiBotConfigurationImp();
	MiraiBotConfigurationImp(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration DefaultConfig);
	virtual ~MiraiBotConfigurationImp();

private:
	bool bIsDefault;
	miraicore_kref_net_mamoe_mirai_utils_BotConfiguration _MiraiBotConfigurationHandle;
};

#endif