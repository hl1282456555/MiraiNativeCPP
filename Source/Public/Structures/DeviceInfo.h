#ifndef STRUCTURES_DEVICE_INFO_H
#define STRUCTURES_DEVICE_INFO_H

#include "Definitions.h"
#include "Authority.h"

#include <boost/container/vector.hpp>

struct FOSVersion
{
	boost::container::string	Incremental;
	boost::container::string	Release;
	boost::container::string	CodeName;
	uint32 SDK;
};

struct FDeviceInfo
{
	boost::container::string	Display;
	boost::container::string	Product;
	boost::container::string	Device;
	boost::container::string	Board;
	boost::container::string	Brand;
	boost::container::string	Model;
	boost::container::string	Bootloader;
	boost::container::string	FingerPrint;
	boost::container::string	BootId;
	boost::container::string	ProcVersion;
	boost::container::string	BaseBand;
	boost::container::string	SimInfo;
	boost::container::string	OSType;
	boost::container::string	MacAddress;
	boost::container::vector<uint8>	IPAddress;
	boost::container::string	WifiBSSID;
	boost::container::string	WifiSSID;
	boost::container::string	IMSIMD5;
	boost::container::string	IMEI;
	boost::container::string	AndroidId;
	boost::container::string	APN;
	boost::container::string	VendorName;
	boost::container::string	VendorOSName;
	boost::container::string	Guid;
	boost::container::string	TgtgtKey;
	EProtocolType							Protocol;
	FOSVersion								Version;
};

#endif