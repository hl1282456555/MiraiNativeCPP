#include "Utils/IPv4Header.h"

FIPv4Header::FIPv4Header()
{
	std::fill(HeaderData, HeaderData + sizeof(HeaderData), 0);
}

uint8 FIPv4Header::version() const
{
	return (HeaderData[0] >> 4) & 0xF;
}

uint16 FIPv4Header::headerLength() const
{
	return (HeaderData[0] & 0xF) * 4;
}

uint8 FIPv4Header::typeOfService() const
{
	return HeaderData[1];
}

uint16 FIPv4Header::totalLength() const
{
	return combineBytes(2, 3);
}

uint16 FIPv4Header::identification() const
{
	return combineBytes(4, 5);
}

bool FIPv4Header::dontFragment() const
{
	return (HeaderData[6] & 0x40) != 0;
}

bool FIPv4Header::moreFragments() const
{
	return (HeaderData[6] & 0x20) != 0;
}

uint16 FIPv4Header::fragmentOffset() const
{
	return combineBytes(6, 7) & 0x1FFF;
}

uint32 FIPv4Header::timeOfLive() const
{
	return HeaderData[8];
}

uint8 FIPv4Header::protocol() const
{
	return HeaderData[9];
}

uint16 FIPv4Header::headerCheckSum() const
{
	return combineBytes(10, 11);
}

boost::asio::ip::address_v4 FIPv4Header::sourceAddr() const
{
	boost::asio::ip::address_v4::bytes_type bytes = {{HeaderData[12], HeaderData[13], HeaderData[14], HeaderData[15]}};
	return boost::asio::ip::address_v4(bytes);
}

boost::asio::ip::address_v4 FIPv4Header::destinationAddr() const
{
	boost::asio::ip::address_v4::bytes_type bytes = { {HeaderData[16], HeaderData[17], HeaderData[18], HeaderData[19]} };
	return boost::asio::ip::address_v4(bytes);
}

uint16 FIPv4Header::combineBytes(int32 FirstByte, int32 SecondByte) const
{
	return (HeaderData[FirstByte] << 8) + HeaderData[SecondByte];
}
