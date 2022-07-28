#ifndef MIRAI_BOT_IMP_H
#define MIRAI_BOT_IMP_H

#include "Interfaces/IMiraiBot.h"

#include "miraicore_api.h"

#include <map>
#include <string>

class MiraiBotImp : public IMiraiBot
{
public:
	explicit MiraiBotImp(miraicore_kref_net_mamoe_mirai_Bot InBot, bool bPossess = true);
	virtual ~MiraiBotImp() override;

	// IMiraiContactOrBot interface
	virtual const char* getAvatarUrl(EAvatarSpec AvatarSpec) override;
	virtual std::shared_ptr<IMiraiBot> getBot() override;
	virtual long long getId() override;

	// IMiraiBot interface

private:
	bool bOwnedBot;
	std::map<EAvatarSpec, std::string> _CachedAvatarUrl;
	miraicore_kref_net_mamoe_mirai_Bot _MiraiBotHandle;
};

#endif
