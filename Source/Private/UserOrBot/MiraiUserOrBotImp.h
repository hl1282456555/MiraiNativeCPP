#ifndef MIRAI_USER_OR_BOT_IMP_H
#define MIRAI_USER_OR_BOT_IMP_H

#include "NativeCPPCommon.h"
#include "Interfaces/IMiraiUserOrBot.h"

#include <map>
#include <string>

class MiraiUserOrBotImp : public IMiraiUserOrBot
{
public:
	explicit MiraiUserOrBotImp(miraicore_kref_net_mamoe_mirai_contact_UserOrBot InUserOrBot, bool bPossess = true);
	virtual ~MiraiUserOrBotImp() override;

	// IMiraiContactOrBot interface
	virtual const char* getAvatarUrl(EAvatarSpec AvatarSpec) override;
	virtual std::shared_ptr<IMiraiBot> getBot() override;
	virtual long long getId() override;

	// IMiraiUserOrBot interface
	virtual const char* getNickName() override;
private:
	bool bOwnedUserOrBot;
	std::string _CachedNickName;
	std::map<EAvatarSpec, std::string> _CachedAvatarUrl;
	miraicore_kref_net_mamoe_mirai_contact_UserOrBot _MiraiUserOrBotHandle;
};

#endif