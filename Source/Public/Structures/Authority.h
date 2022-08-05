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
	boost::container::string Ksid;
};

#endif