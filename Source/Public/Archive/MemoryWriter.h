#ifndef ARCHIVE_MEMORY_WRITER_H
#define ARCHIVE_MEMORY_WRITER_H

#include "Definitions.h"
#include "MemoryArchive.h"

#include <boost/container/vector.hpp>

class MIRAI_NATIVE_CPP_API FMemoryWriter : FMemoryArchive
{
public:
	FMemoryWriter(boost::container::vector<uint8>& InBytes, bool bSetOffset = false);
	virtual ~FMemoryWriter() {}

	virtual void serialize(void* Data, int64 Num) override;

	int64 totalSize() override;

	virtual boost::container::string getArchiveName() const override { return "FMemoryWriter"; }

protected:
	boost::container::vector<uint8>& Bytes;
};

#endif