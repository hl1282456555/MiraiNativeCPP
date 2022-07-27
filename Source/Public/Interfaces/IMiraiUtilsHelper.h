#ifndef I_MIRAI_UTILS_HELPER_H
#define I_MIRAI_UTILS_HELPER_H

#include "Definitions.h"

#include <memory>

EXPORT_SCOPE_START

class MIRAI_NATIVE_CPP_API IMiraiUtilsHelper
{
public:
	virtual ~IMiraiUtilsHelper() {}

	static std::shared_ptr<IMiraiUtilsHelper> get();
};

EXPORT_SCOPE_END

#endif