#ifndef UTILS_ECDH_H
#define UTILS_ECDH_H

#include "Definitions.h"
#include <boost/container/vector.hpp>

EXPORT_SCOPE_START

class MIRAI_NATIVE_CPP_API FECDH
{
public:
	void generateKey(const boost::container::string& InPublicKey);
	void fetchPublickKeyFromServer(unsigned long long InUin);

public:
	unsigned short ServerPublicKeyVersion = 1;
	boost::container::vector<unsigned char> PublicKey;
	boost::container::vector<unsigned char> ShareKey;
};

EXPORT_SCOPE_END

#endif