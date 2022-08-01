#ifndef STRUCTURES_AUTHORITY_H
#define STRUCTURES_AUTHORITY_H

#include <boost/container/vector.hpp>
#include <boost/container/string.hpp>
#include <boost/container/map.hpp>

enum class ProtocolType
{
	Unset = 0,
	AndroidPhone,
	AndroidWatch,
	MacOS,
	QiDian,
	IPad
};

struct AppVersion
{
	boost::container::vector<unsigned char> ApkSign;
	boost::container::string ApkId;
	boost::container::string SortVersionName;
	boost::container::string SdkVersion;
	unsigned int AppId;
	unsigned int SubAppId;
	unsigned int BuildTime;
	unsigned int SSOVersion;
	unsigned int MiscBitmap;
	unsigned int SubSigmap;
	unsigned int MainSigmap;
	ProtocolType Protocol;
};

struct SigInfo
{
	unsigned long long LoginBitmap;
	unsigned long long SKeyExpiredTime;

	boost::container::vector<unsigned char> TGT;
	boost::container::vector<unsigned char> TGTKey;

	// study room manager | 0x16a
	boost::container::vector<unsigned char> SrmToken;
	boost::container::vector<unsigned char> T133;
	boost::container::vector<unsigned char> EncryptedA1;
	boost::container::vector<unsigned char> UserStKey;
	boost::container::vector<unsigned char> UserStWebSig;
	boost::container::vector<unsigned char> SKey;
	boost::container::vector<unsigned char> D2;
	boost::container::vector<unsigned char> D2Key;
	boost::container::vector<unsigned char> DeviceToken;
	boost::container::vector<unsigned char> OutPacketSessionID;
	boost::container::vector<unsigned char> Dpwd;
	boost::container::map<boost::container::string, boost::container::vector<char>> PsKeyMap;
	boost::container::map<boost::container::string, boost::container::vector<char>> Pt4TokenMap;

	// tlv cache
	boost::container::vector<unsigned char> T104;
	boost::container::vector<unsigned char> T174;
	boost::container::vector<unsigned char> G;
	boost::container::vector<unsigned char> T402;
	boost::container::vector<unsigned char> RandSeed; // t403
	boost::container::vector<unsigned char> T547;

	// sync info
	boost::container::vector<unsigned char> SyncCookie;
	boost::container::vector<unsigned char> PubAccountCookie;
	boost::container::vector<unsigned char> Ksid;
};

static boost::container::map<ProtocolType, AppVersion> AppVersionMap
{
	{ProtocolType::AndroidPhone,	{{0xA6, 0xB7, 0x45, 0xBF, 0x24, 0xA2, 0xC2, 0x77, 0x52, 0x77, 0x16, 0xF6, 0xF3, 0x6E, 0xB6, 0x8D},	"com.tencent.mobileqq",		"8.8.95",	"6.0.0.2512",	537122601,	537122601,	1654672174,	18,	150470524,	0x10400,	16724722,	ProtocolType::AndroidPhone}},
	{ProtocolType::AndroidWatch,	{{0xA6, 0xB7, 0x45, 0xBF, 0x24, 0xA2, 0xC2, 0x77, 0x52, 0x77, 0x16, 0xF6, 0xF3, 0x6E, 0xB6, 0x8D},	"com.tencent.qqlite",		"2.0.5",	"6.0.0.236",	537064446,	537064446,	1559564731,	5,	16252796,	0x10400,	34869472,	ProtocolType::AndroidWatch}},
	{ProtocolType::IPad,			{{170, 57, 120, 244, 31, 217, 111, 249, 145, 74, 102, 158, 24, 100, 116, 199},						"com.tencent.minihd.qq",	"8.8.35",	"6.0.0.2433",	537097188,	537097188,	1595836208,	12,	150470524,	66560,		1970400,	ProtocolType::IPad}},
	{ProtocolType::MacOS,			{{170, 57, 120, 244, 31, 217, 111, 249, 145, 74, 102, 158, 24, 100, 116, 199},						"com.tencent.minihd.qq",	"5.8.9",	"6.0.0.2433",	537064315,	537064315,	1595836208,	12,	150470524,	66560,		1970400,	ProtocolType::MacOS}},
	{ProtocolType::QiDian,			{{160, 30, 236, 171, 133, 233, 227, 186, 43, 15, 106, 21, 140, 133, 92, 41},						"com.tencent.qidian",		"5.0.0",	"6.0.0.2484",	537096038,	537036590,	1630062176,	18,	184024956,	66560,		34869472,	ProtocolType::QiDian}}
};

#endif