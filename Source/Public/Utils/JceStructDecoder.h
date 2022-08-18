#ifndef UTILS_JCE_STRUCT_DECODER_H
#define UTILS_JCE_STRUCT_DECODER_H

#include "Definitions.h"
#include "JceStruct.h"
#include "Archive/MemoryReader.h"

struct FJceHeadData
{
public:
	int32 Tag;
	EJceDataType Type;
};

class MIRAI_NATIVE_CPP_API FJceStructDecoder
{
public:
	explicit FJceStructDecoder(const boost::container::vector<uint8>& InBytes, bool bNeedSwapBytes = false);

	boost::shared_ptr<FJceDataBase> read();

protected:
	FJceHeadData readHead();

private:
	FMemoryReader BytesReader;
};

#endif