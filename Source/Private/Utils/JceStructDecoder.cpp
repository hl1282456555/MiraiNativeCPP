#include "Utils/JceStructDecoder.h"

#include <boost/make_shared.hpp>

FJceStructDecoder::FJceStructDecoder(const boost::container::vector<uint8>& InBytes, bool bNeedSwapBytes)
	: BytesReader(InBytes)
{
	BytesReader.setSwapBytes(bNeedSwapBytes);
}

boost::shared_ptr<FJceDataBase> FJceStructDecoder::read()
{
	if (BytesReader.atEnd())
	{
		return nullptr;
	}

	boost::shared_ptr<FJceDataBase> result;

	FJceHeadData headData = readHead();
	switch(headData.Type)
	{
	case EJceDataType::Byte:
	{
		uint8 data = 0;
		BytesReader << data;
		result = boost::make_shared<FJceDataByte>(data, headData.Tag);
		break;
	}
	case EJceDataType::Short:
	{
		int16 data = 0;
		BytesReader << data;
		result = boost::make_shared<FJceDataShort>(data, headData.Tag);
		break;
	}
	case EJceDataType::Int:
	{
		int32 data = 0;
		BytesReader << data;
		result = boost::make_shared<FJceDataInt>(data, headData.Tag);
		break;
	}
	case EJceDataType::Long:
	{
		int64 data = 0;
		BytesReader << data;
		result = boost::make_shared<FJceDataLong>(data, headData.Tag);
		break;
	}
	case EJceDataType::Float:
	{
		float data = 0;
		BytesReader << data;
		result = boost::make_shared<FJceDataFloat>(data, headData.Tag);
		break;
	}
	case EJceDataType::Double:
	{
		double data = 0;
		BytesReader << data;
		result = boost::make_shared<FJceDataDouble>(data, headData.Tag);
		break;
	}
	case EJceDataType::ShortString:
	{
		uint8 contentLen = 0;
		BytesReader << contentLen;

		char* dataContent = new char[contentLen];
		BytesReader.serialize(dataContent, contentLen);

		boost::container::string data(dataContent, contentLen);
		result = boost::make_shared<FJceDataString>(data, headData.Tag);
		break;
	}
	case EJceDataType::LongString:
	{
		int32 contentLen = 0;
		BytesReader << contentLen;

		boost::container::string data;
		data.resize(contentLen);
		BytesReader.serialize(data.data(), contentLen);

		result = boost::make_shared<FJceDataString>(data, headData.Tag);
		break;
	}
	case EJceDataType::Map:
	{
		boost::container::map<boost::shared_ptr<FJceDataBase>, boost::shared_ptr<FJceDataBase>> cachedMap;

		int32 mapLen = 0;
		BytesReader << mapLen;

		for (int32 Count = 0; Count < mapLen; ++Count)
		{
			boost::shared_ptr<FJceDataBase> key = read();
			boost::shared_ptr<FJceDataBase> value = read();

			cachedMap[key] = value;
		}

		result = boost::make_shared<FJceDataMap>(cachedMap, headData.Tag);
		break;
	}
	case EJceDataType::List:
	{
		boost::container::list<boost::shared_ptr<FJceDataBase>> cachedList;

		int32 listLen = 0;
		BytesReader << listLen;

		for (int32 Count = 0; Count < listLen; ++Count)
		{
			boost::shared_ptr<FJceDataBase> item = read();
			cachedList.push_back(item);
		}

		result = boost::make_shared<FJceDataList>(cachedList, headData.Tag);
		break;
	}
	case EJceDataType::StructBegin:
	{
		boost::container::list<boost::shared_ptr<FJceDataBase>> cachedStruct;

		boost::shared_ptr<FJceDataBase> item;
		while ((item = read()))
		{
			if (item->getType() == EJceDataType::StructEnd)
			{
				break;
			}

			cachedStruct.push_back(item);
		}

		result = boost::make_shared<FJceDataStruct>(cachedStruct, headData.Tag);
		break;
	}
	case EJceDataType::StructEnd:
	{
		result = boost::make_shared<FJceDataStructEnd>(headData.Tag);
		break;
	}
	case EJceDataType::ZeroTag:
	{
		result = boost::make_shared<FJceDataZeroTag>(headData.Tag);
		break;
	}
	case EJceDataType::TYPE_SIMPLE_LIST:
	{
		FJceHeadData lenHead = readHead();
		int32 dataLen = 0;
		if (lenHead.Type == EJceDataType::Byte)
		{
			uint8 byteLen = 0;
			BytesReader << byteLen;
			dataLen = byteLen;
		}
		else if (lenHead.Type == EJceDataType::Short)
		{
			uint16 shortLen = 0;
			BytesReader << shortLen;
			dataLen = shortLen;
		}
		else
		{
			throw std::exception("Invalid simple list length data type.");
		}

		boost::container::vector<uint8> simpleListData;
		simpleListData.resize(dataLen);
		BytesReader.serialize(simpleListData.data(), dataLen);

		result = boost::make_shared<FJceDataSimpleList>(simpleListData, headData.Tag, lenHead.Tag);

		break;
	}
	default:
		break;
	}

	return result;
}

FJceHeadData FJceStructDecoder::readHead()
{
	FJceHeadData result;

	uint8 firstByte;
	BytesReader << firstByte;

	result.Type = static_cast<EJceDataType>((firstByte & 0xF));

	result.Tag = (firstByte & 0xF0) >> 4;
	if (result.Tag == 0xF)
	{
		uint8 tagByte;
		BytesReader << tagByte;

		result.Tag = tagByte;
	}

	return result;
}
