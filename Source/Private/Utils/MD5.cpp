#include "Utils/MD5.h"

#include <openssl/md5.h>
#include <fstream>
#include <vector>

static 	const char HexMap[] = "0123456789ABCDEF";

boost::container::vector<unsigned char> FMD5::ToByteArray(const unsigned char* Source, std::size_t SourceLen)
{
	boost::container::vector<unsigned char> result;

	if (Source == nullptr || SourceLen < 1)
	{
		return result;
	}

	result.resize(MD5_DIGEST_LENGTH);

	MD5_CTX context;
	MD5_Init(&context);
	MD5_Update(&context, Source, SourceLen);
	MD5_Final(result.data(), &context);

	return result;
}

boost::container::string FMD5::ToHex(const char* Source, std::size_t SourceLen)
{
	if (Source == nullptr || SourceLen < 1)
	{
		return "";
	}

	unsigned char rawMD5[MD5_DIGEST_LENGTH];

	MD5_CTX context;
	MD5_Init(&context);
	MD5_Update(&context, Source, SourceLen);
	MD5_Final(rawMD5, &context);

	boost::container::string resultStr;

	for (int Index = 0; Index < MD5_DIGEST_LENGTH; Index++)
	{
		resultStr += HexMap[rawMD5[Index] / 16];
		resultStr += HexMap[rawMD5[Index] % 16];
	}

	return resultStr;
}

boost::container::string FMD5::FileToHex(const boost::container::string& Filename)
{
	boost::container::string resultStr;
	std::ifstream fileStream(Filename.c_str());

	if (fileStream.is_open())
	{
		fileStream.seekg(0, std::ifstream::_Seekend);
		std::size_t fileSize = fileStream.tellg();
		fileStream.seekg(0, std::ifstream::_Seekbeg);


		char* fileCache = new char[fileSize];
		fileStream.read(fileCache, fileSize);
		resultStr = ToHex(fileCache, fileSize);
	}

	return resultStr;
}
