#ifndef MIRAI_CONTACT_OR_BOT_IMP_H
#define MIRAI_CONTACT_OR_BOT_IMP_H

#include "Definitions.h"
#include "Interfaces/IMiraiContactOrBot.h"

#include "miraicore_api.h"

#include <map>
#include <string>

class MiraiContactOrBotImp : public IMiraiContactOrBot
{
public:
	MiraiContactOrBotImp(miraicore_kref_net_mamoe_mirai_contact_ContactOrBot InContactOrBot, bool bPossess = true);
	virtual ~MiraiContactOrBotImp() override;

	virtual const char* getAvatarUrl(EAvatarSpec AvatarSpec) override;
	virtual std::shared_ptr<IMiraiBot> getBot() override;
	virtual long long getId() override;

private:
	bool bOwnedContactOrBot;
	std::map<EAvatarSpec, std::string> _CachedAvatarUrl;
	miraicore_kref_net_mamoe_mirai_contact_ContactOrBot _MiraiContactOrBotHandle;
};

#endif