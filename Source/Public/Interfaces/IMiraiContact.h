#ifndef I_MIRAI_CONTACT_H
#define I_MIRAI_CONTACT_H

#include "Definitions.h"
#include "IMiraiContactOrBot.h"

EXPORT_SCOPE_START

class MIRAI_NATIVE_CPP_API IMiraiContact : public IMiraiContactOrBot
{
public:
	virtual ~IMiraiContact() override {}
};

EXPORT_SCOPE_END

#endif