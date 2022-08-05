#ifndef STRUCTURES_GLOBALS_H
#define STRUCTURES_GLOBALS_H

#include "Definitions.h"
#include "Authority.h"
#include "DeviceInfo.h"

MIRAI_NATIVE_CPP_API extern FDeviceInfo SystemDeviceInfo;

MIRAI_NATIVE_CPP_API extern boost::container::map<EProtocolType, FAppVersion> AppVersionMap;

#endif