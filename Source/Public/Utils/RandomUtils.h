#ifndef UTILS_RANDOM_UTILS_H
#define UTILS_RANDOM_UTILS_H

#include "Definitions.h"

#include <boost/container/vector.hpp>

EXPORT_SCOPE_START

class MIRAI_NATIVE_CPP_API URandomUtils
{
public:
	/**
	* Generate a array with random byte in range [0, 255].
	* 
	* @param	ByteCount	How many byte will generated.
	* @return	The generated random byte array.
	*/
	static boost::container::vector<uint8> generateRandomBytes(uint32 ByteCount);

	/**
	* Generate a random int in range [Min, Max].
	* 
	* @param	Min	The minimum value that will be generated.
	* @param	Max	The maximum value that will be generated.
	* @return	The generated random value.
	*/
	static int32 generateInt(int32 Min, int32 Max);
};

EXPORT_SCOPE_END

#endif