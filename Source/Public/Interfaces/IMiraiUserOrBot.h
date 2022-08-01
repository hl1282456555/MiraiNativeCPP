#ifndef I_MIRAI_USER_OR_BOT_H
#define I_MIRAI_USER_OR_BOT_H

#include "Definitions.h"
#include "Interfaces/IMiraiContactOrBot.h"

EXPORT_SCOPE_START

class MIRAI_NATIVE_CPP_API IMiraiUserOrBot : public IMiraiContactOrBot
{
public:
	virtual ~IMiraiUserOrBot() override {}

	// MiraiUserOrBot interface
	virtual const char* getNickName() = 0;
};

EXPORT_SCOPE_END

#endif