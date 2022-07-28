#include "MiraiContactImp.h"

#include "NativeCPPCommon.h"

#include "Bot/MiraiBotImp.h"

MiraiContactImp::MiraiContactImp(miraicore_kref_net_mamoe_mirai_contact_Contact InContact, bool bPossess)
	: bOwnedContact(bPossess)
	, _MiraiContactHandle(InContact)
{
	CHECK_MIRAI_SYMBOLS();
}

MiraiContactImp::~MiraiContactImp()
{
	if (_MiraiContactHandle.pinned != nullptr)
	{
		if(bOwnedContact)
		{
			GMiraiSymbols->DisposeStablePointer(_MiraiContactHandle.pinned);
			_MiraiContactHandle.pinned = nullptr;
		}
	}
}

const char* MiraiContactImp::getAvatarUrl(EAvatarSpec AvatarSpec)
{
	if (_CachedAvatarUrl.find(AvatarSpec) == _CachedAvatarUrl.cend())
	{
		_CachedAvatarUrl[AvatarSpec] = std::string("http://q.qlogo.cn/g?b=qq&nk=") + std::to_string(getId()) + "&s=" + std::to_string(static_cast<int>(AvatarSpec));
	}

	return _CachedAvatarUrl[AvatarSpec].c_str();
}

std::shared_ptr<IMiraiBot> MiraiContactImp::getBot()
{
	return std::make_shared<MiraiBotImp>(GMiraiSymbols->kotlin.root.net.mamoe.mirai.contact.Contact.get_bot(_MiraiContactHandle), false);
}

long long MiraiContactImp::getId()
{
	return GMiraiSymbols->kotlin.root.net.mamoe.mirai.contact.Contact.get_id(_MiraiContactHandle);
}
