#include "Utils/JceStruct.h"

#include <boost/smart_ptr/make_shared_object.hpp>

#include "Archive/MemoryWriter.h"

void FJceDataBase::writeHead(boost::container::vector<uint8>& Out) const
{
	if (Tag < 15)
	{
		// +-------------------+
		// | 1 1 1 1 | 1 1 1 1 |
		// +---------+---------+
		// |   tag   |  type   |
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

boost::container::vector<uint8> FJceDataByte::getRawData()
{
	boost::container::vector<uint8> result;
	writeHead(result);

	FMemoryWriter writer(result, true);
	writer << Value;

	return result;
}

FJceDataShort::FJceDataShort(int16 InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{

}

boost::container::vector<uint8> FJceDataShort::getRawData()
{
	boost::container::vector<uint8> result;
	writeHead(result);

	FMemoryWriter writer(result, true);
	writer << Value;

	return result;
}

FJceDataInt::FJceDataInt(int32 InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

boost::container::vector<uint8> FJceDataInt::getRawData()
{
	boost::container::vector<uint8> result;
	writeHead(result);
	
	FMemoryWriter writer(result, true);
	writer << Value;

	return result;
}

FJceDataLong::FJceDataLong(int64 InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

boost::container::vector<uint8> FJceDataLong::getRawData()
{
	boost::container::vector<uint8> result;
	writeHead(result);
	
	FMemoryWriter writer(result, true);
	writer << Value;

	return result;
}

FJceDataFloat::FJceDataFloat(float InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

boost::container::vector<uint8> FJceDataFloat::getRawData()
{
	boost::container::vector<uint8> result;
	writeHead(result);
	
	FMemoryWriter writer(result, true);
	writer << Value;

	return result;
}

FJceDataDouble::FJceDataDouble(double InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

boost::container::vector<uint8> FJceDataDouble::getRawData()
{
	boost::container::vector<uint8> result;
	writeHead(result);
	
	FMemoryWriter writer(result, true);
	writer << Value;

	return result;
}

FJceDataString::FJceDataString(const boost::container::string& InValue, int32 InTag)
	: FJceDataBase(InTag)
	, Value(InValue)
{
}

boost::container::vector<uint8> FJceDataString::getRawData()
{
	boost::container::vector<uint8> result;
	writeHead(result);

	if (getType() == EJceDataType::ShortString)
	{
		const uint8 stringLen = Value.size();
		result.push_back(stringLen);
	}
	else
	{
		int32 stringLen = static_cast<int32>(Value.size());

		FMemoryWriter writer(result, true);
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

boost::container::vector<uint8> FJceDataMap::getRawData()
{
	boost::container::vector<uint8> result;
	writeHead(result);

	int32 mapLen = static_cast<int32>(Value.size());
	FMemoryWriter writer(result, true);
	writer << mapLen;

	for (std::pair<boost::shared_ptr<FJceDataBase>, boost::shared_ptr<FJceDataBase>> Pair : Value)
	{
		boost::container::vector<uint8> content = Pair.first->getRawData();
		result.insert(result.cend(), content.cbegin(), content.cend());

		content = Pair.second->getRawData();
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

boost::container::vector<uint8> FJceDataList::getRawData()
{
	boost::container::vector<uint8> result;
	writeHead(result);

	int32 listLen = Value.size();
	FMemoryWriter writer(result, true);
	writer << listLen;

	for (const boost::shared_ptr<FJceDataBase>& ListItem : Value)
	{
		boost::container::vector<uint8> content = ListItem->getRawData();
		result.insert(result.cend(), content.cbegin(), content.cend());
	}

	return result;
}

FJceDataSimpleList::FJceDataSimpleList(const boost::container::vector<uint8>& InValue, int32 InTag)
		: FJceDataBase(InTag)
		, Value(InValue)
{
}

void FJceDataSimpleList::append(const boost::container::vector<uint8>& NewData)
{
	Value.insert(Value.cend(), NewData.cbegin(), NewData.cend());
}

boost::container::vector<uint8> FJceDataSimpleList::getRawData()
{
	boost::container::vector<uint8> result;
	writeHead(result);

	int32 dataLen = static_cast<int32>(Value.size());

	boost::container::vector<uint8> rawDataLen;

	if (dataLen <= 256)
	{
		int8 byteLen = static_cast<int8>(dataLen);
		FJceDataByte lenData(byteLen, 0);
		rawDataLen = lenData.getRawData();
	}
	else
	{
		int16 shortLen = static_cast<int16>(dataLen);
		FJceDataShort lenData(shortLen, 0);
		rawDataLen = lenData.getRawData();
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

boost::container::vector<uint8> FJceDataStruct::getRawData()
{
	boost::container::vector<uint8> result;
	writeHead(result);

	bool bNeedAdditionalEnd = Value.back()->getType() != EJceDataType::StructEnd;

	if (bNeedAdditionalEnd)
	{
		Value.push_back(boost::make_shared<FJceDataStructEnd>(0));
	}

	for (const boost::shared_ptr<FJceDataBase>& Item : Value)
	{
		boost::container::vector<uint8> itemData = Item->getRawData();
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

boost::container::vector<uint8> FJceDataStructEnd::getRawData()
{
	boost::container::vector<uint8> result;
	writeHead(result);

	return result;
}

FJceDataZeroTag::FJceDataZeroTag(int32 InTag)
	: FJceDataBase(InTag)
{

}

boost::container::vector<uint8> FJceDataZeroTag::getRawData()
{
	boost::container::vector<uint8> result;
	writeHead(result);

	return result;
}
