#ifndef I_MIRAI_CONTACT_OR_BOT_H
#define I_MIRAI_CONTACT_OR_BOT_H

#include "Definitions.h"

#include <memory>

enum class EAvatarSpec
{
	Original = 0,
	Smallest = 40,
	Small = 41,
	Medium = 100,
	Large = 140,
	Largest = 640
};

EXPORT_SCOPE_START

class MIRAI_NATIVE_CPP_API IMiraiContactOrBot
{
public:
	virtual ~IMiraiContactOrBot() {}

	// MiraiContactOrBot interface
	virtual const char* getAvatarUrl(EAvatarSpec AvatarSpec) = 0;
	virtual std::shared_ptr<class IMiraiBot> getBot() = 0;
	virtual long long getId() = 0;
};

EXPORT_SCOPE_END

#endif