#ifndef STRUCTURES_DEVICE_INFO_H
#define STRUCTURES_DEVICE_INFO_H

#include "Authority.h"

#include <boost/container/vector.hpp>

struct FOSVersion
{
	boost::container::vector<unsigned char>	Incremental;
	boost::container::vector<unsigned char>	Release;
	boost::container::vector<unsigned char>	CodeName;
	unsigned int SDK;
};

struct FDeviceInfo
{
	boost::container::vector<unsigned char>	Display;
	boost::container::vector<unsigned char>	Product;
	boost::container::vector<unsigned char>	Device;
	boost::container::vector<unsigned char>	Board;
	boost::container::vector<unsigned char>	Brand;
	boost::container::vector<unsigned char> Model;
	boost::container::vector<unsigned char> Bootloader;
	boost::container::vector<unsigned char> FingerPrint;
	boost::container::vector<unsigned char> BootId;
	boost::container::vector<unsigned char> ProcVersion;
	boost::container::vector<unsigned char> BaseBand;
	boost::container::vector<unsigned char> SimInfo;
	boost::container::vector<unsigned char> OSType;
	boost::container::vector<unsigned char> MacAddress;
	boost::container::vector<unsigned char> IPAddress;
	boost::container::vector<unsigned char> WifiBSSID;
	boost::container::vector<unsigned char> WifiSSID;
	boost::container::vector<unsigned char> IMSIMD5;
	boost::container::vector<unsigned char> IMEI;
	boost::container::vector<unsigned char> AndroidId;
	boost::container::vector<unsigned char> APN;
	boost::container::vector<unsigned char> VendorName;
	boost::container::vector<unsigned char> VendorOSName;
	boost::container::vector<unsigned char> Guid;
	boost::container::vector<unsigned char> TgtgtKey;
	EProtocolType							Protocol;
	FOSVersion								Version;
};

#endif