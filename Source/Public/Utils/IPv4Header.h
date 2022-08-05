#ifndef UTILS_IPV4_HEADER_H
#define UTILS_IPV4_HEADER_H

#include "Definitions.h"

#include <boost/asio/ip/address_v4.hpp>
#include <boost/iostreams/stream.hpp>

EXPORT_SCOPE_START

// Packet header for IPv4.
//
// The wire format of an IPv4 header is:
// 
// 0               8               16                             31
// +-------+-------+---------------+------------------------------+      ---
// |       |       |               |                              |       ^
// |version|header |    type of    |    total length in bytes     |       |
// |  (4)  | length|    service    |                              |       |
// +-------+-------+---------------+-+-+-+------------------------+       |
// |                               | | | |                        |       |
// |        identification         |0|D|M|    fragment offset     |       |
// |                               | |F|F|                        |       |
// +---------------+---------------+-+-+-+------------------------+       |
// |               |               |                              |       |
// | time to live  |   protocol    |       header checksum        |   20 bytes
// |               |               |                              |       |
// +---------------+---------------+------------------------------+       |
// |                                                              |       |
// |                      source IPv4 address                     |       |
// |                                                              |       |
// +--------------------------------------------------------------+       |
// |                                                              |       |
// |                   destination IPv4 address                   |       |
// |                                                              |       v
// +--------------------------------------------------------------+      ---
// |                                                              |       ^
// |                                                              |       |
// /                        options (if any)                      /    0 - 40
// /                                                              /     bytes
// |                                                              |       |
// |                                                              |       v
// +--------------------------------------------------------------+      ---

class MIRAI_NATIVE_CPP_API FIPv4Header
{
public:
	FIPv4Header();

	uint8 version() const;
	uint16 headerLength() const;
	uint8 typeOfService() const;
	uint16 totalLength() const;
	uint16 identification() const;
	bool dontFragment() const;
	bool moreFragments() const;
	uint16 fragmentOffset() const;
	uint32 timeOfLive() const;
	uint8 protocol() const;
	uint16 headerCheckSum() const;

	boost::asio::ip::address_v4 sourceAddr() const;
	boost::asio::ip::address_v4 destinationAddr() const;

	friend std::istream& operator>>(std::istream& Stream, FIPv4Header& Header)
	{
		Stream.read(reinterpret_cast<char*>(Header.HeaderData), 20);
		if (Header.version() != 4)
		{
			Stream.setstate(std::ios::failbit);
		}
		std::streamsize optionsLength = Header.headerLength() - 20;
		if (optionsLength < 0 || optionsLength > 40)
		{
			Stream.setstate(std::ios::failbit);
		}
		else
		{
			Stream.read(reinterpret_cast<char*>(Header.HeaderData) + 20, optionsLength);
		}

		return Stream;
	}

private:
	/**
	 * Combine two bytes into uint16.
	 *
	 * @param FirstByte	The index of first byte in the HeaderData.
	 * @param SecondByte The index of second byte in the HeaderData.
	 * @return (HeaderData[FirstByte] << 8) + HeaderData[SecondByte] 
	 */
	uint16 combineBytes(int32 FirstByte, int32 SecondByte) const;

private:
	uint8 HeaderData[60];
};

EXPORT_SCOPE_END

#endif