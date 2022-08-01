#ifndef STRUCTURES_HIGHWAY_INFO_H
#define STRUCTURES_HIGHWAY_INFO_H

#define REQ_CMD_DATA "PicUp.DataUp";
#define REQ_CMD_HEART_BREAK "PicUp.Echo";

#include <boost/container/string.hpp>
#include <boost/container/vector.hpp>
#include <boost/asio/streambuf.hpp>

struct NetAddress
{
	unsigned int	IP;
	int				Port;
};

struct HighwaySession
{
	boost::container::string				Uin;
	unsigned int							AppID;
	boost::container::vector<unsigned char>	SigSession;
	boost::container::vector<unsigned char>	SessionKey;
	NetAddress								SsoAddr;
	unsigned int							Sequence;
};

#endif