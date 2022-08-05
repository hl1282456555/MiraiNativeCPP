#ifndef UTILS_ICMP_HEADER_H
#define UTILS_ICMP_HEADER_H

#include "Definitions.h"

#include <boost/iostreams/stream.hpp>

EXPORT_SCOPE_START

// ICMP header for both IPv4 and IPv6.
//
// The wire format of an ICMP header is:
// 
// 0               8               16                             31
// +---------------+---------------+------------------------------+      ---
// |               |               |                              |       ^
// |     type      |     code      |          checksum            |       |
// |               |               |                              |       |
// +---------------+---------------+------------------------------+    8 bytes
// |                               |                              |       |
// |          identifier           |       sequence number        |       |
// |                               |                              |       v
// +-------------------------------+------------------------------+      ---

class MIRAI_NATIVE_CPP_API FICMPHeader
{
public:
	enum
	{
		EchoReply = 0,
		DestinationUnreachable = 3,
		SourceQuench = 4,
		Redirect = 5,
		EchoRequest = 8,
		TimeExceeded = 11,
		ParameterProblem = 12,
		TimestampRequest = 13,
		TimestampReply = 14,
		InfoRequest = 15,
		InfoReply = 16,
		AddressRequest = 17,
		AddressReply = 18
	};

public:
	FICMPHeader();

	uint8 type() const;
	uint8 code() const;
	uint16 checkSum() const;
	uint16 identifier() const;
	uint16 sequenceNumber() const;

	void setType(uint8 Val);
	void setCode(uint8 Val);
	void setCheckSum(uint16 Val);
	void setIdentifier(uint16 Val);
	void setSequenceNumber(uint16 Val);

	friend std::istream& operator>>(std::istream& Stream, FICMPHeader& Header)
	{
		return Stream.read(reinterpret_cast<char*>(Header.HeaderData), 8);
	}

	friend std::ostream& operator<<(std::ostream& Stream, const FICMPHeader& Header)
	{
		return Stream.write(reinterpret_cast<const char*>(Header.HeaderData), 8);
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

	/**
	 * Write a uint16 into HeaderData with specified indexes.
	 *
	 * @param FirstByte	The index of first byte in the HeaderData.
	 * @param SecondByte The index of second byte in the HeaderData.
	 * @param Value	The value for write in.
	 */
	void writeBytes(int32 FirstByte, int32 SecondByte, uint16 Value);

private:
	uint8 HeaderData[8];
};

EXPORT_SCOPE_END

template <typename Iterator>
void computeCheckSum(FICMPHeader& Header, Iterator BodyBegin, Iterator BodyEnd)
{
	uin32 sum = (Header.type() << 8) + Header.code() + Header.identifier() + Header.sequenceNumber();

	Iterator bodyIt = BodyBegin;
	while (bodyIt != BodyEnd)
	{
		sum += (static_cast<uint8>(*bodyIt++) << 8);
		if (bodyIt != BodyEnd)
		{
			sum += static_cast<uint8>(*bodyIt);
		}
	}

	sum = (sum >> 16) + (sum & 0xFFFF);
	sum += (sum >> 16);
	Header.setCheckSum(static_cast<uint16>(~sum));
}

#endif