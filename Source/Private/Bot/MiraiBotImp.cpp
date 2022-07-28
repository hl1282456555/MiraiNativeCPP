#include "MiraiBotImp.h"

#include "NativeCPPCommon.h"

MiraiBotImp::MiraiBotImp(miraicore_kref_net_mamoe_mirai_Bot InBot, bool bPossess)
	: bOwnedBot(bPossess)
	, _MiraiBotHandle(InBot)
{
	CHECK_MIRAI_SYMBOLS();
}

MiraiBotImp::~MiraiBotImp()
{
	if (_MiraiBotHandle.pinned != nullptr)
	{
		if (bOwnedBot)
		{
			GMiraiSymbols->DisposeStablePointer(_MiraiBotHandle.pinned);
		}
		_MiraiBotHandle.pinned = nullptr;
	}
}

const char* MiraiBotImp::getAvatarUrl(EAvatarSpec AvatarSpec)
{
	if (_CachedAvatarUrl.find(AvatarSpec) == _CachedAvatarUrl.cend())
	{
		_CachedAvatarUrl[AvatarSpec] = std::string("http://q.qlogo.cn/g?b=qq&nk=") + std::to_string(getId()) + "&s=" + std::to_string(static_cast<int>(AvatarSpec));
	}

	return _CachedAvatarUrl[AvatarSpec].c_str();
}

std::shared_ptr<IMiraiBot> MiraiBotImp::getBot()
{
	return std::make_shared<MiraiBotImp>(GMiraiSymbols->kotlin.root.net.mamoe.mirai.Bot.get_bot(_MiraiBotHandle), false);
}

long long MiraiBotImp::getId()
{
	return GMiraiSymbols->kotlin.root.net.mamoe.mirai.contact.ContactOrBot.get_id({_MiraiBotHandle.pinned});
}
