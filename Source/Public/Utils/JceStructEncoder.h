#ifndef UTILS_JCE_STRUCT_ENCODER_H
#define UTILS_JCE_STRUCT_ENCODER_H

#include "Definitions.h"
#include "JceStruct.h"
#include "Archive/MemoryWriter.h"

#include <boost/container/vector.hpp>

class MIRAI_NATIVE_CPP_API FJceStructEncoder
{
public:
	FJceStructEncoder(bool bSwapBytesOrder = false);
	virtual ~FJceStructEncoder() {}

	FJceStructEncoder& writeByte(int8 Val, int32 Tag);
	FJceStructEncoder& writeBool(bool Val, int32 Tag);
	FJceStructEncoder& writeShort(int16 Val, int32 Tag);
	FJceStructEncoder& writeInt(int32 Val, int32 Tag);
	FJceStructEncoder& writeLong(int64 Val, int32 Tag);
	FJceStructEncoder& writeFloat(float Val, int32 Tag);
	FJceStructEncoder& writeDouble(double Val, int32 Tag);
	FJceStructEncoder& writeString(const boost::container::string& Val, int32 Tag);
	FJceStructEncoder& writeMap(const boost::container::map<boost::shared_ptr<FJceDataBase>, boost::shared_ptr<FJceDataBase>>& Val, int32 Tag);
	FJceStructEncoder& writeList(const boost::container::list<boost::shared_ptr<FJceDataBase>>& Val, int32 Tag);
	FJceStructEncoder& writeZeroTag(int32 Tag);
	FJceStructEncoder& writeSimpleList(const boost::container::vector<uint8>& Val, int32 Tag, int32 LenTag);
	FJceStructEncoder& writeStruct(const boost::shared_ptr<FJceDataStruct>& Val);

	boost::container::vector<uint8>& getBytes();

	boost::container::vector<uint8> packUniRequestData();

private:
	boost::container::vector<uint8> Bytes;
	bool bNeedSwapBytes;
};

#endif