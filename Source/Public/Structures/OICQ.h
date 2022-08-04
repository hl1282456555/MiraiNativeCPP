#ifndef STRUCTURES_OICQ_H
#define STRUCTURES_OICQ_H

#include "Utils/ECDH.h"

#include <boost/container/vector.hpp>

struct FOICQCodec
{
	FECDH ECDHInfo;
	boost::container::vector<unsigned char> RandomKey;
	boost::container::vector<unsigned char> WtSessionTicketKey;
};

#endif