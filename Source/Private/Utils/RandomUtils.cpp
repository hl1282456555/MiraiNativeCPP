#include "Utils/RandomUtils.h"

#include <boost/random/random_device.hpp>
#include <boost/random/uniform_int_distribution.hpp>

boost::container::vector<unsigned char> URandomUtils::generateRandomBytes(unsigned int ByteCount)
{
	boost::container::vector<unsigned char> result;

	boost::random::random_device device;
	boost::random::uniform_int_distribution<> distribution(0, 255);

	for (unsigned int Count = 0; Count < ByteCount; Count++)
	{
		result.push_back(static_cast<unsigned char>(distribution(device)));
	}

	return result;
}

int URandomUtils::generateInt(int Min, int Max)
{
	boost::random::random_device device;
	boost::random::uniform_int_distribution<> distribution(Min, Max);

	return distribution(device);
}
