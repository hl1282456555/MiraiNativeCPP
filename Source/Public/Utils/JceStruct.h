#ifndef UTILS_JCE_STRUCT_H
#define UTILS_JCE_STRUCT_H

#include "Definitions.h"

#include <boost/container/vector.hpp>
#include <boost/container/map.hpp>

enum class EJceDataType
{
	Byte = 0,	// bool
	Short = 1,
	Int = 2,
	Long = 3,
	Float = 4,
	Double = 5,
	ShortString = 6, // string length : uint8 limit
	LongString = 7, // string length : int32 limit
	Map = 8,
	List = 9,
	StructBegin = 10,	// subclass of FJceStruct
	StructEnd = 11,		// subclass of FJceStruct
	ZeroTag = 12
};

struct FJceHeadData
{
	int32 Tag;
	EJceDataType Type;
};

class MIRAI_NATIVE_CPP_API FJceDataValue
{
public:
	explicit FJceDataValue(uint8 Value);
	explicit FJceDataValue(bool Value);
	explicit FJceDataValue(int16 Value);
	explicit FJceDataValue(int32 Value);
	explicit FJceDataValue(int64 Value);
	explicit FJceDataValue(float Value);
	explicit FJceDataValue(double Value);
	explicit FJceDataValue(const boost::container::string& Value);
	explicit FJceDataValue(const boost::container::vector<FJceDataValue>& Value);
	explicit FJceDataValue(const boost::container::map<FJceHeadData, FJceDataValue>& Value);
	explicit FJceDataValue(const class FJceStruct& Value);

	const boost::container::vector<uint8> getData() const;

	operator uint8() const;
	operator bool() const;
	operator int16() const;
	operator int32() const;
	operator int64() const;
	operator float() const;
	operator double() const;
	operator boost::container::string() const;
	operator boost::container::vector<FJceDataValue>() const;
	operator boost::container::map<FJceHeadData, FJceDataValue>() const;
	operator FJceStruct() const;


private:
	EJceDataType Type;
	boost::container::vector<uint8> Data;
};

struct FJcePair
{
	FJceHeadData HeadData;
	FJceDataValue Value;
};

class MIRAI_NATIVE_CPP_API FJceStruct
{
public:
	FJceStruct();
	FJceStruct(const boost::container::vector<uint8>& RawData);

	void writeValue(const FJceDataValue& Value, uint8 Tag);

	FJcePair readPair();

private:
	void writeHeadData(const FJceHeadData& HeadData);
	FJceHeadData readHeadData();

private:
	boost::container::vector<uint8> StructData;
};

#endif