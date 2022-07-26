#ifndef MIRAI_NATIVE_CPP_H
#define MIRAI_NATIVE_CPP_H

#define MiraiNativeCPP_VERSION_MAJOR 1
#define MiraiNativeCPP_VERSION_MINOR 0

#include "Definitions.h"
#include "IMiraiInterface.h"

#include <memory>

extern "C" {
	MIRAI_NATIVE_CPP_API void Initialize();
	MIRAI_NATIVE_CPP_API void Uinitialize();
}
#endif