#ifndef ARCHIVE_ARCHIVE_H
#define ARCHIVE_ARCHIVE_H

#include "Definitions.h"

#include <boost/container/string.hpp>

#include <memory>

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

	virtual boost::container::string getArchiveName() const { return "FArchive"; }

	virtual int64 tell();
	virtual int64 totalSize();
	virtual bool atEnd();
	virtual void seek(int64 Pos) {}

	virtual void serialize(void* Data, int64 Num) {}
	template <typename T> void serializeBytesByOrder(T& Value)
	{
		int32 typeSize = sizeof(T);
		if (!isSwappingBytes())
		{
			serialize(&Value, typeSize);
		}
		else
		{
			if (isLoading())
			{
				T cachedValue = Value;
				uint8* bytePtr = &cachedValue;
				for (int32 ByteIndex = 0; ByteIndex < typeSize; ByteIndex++)
				{
					std::swap(bytePtr[ByteIndex], bytePtr[typeSize - 1 - ByteIndex]);
				}

				serialize(&cachedValue, typeSize);
			}
			else
			{
				serialize(&Value, typeSize);
				uint8* bytePtr = &Value;
				for (int32 ByteIndex = 0; ByteIndex < typeSize; ByteIndex++)
				{
					std::swap(bytePtr[ByteIndex], bytePtr[typeSize - 1 - ByteIndex]);
				}
			}
		}
	}

	friend FArchive& operator<<(FArchive& Ar, int8& Value)
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
		Ar.serializeBytesByOrder(Value);
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, uint16& Value)
	{
		Ar.serializeBytesByOrder(Value);
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, int32& Value)
	{
		Ar.serializeBytesByOrder(Value);
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, uint32& Value)
	{
		Ar.serializeBytesByOrder(Value);
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, int64& Value)
	{
		Ar.serializeBytesByOrder(Value);
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, uint64& Value)
	{
		Ar.serializeBytesByOrder(Value);
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, float& Value)
	{
		Ar.serializeBytesByOrder(Value);
		return Ar;
	}

	friend FArchive& operator<<(FArchive& Ar, double& Value)
	{
		Ar.serializeBytesByOrder(Value);
		return Ar;
	}

protected:
	bool bIsLoading = true;
	bool bSwapBytes = false;
};

#endif