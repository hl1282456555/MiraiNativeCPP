#ifndef I_MIRAI_BOT_H
#define I_MIRAI_BOT_H

#include "Definitions.h"

#include "Interfaces/IMiraiContactOrBot.h"

EXPORT_SCOPE_START

class MIRAI_NATIVE_CPP_API IMiraiBot : public IMiraiContactOrBot
{
public:
	virtual ~IMiraiBot() override {}

	// MiraiBot Interface
};

EXPORT_SCOPE_END

#endif