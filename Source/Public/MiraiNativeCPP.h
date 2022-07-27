#ifndef MIRAI_NATIVE_CPP_H
#define MIRAI_NATIVE_CPP_H

#define MiraiNativeCPP_VERSION_MAJOR 1
#define MiraiNativeCPP_VERSION_MINOR 0

#include "Definitions.h"
#include "Interfaces/IMiraiInterface.h"
#include "Interfaces/IMiraiLoggerFactory.h"

#include <memory>


EXPORT_SCOPE_START

namespace MiraiNativeCPP
{
	MIRAI_NATIVE_CPP_API void Initialize();
	MIRAI_NATIVE_CPP_API void Uinitialize();
}

EXPORT_SCOPE_END

#endif