#include "Archive/Archive.h"

void FArchive::setIsLoading()
{
	bIsLoading = true;
}

void FArchive::setIsSaving()
{
	bIsLoading = false;
}

bool FArchive::isLoading() const
{
	return bIsLoading;
}

void FArchive::setSwapBytes(bool InSwapBytes)
{
	bSwapBytes = InSwapBytes;
}

bool FArchive::isSwappingBytes() const
{
	return bSwapBytes;
}

void FArchive::byteSwap(void* Data, int64 Num)
{
	uint8* ptr = (uint8*)Data;
	int32 top = Num - 1;
	int32 bottom = 0;
	while (bottom < top)
	{
		std::swap(ptr[top--], ptr[bottom++]);
	}
}

int64 FArchive::tell()
{
	return INDEX_NONE;
}

int64 FArchive::totalSize()
{
	return 0;
}

bool FArchive::atEnd()
{
	int64 pos = tell();
	return (pos != INDEX_NONE) && (pos >= totalSize());
}

FArchive& operator<<(FArchive& Ar, boost::container::string& Value)
{
	int64 strLen = 0;

	if (Ar.isLoading())
	{
		strLen = Value.size();
		Ar.serializeBytesByOrder(&strLen, sizeof(strLen));

		Ar.serialize(&Value[0], strLen);
	}
	else
	{
		Ar.serializeBytesByOrder(&strLen, sizeof(strLen));
		if (strLen <= 0)
		{
			return Ar;
		}

		Value.resize(strLen);

		Ar.serialize(Value.data(), strLen);
	}
}
