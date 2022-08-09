#ifndef UTILS_JCE_STRUCT_H
#define UTILS_JCE_STRUCT_H

#include "Definitions.h"

#include <boost/container/vector.hpp>
#include <boost/container/map.hpp>
#include <boost/container/string.hpp>
#include <boost/container/list.hpp>

#include <boost/smart_ptr/shared_ptr.hpp>

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
	ZeroTag = 12,
	TYPE_SIMPLE_LIST = 13
};

class MIRAI_NATIVE_CPP_API FJceDataBase
{
public:
	FJceDataBase(int32 InTag)
		: Tag(InTag)
	{

	}

	virtual ~FJceDataBase() {}

	int32 getTag() const { return Tag; }

	virtual EJceDataType getType() const = 0;
	virtual boost::container::vector<uint8> getRawData() = 0;

protected:
	virtual void writeHead(boost::container::vector<uint8>& Out) const;

protected:
	int32 Tag;
};

class MIRAI_NATIVE_CPP_API FJceDataByte : public FJceDataBase
{
public:
	FJceDataByte(int8 InValue, int32 InTag);
	FJceDataByte(bool InValue, int32 InTag);
	virtual ~FJceDataByte() {}

	virtual EJceDataType getType() const override { return EJceDataType::Byte; }
	virtual boost::container::vector<uint8> getRawData() override;

protected:
	int8 Value;
};

class MIRAI_NATIVE_CPP_API FJceDataShort : public FJceDataBase
{
public:
	FJceDataShort(int16 InValue, int32 InTag);
	virtual ~FJceDataShort() {}

	virtual EJceDataType getType() const override { return EJceDataType::Short; }
	virtual boost::container::vector<uint8> getRawData() override;

protected:
	int16 Value;
};

class MIRAI_NATIVE_CPP_API FJceDataInt : public FJceDataBase
{
public:
	FJceDataInt(int32 InValue, int32 InTag);
	virtual ~FJceDataInt() {}

	virtual EJceDataType getType() const override { return EJceDataType::Int; }
	virtual boost::container::vector<uint8> getRawData() override;

protected:
	int32 Value;
};

class MIRAI_NATIVE_CPP_API FJceDataLong : public FJceDataBase
{
public:
	FJceDataLong(int64 InValue, int32 InTag);
	virtual ~FJceDataLong() {}

	virtual EJceDataType getType() const override { return EJceDataType::Long; }
	virtual boost::container::vector<uint8> getRawData() override;

protected:
	int64 Value;
};

class MIRAI_NATIVE_CPP_API FJceDataFloat : public FJceDataBase
{
public:
	FJceDataFloat(float InValue, int32 InTag);
	virtual ~FJceDataFloat() {}

	virtual EJceDataType getType() const override { return EJceDataType::Float; }
	virtual boost::container::vector<uint8> getRawData() override;

protected:
	float Value;
};

class MIRAI_NATIVE_CPP_API FJceDataDouble : public FJceDataBase
{
public:
	FJceDataDouble(double InValue, int32 InTag);
	virtual ~FJceDataDouble() {}

	virtual EJceDataType getType() const override { return EJceDataType::Double; }
	virtual boost::container::vector<uint8> getRawData() override;

protected:
	double Value;
};

class MIRAI_NATIVE_CPP_API FJceDataString : public FJceDataBase
{
public:
	FJceDataString(const boost::container::string& InValue, int32 InTag);
	virtual ~FJceDataString() {}

	virtual EJceDataType getType() const override { return Value.size() <= 256 ? EJceDataType::ShortString : EJceDataType::LongString; }
	virtual boost::container::vector<uint8> getRawData() override;

protected:
	boost::container::string Value;
};

class MIRAI_NATIVE_CPP_API FJceDataMap : public FJceDataBase
{
public:
	FJceDataMap(const boost::container::map<boost::shared_ptr<FJceDataBase>, const boost::shared_ptr<FJceDataBase>>& InValue, int32 InTag);
	virtual ~FJceDataMap() {}

	void add(const boost::shared_ptr<FJceDataBase>& InKey, const boost::shared_ptr<FJceDataBase>& InValue);

	virtual EJceDataType getType() const override { return EJceDataType::Map; }
	virtual boost::container::vector<uint8> getRawData() override;

protected:
	boost::container::map<boost::shared_ptr<FJceDataBase>, boost::shared_ptr<FJceDataBase>> Value;
};

class MIRAI_NATIVE_CPP_API FJceDataList : public FJceDataBase
{
public:
	FJceDataList(const boost::container::list<boost::shared_ptr<FJceDataBase>>& InValue, int32 InTag);
	virtual ~FJceDataList() {}

	void add(const boost::shared_ptr<FJceDataBase>& NewItem);

	virtual EJceDataType getType() const override { return EJceDataType::List; }
	virtual boost::container::vector<uint8> getRawData() override;

protected:
	boost::container::list<boost::shared_ptr<FJceDataBase>> Value;
};

class MIRAI_NATIVE_CPP_API FJceDataSimpleList : public FJceDataBase
{
public:
	FJceDataSimpleList(const boost::container::vector<uint8>& InValue, int32 InTag, int32 InListTag);
	virtual ~FJceDataSimpleList() {}

	void append(const boost::container::vector<uint8>& NewData);

	virtual EJceDataType getType() const override { return EJceDataType::TYPE_SIMPLE_LIST; }
	virtual boost::container::vector<uint8> getRawData() override;

protected:
	int32 ListTag;
	boost::container::vector<uint8> Value;
};

class MIRAI_NATIVE_CPP_API FJceDataStruct : public FJceDataBase
{
public:
	FJceDataStruct(const boost::container::list<boost::shared_ptr<FJceDataBase>>& InValue, int32 InTag);
	virtual ~FJceDataStruct() {}

	void add(const boost::shared_ptr<FJceDataBase>& NewItem);

	virtual EJceDataType getType() const override { return EJceDataType::StructBegin; }
	virtual boost::container::vector<uint8> getRawData() override;

protected:
	boost::container::list<boost::shared_ptr<FJceDataBase>> Value;
};

class MIRAI_NATIVE_CPP_API FJceDataStructEnd : public FJceDataBase
{
public:
	FJceDataStructEnd(int32 InTag);
	virtual ~FJceDataStructEnd() {}

	virtual EJceDataType getType() const override { return EJceDataType::StructEnd; }
	virtual boost::container::vector<uint8> getRawData() override;
};

#endif