#include "Utils/JceStruct.h"

#include <boost/smart_ptr/make_shared_object.hpp>

void FJceDataBase::writeHead(FMemoryWriter& Writer) const
{
	if (Tag < 15)
	{
		// +-------------------+
		// | 1 1 1 1 | 1 1 1 1 |
		// +---------+---------+
		// |   tag   |  type   |
		// +---------+---------+

		uint8 headByte = (Tag << 4) | static_cast<uint8>(getType());
		Writer << headByte;
	}
	else if (Tag < 256)
	{
		uint8 headByte[2] = {0xF0, 0x00};
		headByte[0] |= static_cast<uint8>(getType());
		headByte[1] = static_cast<uint8>(Tag);

		Writer.serialize(headByte, 2);
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

boost::container::vector<uint8> FJceDataByte::getRawData(bool bNeedSwapBytes /*= false*/)
{
	boost::container::vector<uint8> result;

	FMemoryWriter writer(result, true);
	writer.setSwapBytes(bNeedSwapBytes);

	writeHead(writer);
	writer << Value;

	return result;
}

FJceDataShort::FJceDataShort(int16 InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{

}

boost::container::vector<uint8> FJceDataShort::getRawData(bool bNeedSwapBytes /*= false*/)
{
	boost::container::vector<uint8> result;

	FMemoryWriter writer(result, true);
	writer.setSwapBytes(bNeedSwapBytes);

	writeHead(writer);
	writer << Value;

	return result;
}

FJceDataInt::FJceDataInt(int32 InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

boost::container::vector<uint8> FJceDataInt::getRawData(bool bNeedSwapBytes /*= false*/)
{
	boost::container::vector<uint8> result;

	FMemoryWriter writer(result, true);
	writer.setSwapBytes(bNeedSwapBytes);

	writeHead(writer);
	writer << Value;

	return result;
}

FJceDataLong::FJceDataLong(int64 InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

boost::container::vector<uint8> FJceDataLong::getRawData(bool bNeedSwapBytes /*= false*/)
{
	boost::container::vector<uint8> result;

	FMemoryWriter writer(result, true);
	writer.setSwapBytes(bNeedSwapBytes);

	writeHead(writer);
	writer << Value;

	return result;
}

FJceDataFloat::FJceDataFloat(float InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

boost::container::vector<uint8> FJceDataFloat::getRawData(bool bNeedSwapBytes /*= false*/)
{
	boost::container::vector<uint8> result;

	FMemoryWriter writer(result, true);
	writer.setSwapBytes(bNeedSwapBytes);

	writeHead(writer);
	writer << Value;

	return result;
}

FJceDataDouble::FJceDataDouble(double InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

boost::container::vector<uint8> FJceDataDouble::getRawData(bool bNeedSwapBytes /*= false*/)
{
	boost::container::vector<uint8> result;

	FMemoryWriter writer(result, true);
	writer.setSwapBytes(bNeedSwapBytes);

	writeHead(writer);
	writer << Value;

	return result;
}

FJceDataString::FJceDataString(const boost::container::string& InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

boost::container::vector<uint8> FJceDataString::getRawData(bool bNeedSwapBytes /*= false*/)
{
	boost::container::vector<uint8> result;
	FMemoryWriter writer(result, true);
	writer.setSwapBytes(bNeedSwapBytes);

	writeHead(writer);

	if (getType() == EJceDataType::ShortString)
	{
		uint8 stringLen = Value.size();
		writer << stringLen;
	}
	else
	{
		int32 stringLen = static_cast<int32>(Value.size());

		writer << stringLen;
	}

	result.insert(result.cend(), Value.cbegin(), Value.cend());

	return result;
}

FJceDataMap::FJceDataMap(const boost::container::map<boost::shared_ptr<FJceDataBase>, boost::shared_ptr<FJceDataBase>>& InValue, int32 InTag)
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

boost::container::vector<uint8> FJceDataMap::getRawData(bool bNeedSwapBytes /*= false*/)
{
	boost::container::vector<uint8> result;
	FMemoryWriter writer(result, true);
	writer.setSwapBytes(bNeedSwapBytes);

	writeHead(writer);

	int32 mapLen = static_cast<int32>(Value.size());
	writer << mapLen;

	for (std::pair<boost::shared_ptr<FJceDataBase>, boost::shared_ptr<FJceDataBase>> Pair : Value)
	{
		boost::container::vector<uint8> content = Pair.first->getRawData(bNeedSwapBytes);
		result.insert(result.cend(), content.cbegin(), content.cend());

		content = Pair.second->getRawData(bNeedSwapBytes);
		result.insert(result.cend(), content.cbegin(), content.cend());
	}

	return result;
}

FJceDataList::FJceDataList(const boost::container::list<boost::shared_ptr<FJceDataBase>>& InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

void FJceDataList::add(const boost::shared_ptr<FJceDataBase>& NewItem)
{
	if (!NewItem)
	{
		throw std::exception("Add a null pointer to FJceDataList.");
	}

	Value.push_back(NewItem);
}

boost::container::vector<uint8> FJceDataList::getRawData(bool bNeedSwapBytes /*= false*/)
{
	boost::container::vector<uint8> result;
	FMemoryWriter writer(result, true);
	writer.setSwapBytes(bNeedSwapBytes);

	writeHead(writer);

	int32 listLen = Value.size();
	writer << listLen;

	for (const boost::shared_ptr<FJceDataBase>& ListItem : Value)
	{
		boost::container::vector<uint8> content = ListItem->getRawData(bNeedSwapBytes);
		result.insert(result.cend(), content.cbegin(), content.cend());
	}

	return result;
}

FJceDataSimpleList::FJceDataSimpleList(const boost::container::vector<uint8>& InValue, int32 InTag, int32 InLenTag)
		: FJceDataBase(InTag)
		, Value(InValue)
		, LenTag(InLenTag)
{
}

void FJceDataSimpleList::append(const boost::container::vector<uint8>& NewData)
{
	Value.insert(Value.cend(), NewData.cbegin(), NewData.cend());
}

boost::container::vector<uint8> FJceDataSimpleList::getRawData(bool bNeedSwapBytes /*= false*/)
{
	boost::container::vector<uint8> result;
	FMemoryWriter writer(result, true);
	writer.setSwapBytes(bNeedSwapBytes);

	writeHead(writer);

	int32 dataLen = static_cast<int32>(Value.size());

	boost::container::vector<uint8> rawDataLen;

	if (dataLen <= 256)
	{
		int8 byteLen = static_cast<int8>(dataLen);
		FJceDataByte lenData(byteLen, LenTag);
		rawDataLen = lenData.getRawData(bNeedSwapBytes);
	}
	else
	{
		int16 shortLen = static_cast<int16>(dataLen);
		FJceDataShort lenData(shortLen, LenTag);
		rawDataLen = lenData.getRawData(bNeedSwapBytes);
	}

	result.insert(result.cend(), rawDataLen.cbegin(), rawDataLen.cend());

	result.insert(result.cend(), Value.cbegin(), Value.cend());

	return result;
}

FJceDataStruct::FJceDataStruct(const boost::container::list<boost::shared_ptr<FJceDataBase>>& InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

void FJceDataStruct::add(const boost::shared_ptr<FJceDataBase>& NewItem)
{
	if (!NewItem)
	{
		throw std::exception("The new item for add to FJceDataStruct must not be empty.");
	}

	Value.push_back(NewItem);
}

boost::container::vector<uint8> FJceDataStruct::getRawData(bool bNeedSwapBytes /*= false*/)
{
	boost::container::vector<uint8> result;
	FMemoryWriter writer(result, true);
	writer.setSwapBytes(bNeedSwapBytes);

	writeHead(writer);

	bool bNeedAdditionalEnd = Value.back()->getType() != EJceDataType::StructEnd;

	if (bNeedAdditionalEnd)
	{
		Value.push_back(boost::make_shared<FJceDataStructEnd>(0));
	}

	for (const boost::shared_ptr<FJceDataBase>& Item : Value)
	{
		boost::container::vector<uint8> itemData = Item->getRawData(bNeedSwapBytes);
		result.insert(result.cend(), itemData.cbegin(), itemData.cend());
	}

	if (bNeedAdditionalEnd)
	{
		Value.erase(Value.cend());
	}

	return result;
}

FJceDataStructEnd::FJceDataStructEnd(int32 InTag)
		: FJceDataBase(InTag)
{
}

boost::container::vector<uint8> FJceDataStructEnd::getRawData(bool bNeedSwapBytes /*= false*/)
{
	boost::container::vector<uint8> result;
	FMemoryWriter writer(result, true);
	writer.setSwapBytes(bNeedSwapBytes);

	writeHead(writer);

	return result;
}

FJceDataZeroTag::FJceDataZeroTag(int32 InTag)
	: FJceDataBase(InTag)
{

}

boost::container::vector<uint8> FJceDataZeroTag::getRawData(bool bNeedSwapBytes /*= false*/)
{
	boost::container::vector<uint8> result;
	FMemoryWriter writer(result, true);
	writer.setSwapBytes(bNeedSwapBytes);

	writeHead(writer);

	return result;
}
