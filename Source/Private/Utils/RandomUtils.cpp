#include "Utils/RandomUtils.h"

#include <boost/random/random_device.hpp>
#include <boost/random/uniform_int_distribution.hpp>

boost::container::vector<uint8> URandomUtils::generateRandomBytes(uint32 ByteCount)
{
	boost::container::vector<uint8> result;

	boost::random::random_device device;
	boost::random::uniform_int_distribution<> distribution(0, 255);

	for (uint32 Count = 0; Count < ByteCount; Count++)
	{
		result.push_back(static_cast<uint8>(distribution(device)));
	}

	return result;
}

int32 URandomUtils::generateInt(int32 Min, int32 Max)
{
	boost::random::random_device device;
	boost::random::uniform_int_distribution<> distribution(Min, Max);

	return distribution(device);
}
