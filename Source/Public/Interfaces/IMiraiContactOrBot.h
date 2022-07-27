#ifndef I_MIRAI_CONTACT_OR_BOT_H
#define I_MIRAI_CONTACT_OR_BOT_H

#include "Definitions.h"
#include "IMiraiBot.h"

#include <memory>

enum class EAvatarSpec
{
	Smallest = 0,
	Small,
	Medium,
	Large,
	Largest,
	original
};

class IMiraiContactOrBot
{
public:
	virtual ~IMiraiContactOrBot() = 0;

	virtual const char* getAvatarUrl() = 0;
	virtual std::shared_ptr<IMiraiBot> getBot() = 0;
	virtual long long getId() = 0;
	virtual const char* avatarUrl(EAvatarSpec AvatarSpec) = 0;
};

#endif