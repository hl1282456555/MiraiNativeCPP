#ifndef UTILS_JCE_STRUCT_H
#define UTILS_JCE_STRUCT_H

#include "Definitions.h"
#include "Archive/MemoryWriter.h"

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
	virtual boost::container::vector<uint8> getRawData(bool bNeedSwapBytes = false) = 0;

	virtual bool TryGetBool(bool& OutValue) { return false; }
	virtual bool TryGetByte(int8& OutValue) { return false; }
	virtual bool TryGetByte(uint8& OutValue) { return false; }
	virtual bool TryGetShort(int16& OutValue) { return false; }
	virtual bool TryGetShort(uint16& OutValue) { return false; }
	virtual bool TryGetInt(int32& OutValue) { return false; }
	virtual bool TryGetInt(uint32& OutValue) { return false; }
	virtual bool TryGetLong(int64& OutValue) { return false; }
	virtual bool TryGetLong(uint64& OutValue) { return false; }
	virtual bool TryGetFloat(float& OutValue) { return false; }
	virtual bool TryGetDouble(double& OutValue) { return false; }
	virtual bool TryGetString(boost::container::string& OutValue) { return false; }
	virtual bool TryGetBytes(boost::container::vector<uint8>& OutValue) { return false; }
	virtual bool TryGetValueList(boost::container::vector<boost::shared_ptr<FJceDataBase>>& OutValue) { return false; }
	virtual bool TryGetMap(boost::container::map<boost::shared_ptr<FJceDataBase>, boost::shared_ptr<FJceDataBase>>& OutValue) { return false; }

protected:
	virtual void writeHead(FMemoryWriter& Writer) const;

protected:
	int32 Tag;
};

class MIRAI_NATIVE_CPP_API FJceDataByte : public FJceDataBase
{
public:
	FJceDataByte(int8 InValue, int32 InTag = 0);
	FJceDataByte(bool InValue, int32 InTag = 0);
	virtual ~FJceDataByte() {}

	virtual EJceDataType getType() const override { return EJceDataType::Byte; }
	virtual boost::container::vector<uint8> getRawData(bool bNeedSwapBytes = false) override;

	virtual bool TryGetBool(bool& OutValue) override;
	virtual bool TryGetByte(int8& OutValue) override;
	virtual bool TryGetByte(uint8& OutValue) override;

protected:
	int8 Value;
};

class MIRAI_NATIVE_CPP_API FJceDataShort : public FJceDataBase
{
public:
	FJceDataShort(int16 InValue, int32 InTag = 0);
	virtual ~FJceDataShort() {}

	virtual EJceDataType getType() const override { return EJceDataType::Short; }
	virtual boost::container::vector<uint8> getRawData(bool bNeedSwapBytes = false) override;

	virtual bool TryGetShort(int16& OutValue) override;
	virtual bool TryGetShort(uint16& OutValue) override;

protected:
	int16 Value;
};

class MIRAI_NATIVE_CPP_API FJceDataInt : public FJceDataBase
{
public:
	FJceDataInt(int32 InValue, int32 InTag = 0);
	virtual ~FJceDataInt() {}

	virtual EJceDataType getType() const override { return EJceDataType::Int; }
	virtual boost::container::vector<uint8> getRawData(bool bNeedSwapBytes = false) override;

	virtual bool TryGetInt(int32& OutValue) override;
	virtual bool TryGetInt(uint32& OutValue) override;

protected:
	int32 Value;
};

class MIRAI_NATIVE_CPP_API FJceDataLong : public FJceDataBase
{
public:
	FJceDataLong(int64 InValue, int32 InTag = 0);
	virtual ~FJceDataLong() {}

	virtual EJceDataType getType() const override { return EJceDataType::Long; }
	virtual boost::container::vector<uint8> getRawData(bool bNeedSwapBytes = false) override;

	virtual bool TryGetLong(int64& OutValue) override;
	virtual bool TryGetLong(uint64& OutValue) override;

protected:
	int64 Value;
};

class MIRAI_NATIVE_CPP_API FJceDataFloat : public FJceDataBase
{
public:
	FJceDataFloat(float InValue, int32 InTag = 0);
	virtual ~FJceDataFloat() {}

	virtual EJceDataType getType() const override { return EJceDataType::Float; }
	virtual boost::container::vector<uint8> getRawData(bool bNeedSwapBytes = false) override;

	virtual bool TryGetFloat(float& OutValue) override;

protected:
	float Value;
};

class MIRAI_NATIVE_CPP_API FJceDataDouble : public FJceDataBase
{
public:
	FJceDataDouble(double InValue, int32 InTag = 0);
	virtual ~FJceDataDouble() {}

