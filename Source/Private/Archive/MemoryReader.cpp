#include "Archive/MemoryReader.h"

FMemoryReader::FMemoryReader(const boost::container::vector<uint8>& InBytes)
	: FMemoryArchive()
	, Bytes(InBytes)
	, LimitSize(INT64_MAX)
{
	setIsLoading();
}

int64 FMemoryReader::totalSize()
{
	return std::min(static_cast<int64>(Bytes.size()), LimitSize);
}

void FMemoryReader::serialize(void* Data, int64 Num)
{
	if (Num)
	{
		if(Offset + Num <= totalSize())
		{
			std::memcpy(Data, &Bytes[Offset], Num);
			Offset += Num;
		}
		else
		{
			throw std::exception("FMemoryReader doesn't have enough bytes to read.");
		}
	}
}
