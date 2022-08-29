#include "Utils/JceStructEncoder.h"

FJceStructEncoder::FJceStructEncoder(bool bSwapBytesOrder)
	: bNeedSwapBytes(bSwapBytesOrder)
{
	
}

void FJceStructEncoder::clear()
{
	Bytes.clear();
}

FJceStructEncoder& FJceStructEncoder::writeByte(int8 Val, int32 Tag)
{
	FJceDataByte data(Val, Tag);
	boost::container::vector<uint8> rawData = data.getRawData(bNeedSwapBytes);
	Bytes.insert(Bytes.cend(), rawData.cbegin(), rawData.cend());

	return *this;
}

FJceStructEncoder& FJceStructEncoder::writeBool(bool Val, int32 Tag)
{
	FJceDataByte data(Val, Tag);
	boost::container::vector<uint8> rawData = data.getRawData(bNeedSwapBytes);
	Bytes.insert(Bytes.cend(), rawData.cbegin(), rawData.cend());

	return *this;
}

FJceStructEncoder& FJceStructEncoder::writeShort(int16 Val, int32 Tag)
{
	FJceDataShort data(Val, Tag);
	boost::container::vector<uint8> rawData = data.getRawData(bNeedSwapBytes);
	Bytes.insert(Bytes.cend(), rawData.cbegin(), rawData.cend());

	return *this;
}

FJceStructEncoder& FJceStructEncoder::writeInt(int32 Val, int32 Tag)
{
	FJceDataInt data(Val, Tag);
	boost::container::vector<uint8> rawData = data.getRawData(bNeedSwapBytes);
	Bytes.insert(Bytes.cend(), rawData.cbegin(), rawData.cend());

	return *this;
}

FJceStructEncoder& FJceStructEncoder::writeLong(int64 Val, int32 Tag)
{
	FJceDataLong data(Val, Tag);
	boost::container::vector<uint8> rawData = data.getRawData(bNeedSwapBytes);
	Bytes.insert(Bytes.cend(), rawData.cbegin(), rawData.cend());

	return *this;
}

FJceStructEncoder& FJceStructEncoder::writeFloat(float Val, int32 Tag)
{
	FJceDataFloat data(Val, Tag);
	boost::container::vector<uint8> rawData = data.getRawData(bNeedSwapBytes);
	Bytes.insert(Bytes.cend(), rawData.cbegin(), rawData.cend());

	return *this;
}

FJceStructEncoder& FJceStructEncoder::writeDouble(double Val, int32 Tag)
{
	FJceDataDouble data(Val, Tag);
	boost::container::vector<uint8> rawData = data.getRawData(bNeedSwapBytes);
	Bytes.insert(Bytes.cend(), rawData.cbegin(), rawData.cend());

	return *this;
}

FJceStructEncoder& FJceStructEncoder::writeString(const boost::container::string& Val, int32 Tag)
{
	FJceDataString data(Val, Tag);
	boost::container::vector<uint8> rawData = data.getRawData(bNeedSwapBytes);
	Bytes.insert(Bytes.cend(), rawData.cbegin(), rawData.cend());

	return *this;
}

FJceStructEncoder& FJceStructEncoder::writeMap(const boost::container::map<boost::shared_ptr<FJceDataBase>, boost::shared_ptr<FJceDataBase>>& Val, int32 Tag)
{
	FJceDataMap data(Val, Tag);
	boost::container::vector<uint8> rawData = data.getRawData(bNeedSwapBytes);
	Bytes.insert(Bytes.cend(), rawData.cbegin(), rawData.cend());

	return *this;
}

FJceStructEncoder& FJceStructEncoder::writeList(const boost::container::list<boost::shared_ptr<FJceDataBase>>& Val, int32 Tag)
{
	FJceDataList data(Val, Tag);
	boost::container::vector<uint8> rawData = data.getRawData(bNeedSwapBytes);
	Bytes.insert(Bytes.cend(), rawData.cbegin(), rawData.cend());

	return *this;
}

FJceStructEncoder& FJceStructEncoder::writeZeroTag(int32 Tag)
{
	FJceDataZeroTag data(Tag);
	boost::container::vector<uint8> rawData = data.getRawData(bNeedSwapBytes);
	Bytes.insert(Bytes.cend(), rawData.cbegin(), rawData.cend());

	return *this;
}

FJceStructEncoder& FJceStructEncoder::writeSimpleList(const boost::container::vector<uint8>& Val, int32 Tag, int32 LenTag)
{
	FJceDataSimpleList data(Val, Tag);
	boost::container::vector<uint8> rawData = data.getRawData(bNeedSwapBytes);
	Bytes.insert(Bytes.cend(), rawData.cbegin(), rawData.cend());

	return *this;
}

FJceStructEncoder& FJceStructEncoder::writeStruct(const boost::shared_ptr<FJceDataStruct>& Val)
{
	boost::container::vector<uint8> rawData = Val->getRawData(bNeedSwapBytes);
	Bytes.insert(Bytes.cend(), rawData.cbegin(), rawData.cend());

	return *this;
}

boost::container::vector<uint8>& FJceStructEncoder::getBytes()
{
	return Bytes;
}

boost::container::vector<uint8> FJceStructEncoder::packUniRequestData()
{
	boost::container::vector<uint8> result;
	result.push_back(0x0a);
	result.insert(result.cend(), Bytes.cbegin(), Bytes.cend());
	result.push_back(0x0B);

	return result;
}
