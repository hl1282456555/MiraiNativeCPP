#ifndef BOT_H
#define BOT_H

#include "Definitions.h"
#include "Structures/Authority.h"
#include "Structures/DeviceInfo.h"
#include "Structures/Network.h"
#include "Structures/OICQ.h"
#include "Structures/Guild.h"

#include <boost/container/string.hpp>

#include <boost/asio.hpp>

// logger headers
#include <boost/log/trivial.hpp>
#include <boost/log/sources/severity_logger.hpp>

EXPORT_SCOPE_START
	
class MIRAI_NATIVE_CPP_API ABot
{
public:
	ABot(uint64 InAccount, const boost::container::string& InPassword);
	virtual ~ABot();

	virtual bool Connect();

	const boost::log::sources::wseverity_logger_mt<boost::log::trivial::severity_level>& getLogger() const;

protected:
	void InitLogger();

	void UseDevice(const FDeviceInfo& InDeviceInfo);

protected:
	// Bot logger
	boost::log::sources::wseverity_logger_mt<boost::log::trivial::severity_level> BotLogger;

	// Bot account
	uint64 Uin;

	// Bot password
	boost::container::string Password;

	bool bAlive;
	bool bAllowSlider;

	FTransport Transport;

	FSigInfo	Signature;
	FAppVersion AppVersion;
	FDeviceInfo DeviceInfo;
	FOICQCodec OICQCodec;

	int32 SequenceId;
	int32 RequestPacketRequestId;
	int32 GroupSeq;
	int32 FriendSeq;
	int32 HighwayApplyUpSeq;

	FHighwaySession	HighwaySession;

	FGuildService GuildService;

	boost::asio::io_context	IOContext;
	boost::asio::ip::tcp::socket Connector;
};

EXPORT_SCOPE_END

#endif