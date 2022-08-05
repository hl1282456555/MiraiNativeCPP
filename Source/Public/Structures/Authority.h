#ifndef STRUCTURES_AUTHORITY_H
#define STRUCTURES_AUTHORITY_H

#include <boost/container/vector.hpp>
#include <boost/container/string.hpp>
#include <boost/container/map.hpp>

enum class EProtocolType
{
	Unset = 0,
	AndroidPhone,
	AndroidWatch,
	MacOS,
	QiDian,
	IPad
};

struct FAppVersion
{
	boost::container::vector<uint8> ApkSign;
	boost::container::string ApkId;
	boost::container::string SortVersionName;
	boost::container::string SdkVersion;
	uint32 AppId;
	uint32 SubAppId;
	uint32 BuildTime;
	uint32 SSOVersion;
	uint32 MiscBitmap;
	uint32 SubSigmap;
	uint32 MainSigmap;
	EProtocolType Protocol;
};

struct FSigInfo
{
	uint64 LoginBitmap;
	uint64 SKeyExpiredTime;

	boost::container::vector<uint8> TGT;
	boost::container::vector<uint8> TGTKey;

	// study room manager | 0x16a
	boost::container::vector<uint8> SrmToken;
	boost::container::vector<uint8> T133;
	boost::container::vector<uint8> EncryptedA1;
	boost::container::vector<uint8> UserStKey;
	boost::container::vector<uint8> UserStWebSig;
	boost::container::vector<uint8> SKey;
	boost::container::vector<uint8> D2;
	boost::container::vector<uint8> D2Key;
	boost::container::vector<uint8> DeviceToken;
	boost::container::vector<uint8> OutPacketSessionID;
	boost::container::vector<uint8> Dpwd;
	boost::container::map<boost::container::string, boost::container::vector<int8>> PsKeyMap;
	boost::container::map<boost::container::string, boost::container::vector<int8>> Pt4TokenMap;

	// tlv cache
	boost::container::vector<uint8> T104;
	boost::container::vector<uint8> T174;
	boost::container::vector<uint8> G;
	boost::container::vector<uint8> T402;
	boost::container::vector<uint8> RandSeed; // t403
	boost::container::vector<uint8> T547;

	// sync info
	boost::container::vector<uint8> SyncCookie;
	boost::container::vector<uint8> PubAccountCookie;
	boost::container::vector<uint8> Ksid;
};

static boost::container::map<EProtocolType, FAppVersion> AppVersionMap
{
	{EProtocolType::AndroidPhone,	{{0xA6, 0xB7, 0x45, 0xBF, 0x24, 0xA2, 0xC2, 0x77, 0x52, 0x77, 0x16, 0xF6, 0xF3, 0x6E, 0xB6, 0x8D},	"com.tencent.mobileqq",		"8.8.95",	"6.0.0.2512",	537122601,	537122601,	1654672174,	18,	150470524,	0x10400,	16724722,	EProtocolType::AndroidPhone}},
	{EProtocolType::AndroidWatch,	{{0xA6, 0xB7, 0x45, 0xBF, 0x24, 0xA2, 0xC2, 0x77, 0x52, 0x77, 0x16, 0xF6, 0xF3, 0x6E, 0xB6, 0x8D},	"com.tencent.qqlite",		"2.0.5",	"6.0.0.236",	537064446,	537064446,	1559564731,	5,	16252796,	0x10400,	34869472,	EProtocolType::AndroidWatch}},
	{EProtocolType::IPad,			{{170, 57, 120, 244, 31, 217, 111, 249, 145, 74, 102, 158, 24, 100, 116, 199},						"com.tencent.minihd.qq",	"8.8.35",	"6.0.0.2433",	537097188,	537097188,	1595836208,	12,	150470524,	66560,		1970400,	EProtocolType::IPad}},
	{EProtocolType::MacOS,			{{170, 57, 120, 244, 31, 217, 111, 249, 145, 74, 102, 158, 24, 100, 116, 199},						"com.tencent.minihd.qq",	"5.8.9",	"6.0.0.2433",	537064315,	537064315,	1595836208,	12,	150470524,	66560,		1970400,	EProtocolType::MacOS}},
	{EProtocolType::QiDian,			{{160, 30, 236, 171, 133, 233, 227, 186, 43, 15, 106, 21, 140, 133, 92, 41},						"com.tencent.qidian",		"5.0.0",	"6.0.0.2484",	537096038,	537036590,	1630062176,	18,	184024956,	66560,		34869472,	EProtocolType::QiDian}}
};

#endif