	virtual EJceDataType getType() const override { return EJceDataType::Double; }
	virtual boost::container::vector<uint8> getRawData(bool bNeedSwapBytes = false) override;

	virtual bool TryGetDouble(double& OutValue) override;

protected:
	double Value;
};

class MIRAI_NATIVE_CPP_API FJceDataString : public FJceDataBase
{
public:
	FJceDataString(const boost::container::string& InValue, int32 InTag = 0);
	virtual ~FJceDataString() {}

	virtual EJceDataType getType() const override { return Value.size() <= 256 ? EJceDataType::ShortString : EJceDataType::LongString; }
	virtual boost::container::vector<uint8> getRawData(bool bNeedSwapBytes = false) override;

	virtual bool TryGetString(boost::container::string& OutValue) override;

protected:
	boost::container::string Value;
};

class MIRAI_NATIVE_CPP_API FJceDataMap : public FJceDataBase
{
public:
	FJceDataMap(const boost::container::map<boost::shared_ptr<FJceDataBase>, boost::shared_ptr<FJceDataBase>>& InValue, int32 InTag = 0);
	virtual ~FJceDataMap() {}

	void add(const boost::shared_ptr<FJceDataBase>& InKey, const boost::shared_ptr<FJceDataBase>& InValue);

	virtual EJceDataType getType() const override { return EJceDataType::Map; }
	virtual boost::container::vector<uint8> getRawData(bool bNeedSwapBytes = false) override;

	virtual bool TryGetMap(boost::container::map<boost::shared_ptr<FJceDataBase>, boost::shared_ptr<FJceDataBase>>& OutValue) override;

protected:
	boost::container::map<boost::shared_ptr<FJceDataBase>, boost::shared_ptr<FJceDataBase>> Value;
};

class MIRAI_NATIVE_CPP_API FJceDataList : public FJceDataBase
{
public:
	FJceDataList(const boost::container::list<boost::shared_ptr<FJceDataBase>>& InValue, int32 InTag = 0);
	virtual ~FJceDataList() {}

	void add(const boost::shared_ptr<FJceDataBase>& NewItem);

	virtual EJceDataType getType() const override { return EJceDataType::List; }
	virtual boost::container::vector<uint8> getRawData(bool bNeedSwapBytes = false) override;

	virtual bool TryGetValueList(boost::container::vector<boost::shared_ptr<FJceDataBase>>& OutValue) override;

protected:
	boost::container::list<boost::shared_ptr<FJceDataBase>> Value;
};

class MIRAI_NATIVE_CPP_API FJceDataSimpleList : public FJceDataBase
{
public:
	FJceDataSimpleList(const boost::container::vector<uint8>& InValue, int32 InTag = 0, int32 InLenTag = 0);
	virtual ~FJceDataSimpleList() {}

	void append(const boost::container::vector<uint8>& NewData);

	virtual EJceDataType getType() const override { return EJceDataType::TYPE_SIMPLE_LIST; }
	virtual boost::container::vector<uint8> getRawData(bool bNeedSwapBytes = false) override;

	virtual bool TryGetBytes(boost::container::vector<uint8>& OutValue) override;

protected:
	int32 LenTag;
	boost::container::vector<uint8> Value;
};

class MIRAI_NATIVE_CPP_API FJceDataStruct : public FJceDataBase
{
public:
	FJceDataStruct(const boost::container::list<boost::shared_ptr<FJceDataBase>>& InValue, int32 InTag = 0);
	virtual ~FJceDataStruct() {}

	void add(const boost::shared_ptr<FJceDataBase>& NewItem);

	virtual EJceDataType getType() const override { return EJceDataType::StructBegin; }
	virtual boost::container::vector<uint8> getRawData(bool bNeedSwapBytes = false) override;

	virtual bool TryGetValueList(boost::container::vector<boost::shared_ptr<FJceDataBase>>& OutValue) override;

protected:
	boost::container::list<boost::shared_ptr<FJceDataBase>> Value;
};

class MIRAI_NATIVE_CPP_API FJceDataStructEnd : public FJceDataBase
{
public:
	FJceDataStructEnd(int32 InTag = 0);
	virtual ~FJceDataStructEnd() {}

	virtual EJceDataType getType() const override { return EJceDataType::StructEnd; }
	virtual boost::container::vector<uint8> getRawData(bool bNeedSwapBytes = false) override;
};

class MIRAI_NATIVE_CPP_API FJceDataZeroTag : public FJceDataBase
{
public:
	FJceDataZeroTag(int32 InTag = 0);
	virtual ~FJceDataZeroTag() {}

	virtual EJceDataType getType() const override { return EJceDataType::ZeroTag; }
	virtual boost::container::vector<uint8> getRawData(bool bNeedSwapBytes = false) override;
};

#endif