#include "Utils/JceStructDecoder.h"

FJceStructDecoder::FJceStructDecoder(const boost::container::vector<uint8>& InBytes)
	: BytesReader(InBytes)
{

}

boost::shared_ptr<FJceDataBase> FJceStructDecoder::read(bool bReadOne)
{
	if (BytesReader.atEnd())
	{
		return nullptr;
	}

	FJceHeadData headData = readHead();
	switch(headData.Type)
	{
	case EJceDataType::Byte:
		break;
	case EJceDataType::Int:
		break;
	case EJceDataType::Long:
		break;
	default:
		break;
	}
}

FJceHeadData FJceStructDecoder::readHead()
{
	FJceHeadData result;

	uint8 firstByte;
	BytesReader << firstByte;

	result.Type = static_cast<EJceDataType>((firstByte & 0xF));

	result.Tag = (firstByte & 0xF0) >> 4;
	if (result.Tag == 0xF)
	{
		uint8 tagByte;
		BytesReader << tagByte;

		result.Tag = tagByte;
	}

	return result;
}
