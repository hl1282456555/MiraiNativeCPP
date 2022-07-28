#include "ContactOrBot/MiraiContactOrBotImp.h"
#include "NativeCPPCommon.h"
#include "Bot/MiraiBotImp.h"

#include <string>

MiraiContactOrBotImp::MiraiContactOrBotImp(miraicore_kref_net_mamoe_mirai_contact_ContactOrBot InContactOrBot, bool bPossess)
	: bOwnedContactOrBot(bPossess)
	, _MiraiContactOrBotHandle(InContactOrBot)
{
	CHECK_MIRAI_SYMBOLS();
}

MiraiContactOrBotImp::~MiraiContactOrBotImp()
{
	if (_MiraiContactOrBotHandle.pinned == nullptr)
	{
		if (bOwnedContactOrBot)
		{
			GMiraiSymbols->DisposeStablePointer(_MiraiContactOrBotHandle.pinned);
		}
		_MiraiContactOrBotHandle.pinned = nullptr;
	}
}

const char* MiraiContactOrBotImp::getAvatarUrl(EAvatarSpec AvatarSpec)
{
	if (_CachedAvatarUrl.find(AvatarSpec) == _CachedAvatarUrl.cend())
	{
		_CachedAvatarUrl[AvatarSpec] = std::string("http://q.qlogo.cn/g?b=qq&nk=") + std::to_string(getId()) + "&s=" + std::to_string(static_cast<int>(AvatarSpec));
	}

	return _CachedAvatarUrl[AvatarSpec].c_str();
}

std::shared_ptr<IMiraiBot> MiraiContactOrBotImp::getBot()
{
	return std::make_shared<MiraiBotImp>(GMiraiSymbols->kotlin.root.net.mamoe.mirai.contact.ContactOrBot.get_bot(_MiraiContactOrBotHandle), false);
}

long long MiraiContactOrBotImp::getId()
{
	return GMiraiSymbols->kotlin.root.net.mamoe.mirai.contact.ContactOrBot.get_id(_MiraiContactOrBotHandle);
}
