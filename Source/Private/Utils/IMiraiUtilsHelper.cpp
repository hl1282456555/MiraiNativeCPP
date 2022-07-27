#include "IMiraiUtilsHelper.h"

#include "MiraiUtilsHelperImp.h"

#include <functional>

std::shared_ptr<IMiraiUtilsHelper> IMiraiUtilsHelper::get()
{
	static std::shared_ptr<IMiraiUtilsHelper> instance = std::make_shared<MiraiUtilsHelperImp>();
	return instance;
}
