#ifndef BOT_H
#define BOT_H

#include "Definitions.h"
#include "Structures/Authority.h"
#include "Structures/DeviceInfo.h"
#include "Structures/Network.h"
#include "Structures/OICQ.h"

#include <boost/container/string.hpp>

#include <boost/asio.hpp>

// logger headers
#include <boost/log/trivial.hpp>
#include <boost/log/sources/severity_logger.hpp>

EXPORT_SCOPE_START
	
class MIRAI_NATIVE_CPP_API ABot
{
public:
	ABot(unsigned long long InAccount, const boost::container::string& InPassword);
	virtual ~ABot();

	virtual bool Connect();

	const boost::log::sources::wseverity_logger_mt<boost::log::trivial::severity_level>& getLogger() const;

protected:
	void InitLogger();

protected:
	// Bot logger
	boost::log::sources::wseverity_logger_mt<boost::log::trivial::severity_level> BotLogger;

	// Bot account
	unsigned long long Uin;

	// Bot password
	boost::container::string Password;

	bool bAlive;
	bool bAllowSlider;

	FTransport Transport;

	FSigInfo	Signature;
	FAppVersion AppVersion;
	FDeviceInfo DeviceInfo;
	FOICQCodec OICQCodec;

	int SequenceId;
	int RequestPacketRequestId;
	int GroupSequence;
	int FriendSequence;
	int HighwayApplyUpSequence;

	FHighwaySession	HighwaySession;

	boost::asio::io_context	IOContext;
	boost::asio::ip::tcp::socket Connector;
};

EXPORT_SCOPE_END

#endif