#include "MiraiUserOrBotImp.h"
#include "Bot/MiraiBotImp.h"

MiraiUserOrBotImp::MiraiUserOrBotImp(miraicore_kref_net_mamoe_mirai_contact_UserOrBot InUserOrBot, bool bPossess)
	: bOwnedUserOrBot(bPossess)
	, _MiraiUserOrBotHandle(InUserOrBot)
{
	CHECK_MIRAI_SYMBOLS();
}

MiraiUserOrBotImp::~MiraiUserOrBotImp()
{
	if (_MiraiUserOrBotHandle.pinned != nullptr)
	{
		if (bOwnedUserOrBot)
		{
			GMiraiSymbols->DisposeStablePointer(_MiraiUserOrBotHandle.pinned);
		}
		_MiraiUserOrBotHandle.pinned = nullptr;
	}
}

const char* MiraiUserOrBotImp::getAvatarUrl(EAvatarSpec AvatarSpec)
{
	if (_CachedAvatarUrl.find(AvatarSpec) == _CachedAvatarUrl.cend())
	{
		_CachedAvatarUrl[AvatarSpec] = std::string("http://q.qlogo.cn/g?b=qq&nk=") + std::to_string(getId()) + "&s=" + std::to_string(static_cast<int>(AvatarSpec));
	}

	return _CachedAvatarUrl[AvatarSpec].c_str();
}

std::shared_ptr<IMiraiBot> MiraiUserOrBotImp::getBot()
{
	return std::make_shared<MiraiBotImp>(GMiraiSymbols->kotlin.root.net.mamoe.mirai.contact.ContactOrBot.get_bot({ _MiraiUserOrBotHandle.pinned }), false);
}

long long MiraiUserOrBotImp::getId()
{
	return GMiraiSymbols->kotlin.root.net.mamoe.mirai.contact.ContactOrBot.get_id({ _MiraiUserOrBotHandle.pinned });
}

const char* MiraiUserOrBotImp::getNickName()
{
	const char* tempMiraiNickName = GMiraiSymbols->kotlin.root.net.mamoe.mirai.contact.UserOrBot.get_nick(_MiraiUserOrBotHandle);
	_CachedNickName = tempMiraiNickName;
	GMiraiSymbols->DisposeString(tempMiraiNickName);
	return _CachedNickName.c_str();
}
