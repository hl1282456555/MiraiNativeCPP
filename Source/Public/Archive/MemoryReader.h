#ifndef ARCHIVE_MEMORY_READER_H
#define ARCHIVE_MEMORY_READER_H

#include "Definitions.h"
#include "MemoryArchive.h"

#include <boost/container/vector.hpp>

class MIRAI_NATIVE_CPP_API FMemoryReader : public FMemoryArchive
{
public:
	FMemoryReader(const boost::container::vector<uint8>& InBytes);
	virtual ~FMemoryReader() {}

	virtual boost::container::string getArchiveName() const override { return "FMemoryReader"; }

	virtual int64 totalSize() override;

	virtual void serialize(void* Data, int64 Num) override;

private:
	const boost::container::vector<uint8>& Bytes;
	int64 LimitSize;
};

#endif