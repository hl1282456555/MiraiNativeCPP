#ifndef STRUCTURES_JCE_STRUCTURES_H
#define STRUCTURES_JCE_STRUCTURES_H

#include "Definitions.h"

#include "Utils/JceStructEncoder.h"

#include <utility>

struct FRequestDataVersion3
{
public:
	boost::container::map<boost::container::string, boost::container::vector<uint8>> Map;

	FJceStructEncoder& encode(FJceStructEncoder& Encoder)
	{
		boost::container::map<boost::shared_ptr<FJceDataBase>, boost::shared_ptr<FJceDataBase>> jceMap;

		for (std::pair<boost::container::string, boost::container::vector<uint8>>& Pair : Map)
		{
			boost::shared_ptr<FJceDataBase> key = boost::make_shared<FJceDataString>(Pair.first);
			boost::shared_ptr<FJceDataBase> value = boost::make_shared<FJceDataSimpleList>(Pair.second, 1);

			jceMap[key] = value;
		}

		Encoder.writeMap(jceMap, 0);

		return Encoder;
	}
};

struct FRequestPacket
{
public:
	int16 IVersion;
	uint8 CPacketType;
	int32 IMessageType;
	int32 IRequestId;
	boost::container::string SServantName;
	boost::container::string SFuncName;
	boost::container::vector<uint8> SBuffer;
	int32 ITimeout;
	boost::container::map<boost::container::string, boost::container::string> Context;
	boost::container::map<boost::container::string, boost::container::string> Status;
};

#endif // STRUCTURES_JCE_STRUCTURES_H
