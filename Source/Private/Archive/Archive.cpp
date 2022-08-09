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
