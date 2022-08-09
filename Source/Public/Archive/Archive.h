#ifndef ARCHIVE_ARCHIVE_H
#define ARCHIVE_ARCHIVE_H

#include "Definitions.h"

#include <boost/container/string.hpp>

class MIRAI_NATIVE_CPP_API FArchive
{
public:
	FArchive() = default;
	FArchive(const FArchive&) = default;
	FArchive& operator=(const FArchive& ArchiveToCopy) = default;
	virtual ~FArchive() = default;

public:
	void setIsLoading();
	void setIsSaving();
	bool isLoading() const;

	void setSwapBytes(bool InSwapBytes = true);
	bool isSwappingBytes() const;

	void byteSwap(void* Data, int64 Num);

	virtual boost::container::string getArchiveName() const { return "FArchive"; }

	virtual int64 tell();
	virtual int64 totalSize();
	virtual bool atEnd();
	virtual void seek(int64 Pos) {}

	virtual void serialize(void* Data, int64 Num) {}
	void serializeBytesByOrder(void* Data, int64 Num)
	{
		if (!isSwappingBytes())
		{
			serialize(Data, Num);
		}
		else
		{
			if (isLoading())
			{
				byteSwap(Data, Num);
				serialize(Data, Num);
				byteSwap(Data, Num);
			}
			else
			{
				serialize(Data, Num);
				byteSwap(Data, Num);
			}
		}
	}

	friend FArchive& operator<<(FArchive& Ar, bool& Value)
	{
		Ar.serialize(&Value, 1);
		return Ar;
	}

	inline friend FArchive& operator<<(FArchive& Ar, int8& Value)
	{
		Ar.serialize(&Value, 1);
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, uint8& Value)
	{
		Ar.serialize(&Value, 1);
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, int16& Value)
	{
		Ar.serializeBytesByOrder(&Value, sizeof(Value));
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, uint16& Value)
	{
		Ar.serializeBytesByOrder(&Value, sizeof(Value));
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, int32& Value)
	{
		Ar.serializeBytesByOrder(&Value, sizeof(Value));
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, uint32& Value)
	{
		Ar.serializeBytesByOrder(&Value, sizeof(Value));
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, int64& Value)
	{
		Ar.serializeBytesByOrder(&Value, sizeof(Value));
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, uint64& Value)
	{
		Ar.serializeBytesByOrder(&Value, sizeof(Value));
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, float& Value)
	{
		Ar.serializeBytesByOrder(&Value, sizeof(Value));
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, double& Value)
	{
		Ar.serializeBytesByOrder(&Value, sizeof(Value));
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, boost::container::string& Value);

protected:
	bool bIsLoading = true;
	bool bSwapBytes = false;
};

#endif