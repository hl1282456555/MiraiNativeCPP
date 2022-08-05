#ifndef STRUCTURES_DEVICE_INFO_H
#define STRUCTURES_DEVICE_INFO_H

#include "Authority.h"

#include <boost/container/vector.hpp>

struct FOSVersion
{
	boost::container::vector<uint8>	Incremental;
	boost::container::vector<uint8>	Release;
	boost::container::vector<uint8>	CodeName;
	unsigned int SDK;
};

struct FDeviceInfo
{
	boost::container::vector<uint8>	Display;
	boost::container::vector<uint8>	Product;
	boost::container::vector<uint8>	Device;
	boost::container::vector<uint8>	Board;
	boost::container::vector<uint8>	Brand;
	boost::container::vector<uint8> Model;
	boost::container::vector<uint8> Bootloader;
	boost::container::vector<uint8> FingerPrint;
	boost::container::vector<uint8> BootId;
	boost::container::vector<uint8> ProcVersion;
	boost::container::vector<uint8> BaseBand;
	boost::container::vector<uint8> SimInfo;
	boost::container::vector<uint8> OSType;
	boost::container::vector<uint8> MacAddress;
	boost::container::vector<uint8> IPAddress;
	boost::container::vector<uint8> WifiBSSID;
	boost::container::vector<uint8> WifiSSID;
	boost::container::vector<uint8> IMSIMD5;
	boost::container::vector<uint8> IMEI;
	boost::container::vector<uint8> AndroidId;
	boost::container::vector<uint8> APN;
	boost::container::vector<uint8> VendorName;
	boost::container::vector<uint8> VendorOSName;
	boost::container::vector<uint8> Guid;
	boost::container::vector<uint8> TgtgtKey;
	EProtocolType							Protocol;
	FOSVersion								Version;
};

#endif