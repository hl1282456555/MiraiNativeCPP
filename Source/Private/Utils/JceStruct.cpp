#include "Utils/JceStruct.h"

#include <boost/container/string.hpp>

template <typename ValueType>
void toBytes(const ValueType& Value, boost::container::vector<uint8>& Out)
{
	uint8* tempBytes = new uint8[sizeof(ValueType)];
	std::memcpy(tempBytes, &Value, sizeof(ValueType));
	Out.insert(Out.end(), tempBytes, tempBytes + sizeof(tempBytes));

	delete[] tempBytes;
}

FJceDataValue::FJceDataValue(uint8 Value)
	: Type(EJceDataType::Byte)
{
	toBytes(Value, Data);
}

FJceDataValue::FJceDataValue(bool Value)
	: Type(EJceDataType::Byte)
{
	toBytes(Value, Data);
}

FJceDataValue::FJceDataValue(int16 Value)
	: Type(EJceDataType::Short)
{
	toBytes(Value, Data);
}

FJceDataValue::FJceDataValue(int32 Value)
	: Type(EJceDataType::Int)
{
	toBytes(Value, Data);
}

FJceDataValue::FJceDataValue(int64 Value)
	: Type(EJceDataType::Long)
{
	toBytes(Value, Data);
}

FJceDataValue::FJceDataValue(float Value)
	: Type(EJceDataType::Float)
{
	toBytes(Value, Data);
}

FJceDataValue::FJceDataValue(double Value)
	: Type(EJceDataType::Double)
{
	toBytes(Value, Data);
}

FJceDataValue::FJceDataValue(const boost::container::string& Value)
{
	const std::size_t stringLength = Value.size();
	if (stringLength <= 255)
	{
		Type = EJceDataType::ShortString;
		const uint8 shortLength = static_cast<uint8>(stringLength);

		toBytes(shortLength, Data);
	}
	else
	{
		Type = EJceDataType::LongString;
		const int32 longLength = static_cast<int32>(stringLength);

		toBytes(longLength, Data);
	}

	Data.insert(Data.cend(), Value.cbegin(), Value.cend());
}

FJceDataValue::FJceDataValue(const boost::container::vector<FJceDataValue>& Value)
	: Type(EJceDataType::List)
{
	const int32 listCount = static_cast<int32>(Value.size());
	toBytes(listCount, Data);

	for (const FJceDataValue& valueItem : Value)
	{
		Data.insert(Data.cend(), valueItem.getData().cbegin(), valueItem.getData().cend());
	}
}

FJceDataValue::FJceDataValue(const boost::container::map<FJceHeadData, FJceDataValue>& Value)
	: Type(EJceDataType::Map)
{
	const int32 mapCount = static_cast<int32>(Value.size());
	toBytes(mapCount, Data);

	for (auto it = Value.cbegin(); it != Value.cend(); ++it)
	{
		if (it->first.Tag < 16)
		{
			const int32 computeHead = (it->first.Tag << 4) | static_cast<int32>(it->first.Type);
			toBytes(computeHead, Data);
		}
		else if (it->first.Tag < 256)
		{
			const int32 intType = static_cast<int32>(it->first.Type) | 0xF0;
			toBytes(intType, Data);
			toBytes(it->first.Tag, Data);
		}
	}
}

FJceDataValue::FJceDataValue(const FJceStruct& Value)
{
}
