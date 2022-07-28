#ifndef I_MIRAI_NUDGE_H
#define I_MIRAI_NUDGE_H

#include "Definitions.h"

#include <memory>

EXPORT_SCOPE_START

class MIRAI_NATIVE_CPP_API IMiraiNudge
{
public:
	virtual ~IMiraiNudge() {}

	static std::shared_ptr<IMiraiNudge> createNudge();

	virtual std::shared_ptr<class IMiraiUserOrBot> getTarget() = 0;
};

EXPORT_SCOPE_END

#endif