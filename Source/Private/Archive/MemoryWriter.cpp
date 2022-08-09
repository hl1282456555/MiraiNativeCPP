#include "Archive/MemoryWriter.h"

FMemoryWriter::FMemoryWriter(boost::container::vector<uint8>& InBytes, bool bSetOffset)
	: FMemoryArchive()
	, Bytes(InBytes)
{
	setIsSaving();

	if (bSetOffset)
	{
		Offset = Bytes.size();
	}
}

void FMemoryWriter::serialize(void* Data, int64 Num)
{
	const int64 numBytesToAdd = Offset + Num - Bytes.size();
	if (numBytesToAdd > 0)
	{
		const int64 newArrayCount = Bytes.size() + numBytesToAdd;

		Bytes.resize(newArrayCount);
	}

	if (Num)
	{
		std::memcpy(&Bytes[Offset], Data, Num);
		Offset += Num;
	}
}

int64 FMemoryWriter::totalSize()
{
	return Bytes.size();
}
