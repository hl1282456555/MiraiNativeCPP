#ifndef STRUCTURES_NETWORK_H
#define STRUCTURES_NETWORK_H

#define REQ_CMD_DATA "PicUp.DataUp";
#define REQ_CMD_HEART_BREAK "PicUp.Echo";

#include "Structures/Authority.h"
#include "Structures/DeviceInfo.h"

#include <boost/container/string.hpp>
#include <boost/container/vector.hpp>

#include <boost/asio/ip/tcp.hpp>

struct FHighwaySession
{
	boost::container::string				Uin;
	uint32									AppID;
	boost::container::vector<uint8>			SigSession;
	boost::container::vector<uint8>			SessionKey;
	boost::asio::ip::tcp::endpoint			SSOAddr;
	uint32									Sequence;
};

struct FTransport
{
	FSigInfo	Signature;
	FAppVersion AppVersion;
	FDeviceInfo Device;
};

#endif