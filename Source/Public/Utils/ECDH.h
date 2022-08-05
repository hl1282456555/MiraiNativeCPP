#ifndef UTILS_ECDH_H
#define UTILS_ECDH_H

#include "Definitions.h"
#include <boost/container/vector.hpp>

EXPORT_SCOPE_START

class MIRAI_NATIVE_CPP_API FECDH
{
public:
	static FECDH createDefault();
	void generateKey(const boost::container::string& InPublicKey);
	void fetchPublickKeyFromServer(uint64 InUin);

public:
	unsigned short ServerPublicKeyVersion = 1;
	boost::container::vector<uint8> PrivateKey;
	boost::container::vector<uint8> PublicKey;
	boost::container::vector<uint8> ShareKey;
};

EXPORT_SCOPE_END

#endif