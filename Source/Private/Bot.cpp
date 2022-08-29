#include "Bot.h"

#include "Globals.h"

#include "Utils/MD5.h"
#include "Utils/RandomUtils.h"
#include "Utils/JceStructEncoder.h"
#include "Utils/JceStruct.h"

#include <boost/filesystem.hpp>
#include <boost/locale.hpp>

#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/date_time/gregorian/gregorian.hpp>

#include <boost/log/sinks.hpp>
#include <boost/log/attributes.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/support/date_time.hpp>
#include <boost/log/utility/setup/console.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>

#include <boost/algorithm/algorithm.hpp>
#include <boost/algorithm/hex.hpp>

BOOST_LOG_ATTRIBUTE_KEYWORD(attr_botaccount, "BotAccount", unsigned long long)

ABot::ABot(uint64 InAccount, const boost::container::string& InPassword) 
	: Uin(InAccount)
	, Connector(IOContext)
{
	InitLogger();

	Password = FMD5::ToHex(Password.c_str(), InPassword.size());
	bAllowSlider = true;
	bAlive = true;
	Signature.OutPacketSessionID = { 0x02, 0xB0, 0x5B, 0x8B };

	OICQCodec.ECDHInfo.fetchPublickKeyFromServer(Uin);
	OICQCodec.RandomKey = URandomUtils::generateRandomBytes(16);

	SequenceId = 0x3635;
	RequestPacketRequestId = 1921334513;
	GroupSeq = URandomUtils::generateInt(0, 1999);
	FriendSeq = 22911;
	HighwayApplyUpSeq = 77918;

	HighwaySession.Uin = boost::lexical_cast<boost::container::string>(Uin);

	UseDevice(SystemDeviceInfo);
}

ABot::~ABot()
{

}

bool ABot::Connect()
{
	return false;
}

const boost::log::sources::wseverity_logger_mt<boost::log::trivial::severity_level>& ABot::getLogger() const
{
	return BotLogger;
}

void ABot::InitLogger()
{
	BotLogger.add_attribute("BotAccount", boost::log::attributes::constant<unsigned long long>(Uin));

	boost::posix_time::ptime timeLocal = boost::posix_time::second_clock::local_time();

	boost::container::string fileNameParttern(boost::lexical_cast<boost::container::string>(Uin) + "_%H-%M-%S.log");
	boost::container::string filePath("./logs/");
	filePath += boost::lexical_cast<boost::container::string>(timeLocal.date().day()) + "-";
	filePath += boost::lexical_cast<boost::container::string>(timeLocal.date().month()) + "-";
	filePath += boost::lexical_cast<boost::container::string>(timeLocal.date().year());

	auto fileSink = boost::log::add_file_log(
		boost::log::keywords::file_name = fileNameParttern.c_str(),
		boost::log::keywords::target = filePath.c_str(),
		boost::log::keywords::auto_flush = true,
		boost::log::keywords::filter = attr_botaccount == Uin,
		boost::log::keywords::format = "[%TimeStamp%][Bot/%BotAccount%][%Severity%] : %Message%"
	);

	static std::locale wideLocale = boost::locale::generator()("zh_CN.UTF-8");
	fileSink->imbue(wideLocale);

	auto consoleSink = boost::log::add_console_log(std::cout, boost::log::keywords::format = "[%TimeStamp%][Bot/%BotAccount%][%Severity%] : %Message%");
	consoleSink->imbue(wideLocale);

	boost::log::add_common_attributes();
}

void ABot::UseDevice(const FDeviceInfo& InDeviceInfo)
{
	AppVersion = AppVersionMap.find(InDeviceInfo.Protocol) != AppVersionMap.end() ? AppVersionMap[InDeviceInfo.Protocol] : FAppVersion();
	DeviceInfo = InDeviceInfo;
	HighwaySession.AppID = AppVersion.AppId;
	Signature.Ksid = "|" + InDeviceInfo.IMEI + "|A8.2.7.27f6ea96";
}

boost::container::vector<boost::asio::ip::tcp::endpoint> ABot::getSSOAddress()
{
	FAppVersion protocolVersion = AppVersionMap[SystemDeviceInfo.Protocol];

	boost::container::vector<uint8> key;
	boost::algorithm::unhex("F0441F5FF42DA58FDCF7949ABA62D411", std::back_inserter(key));

	FJceStructEncoder jceEncoder;
	jceEncoder.writeLong(0, 1).writeLong(0, 2).writeByte(1, 3).writeString("00000", 4)
		.writeInt(static_cast<int32>(protocolVersion.AppId), 6).writeString(SystemDeviceInfo.IMEI, 7)
		.writeLong(0, 8).writeLong(0, 9).writeLong(0, 10).writeLong(0, 11).writeByte(0, 12).writeLong(0, 13);

	FRequestDataVersion3 buffer = {{"HttpServerListReq", jceEncoder.packUniRequestData()}};
}
