#include "Utils/ICMPHeader.h"

FICMPHeader::FICMPHeader()
{
	std::fill(HeaderData, HeaderData + sizeof(HeaderData), 0);
}

uint8 FICMPHeader::type() const
{
	return HeaderData[0];
}

uint8 FICMPHeader::code() const
{
	return HeaderData[1];
}

uint16 FICMPHeader::checkSum() const
{
	return combineBytes(2, 3);
}

uint16 FICMPHeader::identifier() const
{
	return combineBytes(4, 5);
}

uint16 FICMPHeader::sequenceNumber() const
{
	return combineBytes(6, 7);
}

void FICMPHeader::setType(uint8 Val)
{
	HeaderData[0] = Val;
}

void FICMPHeader::setCode(uint8 Val)
{
	HeaderData[1] = Val;
}

void FICMPHeader::setCheckSum(uint16 Val)
{
	writeBytes(2, 3, Val);
}

void FICMPHeader::setIdentifier(uint16 Val)
{
	writeBytes(4, 5, Val);
}

void FICMPHeader::setSequenceNumber(uint16 Val)
{
	writeBytes(6, 7, Val);
}

uint16 FICMPHeader::combineBytes(int32 FirstByte, int32 SecondByte) const
{
	return (HeaderData[FirstByte] << 8) + HeaderData[SecondByte];
}

void FICMPHeader::writeBytes(int32 FirstByte, int32 SecondByte, uint16 Value)
{
	HeaderData[FirstByte] = static_cast<uint8>(Value >> 8);
	HeaderData[SecondByte] = static_cast<uint8>(Value & 0xFF);
}
