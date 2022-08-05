#include "Bot.h"

#include "Utils/MD5.h"
#include "Utils/RandomUtils.h"

#include <boost/filesystem.hpp>
#include <boost/locale.hpp>

#include <boost/container/string.hpp>

#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/date_time/gregorian/gregorian.hpp>

#include <boost/log/sinks.hpp>
#include <boost/log/attributes.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/support/date_time.hpp>
#include <boost/log/utility/setup/console.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>

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
	GroupSequence = URandomUtils::generateInt(0, 1999);
	FriendSequence = 22911;
	HighwayApplyUpSequence = 77918;

	HighwaySession.Uin = boost::lexical_cast<boost::container::string>(Uin);
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
