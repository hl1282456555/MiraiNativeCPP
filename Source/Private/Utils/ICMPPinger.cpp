#include "Utils/ICMPPinger.h"

#include <string>

FICMPPinger::FICMPPinger(const char* InDestination)
	: Resolver(IOContext)
	, Socket(IOContext, boost::asio::ip::icmp::v4())
	, Timer(IOContext)
	, SequenceNumber(0)
	, NumReplies(0)
	, bIsTimeout(false)
	, Elapsed(-1)
{
	Destination = *Resolver.resolve(boost::asio::ip::icmp::v4(), InDestination, "").begin();

	startSend();
	startReceive();
}

void FICMPPinger::ping()
{
	IOContext.run();
}

bool FICMPPinger::isTimeout() const
{
	return bIsTimeout;
}

int32 FICMPPinger::getElapsed() const
{
	return Elapsed;
}

void FICMPPinger::startSend()
{
	std::string body("\"Hello!\" from ICMPPinger ping.");

	// Create an ICMP header for an echo request.
	FICMPHeader echoRequest;
	echoRequest.setType(FICMPHeader::EchoRequest);
	echoRequest.setCode(0);
	echoRequest.setIdentifier(getIdentifier());
	echoRequest.setSequenceNumber(++SequenceNumber);
	computeCheckSum(echoRequest, body.begin(), body.end());

	// Encode the request packet.
	boost::asio::streambuf requestBuff;
	std::ostream stream(&requestBuff);
	stream << echoRequest << body;

	// Send the request.
	TimeSent = boost::asio::steady_timer::clock_type::now();
	Socket.send_to(requestBuff.data(), Destination);

	// Wait up to fiv seconds for a reply.
	NumReplies = 0;
	Timer.expires_at(TimeSent + boost::asio::chrono::seconds(5));
	Timer.async_wait(boost::bind(&FICMPPinger::handleTimeout, this));
}

void FICMPPinger::handleTimeout()
{
	bIsTimeout = NumReplies == 0;
}

void FICMPPinger::startReceive()
{
	// Discard any data already in the buffer.
	ReplyBuffer.consume(ReplyBuffer.size());

	// Wait for a reply. We prepare the buffer to receive up to 64KB.
	Socket.async_receive(ReplyBuffer.prepare(65536), boost::bind(&FICMPPinger::handleReceive, this, boost::placeholders::_2));
}

void FICMPPinger::handleReceive(std::size_t Length)
{
	// The actual number of bytes received is committed to the buffer so that we
	// can extract it using a std::istream object.
	ReplyBuffer.commit(Length);

	// Decode the reply packet.
	std::istream stream(&ReplyBuffer);
	FIPv4Header ipv4Header;
	FICMPHeader icmpHeader;
	stream >> ipv4Header >> icmpHeader;

	// We can receive all ICMP packets received by the host, so we need to
	// filter out only the echo replies that match the our identifier and
	// expected sequence number
	if (stream && icmpHeader.type() == FICMPHeader::EchoReply && 
		icmpHeader.identifier() == getIdentifier() && icmpHeader.sequenceNumber() == SequenceNumber && 
		ipv4Header.destinationAddr() == Destination.address())
	{
		// If this the first reply, interrupt the five second timeout.
		if (NumReplies++ == 0)
		{
			Timer.cancel();
		}

		boost::asio::chrono::steady_clock::time_point now = boost::asio::chrono::steady_clock::now();
		boost::asio::chrono::steady_clock::duration duration = now - TimeSent;

		Elapsed = boost::asio::chrono::duration_cast<boost::asio::chrono::milliseconds>(duration).count();
	}
}

uint16 FICMPPinger::getIdentifier()
{
#if defined(BOOST_ASIO_WINDOWS)
	return static_cast<uint16>(::GetCurrentProcessId());
#else
	return static_cast<uint16>(::getpid());
#endif
}
