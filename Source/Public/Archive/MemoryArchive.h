#ifndef ARCHIVE_MEMORY_ARCHIVE_H
#define ARCHIVE_MEMORY_ARCHIVE_H

#include "Definitions.h"
#include "Archive.h"

class MIRAI_NATIVE_CPP_API FMemoryArchive : public FArchive
{
public:
	virtual ~FMemoryArchive() {}

	int64 tell() final
	{
		return Offset;
	}

	void seek(int64 Pos) final
	{
		Offset = Pos;
	}

protected:
	FMemoryArchive()
		: FArchive()
		, Offset(INDEX_NONE)
	{
		
	}

	int64 Offset;
};

#endif