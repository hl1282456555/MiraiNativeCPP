#ifndef UTILS_ECDH_H
#define UTILS_ECDH_H

#include <boost/container/vector.hpp>

class FECDH
{
public:
	void generateKey(const boost::container::string& InPublicKey);
	void fetchPublickKeyFromServer(unsigned long long InUin);

public:
	unsigned short ServerPublicKeyVersion;
	boost::container::vector<unsigned char> PublicKey;
	boost::container::vector<unsigned char> ShareKey;
};

#endif