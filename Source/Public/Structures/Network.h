#ifndef STRUCTURES_NETWORK_H
#define STRUCTURES_NETWORK_H

#define REQ_CMD_DATA "PicUp.DataUp";
#define REQ_CMD_HEART_BREAK "PicUp.Echo";

#include "Structures/Authority.h"
#include "Structures/DeviceInfo.h"

#include <boost/container/string.hpp>
#include <boost/container/vector.hpp>
#include <boost/asio/streambuf.hpp>

struct FNetAddress
{
	unsigned int	IP;
	int				Port;
};

struct FHighwaySession
{
	boost::container::string				Uin;
	unsigned int							AppID;
	boost::container::vector<unsigned char>	SigSession;
	boost::container::vector<unsigned char>	SessionKey;
	FNetAddress								SsoAddr;
	unsigned int							Sequence;
};

struct FTransport
{
	FSigInfo	Signature;
	FAppVersion AppVersion;
	FDeviceInfo Device;
};

#endif