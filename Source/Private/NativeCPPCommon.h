#ifndef NATIVE_CPP_COMMON_H
#define NATIVE_CPP_COMMON_H

#include "miraicore_api.h"
#include <exception>

static miraicore_ExportedSymbols* GMiraiSymbols = nullptr;

#define CHECK_MIRAI_SYMBOLS() if (GMiraiSymbols == nullptr) { throw std::exception("GMiraiSymbols is nullptre, ensure you called Initialize()."); } 

#endif