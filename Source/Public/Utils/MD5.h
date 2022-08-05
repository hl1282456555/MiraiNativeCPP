#ifndef UTILS_MD5_H
#define UTILS_MD5_H

#include "Definitions.h"

#include <boost/container/vector.hpp>
#include <boost/container/string.hpp>

EXPORT_SCOPE_START

class MIRAI_NATIVE_CPP_API FMD5
{
public:
	static boost::container::vector<uint8> ToByteArray(const uint8* Source, std::size_t SourceLen);

	static boost::container::string ToHex(const char* Source, std::size_t SourceLen);

	static boost::container::string FileToHex(const boost::container::string& Filename);
};

EXPORT_SCOPE_END
#endif