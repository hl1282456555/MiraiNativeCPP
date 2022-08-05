#ifndef UTILS_ICMP_PINGER_H
#define UTILS_ICMP_PINGER_H

#include "Definitions.h"
#include "IPv4Header.h"
#include "ICMPHeader.h"

#include <boost/asio.hpp>
#include <boost/bind/bind.hpp>

EXPORT_SCOPE_START

class MIRAI_NATIVE_CPP_API FICMPPinger
{
public:
	FICMPPinger(const char* InDestination);

	void ping();

	bool isTimeout() const;
	int32 getElapsed() const;

private:
	void startSend();
	void handleTimeout();
	void startReceive();
	void handleReceive(std::size_t Length);
	static uint16 getIdentifier();

private:
	boost::asio::io_context			IOContext;
	boost::asio::ip::icmp::resolver Resolver;
	boost::asio::ip::icmp::endpoint	Destination;
	boost::asio::ip::icmp::socket	Socket;
	boost::asio::steady_timer		Timer;
	boost::asio::chrono::steady_clock::time_point	TimeSent;
	boost::asio::streambuf ReplyBuffer;
	uint16 SequenceNumber;
	std::size_t NumReplies;

	bool bIsTimeout;
	int32 Elapsed;
};

EXPORT_SCOPE_END

#endif