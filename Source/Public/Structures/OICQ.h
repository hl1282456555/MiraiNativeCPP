#ifndef STRUCTURES_OICQ_H
#define STRUCTURES_OICQ_H

#include "Utils/ECDH.h"

struct FOICQCodec
{
	FECDH ECDHInfo;
	unsigned short RandomKey;
};

#endif