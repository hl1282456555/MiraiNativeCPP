#include "Utils/JceStruct.h"

template <typename ValueType>
void toBytes(const ValueType& Value, boost::container::vector<uint8>& Out)
{
	uint8* cachedBytes = new uint8[sizeof(ValueType)];
	Out.insert(Out.cend(), cachedBytes, cachedBytes + sizeof(cachedBytes));
	delete[] cachedBytes;
}

void FJceDataBase::writeHead(boost::container::vector<uint8>& Out) const
{
	if (Tag < 15)
	{
		// +-------------------+
		// | 1 1 1 1 | 1 1 1 1 |
		// +---------+---------+
		// |   type  |   tag   |
		// +---------+---------+

		uint8 headByte = (Tag << 4) | static_cast<uint8>(getType());
		Out.push_back(headByte);
	}
	else if (Tag < 256)
	{
		uint8 headByte[2] = {0xF0, 0x00};
		headByte[0] |= static_cast<uint8>(getType());
		headByte[1] = static_cast<uint8>(Tag);

		Out.insert(Out.cend(), headByte, headByte + 2);
	}
	else
	{
		throw std::exception("Wrong tag value.");
	}
}

FJceDataByte::FJceDataByte(int8 InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

FJceDataByte::FJceDataByte(bool InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(static_cast<int8>(InValue))
{
}

boost::container::vector<uint8> FJceDataByte::getRawData() const
{
	boost::container::vector<uint8> result;
	writeHead(result);
	toBytes(Value, result);

	return result;
}

FJceDataShort::FJceDataShort(int16 InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{

}

boost::container::vector<uint8> FJceDataShort::getRawData() const
{
	boost::container::vector<uint8> result;
	writeHead(result);
	toBytes(Value, result);

	return result;
}

FJceDataInt::FJceDataInt(int32 InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

boost::container::vector<uint8> FJceDataInt::getRawData() const
{
	boost::container::vector<uint8> result;
	writeHead(result);
	toBytes(Value, result);

	return result;
}

FJceDataLong::FJceDataLong(int64 InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

boost::container::vector<uint8> FJceDataLong::getRawData() const
{
	boost::container::vector<uint8> result;
	writeHead(result);
	toBytes(Value, result);

	return result;
}

FJceDataFloat::FJceDataFloat(float InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

boost::container::vector<uint8> FJceDataFloat::getRawData() const
{
	boost::container::vector<uint8> result;
	writeHead(result);
	toBytes(Value, result);

	return result;
}

FJceDataDouble::FJceDataDouble(double InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

boost::container::vector<uint8> FJceDataDouble::getRawData() const
{
	boost::container::vector<uint8> result;
	writeHead(result);
	toBytes(Value, result);

	return result;
}

FJceDataString::FJceDataString(const boost::container::string& InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

boost::container::vector<uint8> FJceDataString::getRawData() const
{
	boost::container::vector<uint8> result;
	writeHead(result);
	result.insert(result.cend(), Value.cbegin(), Value.cend());

	return result;
}

FJceDataMap::FJceDataMap(const boost::container::map<boost::shared_ptr<FJceDataBase>, const boost::shared_ptr<FJceDataBase>>& InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

void FJceDataMap::add(const boost::shared_ptr<FJceDataBase>& InKey, const boost::shared_ptr<FJceDataBase>& InValue)
{
	if (!InKey || !InValue)
	{
		throw std::exception("Empty parameter passed in the FJceDataMap::add method.");
	}

	Value[InKey] = InValue;
}

boost::container::vector<uint8> FJceDataMap::getRawData() const
{

}

void FJceDataMap::writeHead(boost::container::vector<uint8>& Out) const
{

}
