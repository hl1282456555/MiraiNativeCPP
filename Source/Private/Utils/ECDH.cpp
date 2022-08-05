#include "Utils/ECDH.h"
#include "Utils/MD5.h"

#include <boost/algorithm/hex.hpp>
#include <boost/json.hpp>
#include <boost/container/string.hpp>
#include <boost/lexical_cast.hpp>

#include <boost/log/trivial.hpp>

#include <openssl/ec.h>
#include <openssl/ecdh.h>
#include <openssl/evp.h>

#include <cpr/cpr.h>

static const char* ServerRawPublicKey = "04EBCA94D733E399B2DB96EACDD3F69A8BB0F74224E2B44E3357812211D2E62EFBC91BB553098E25E33A799ADC7F76FEB208DA7C6522CDB0719A305180CC54A82E";

FECDH FECDH::createDefault()
{
	FECDH result;
	result.generateKey(ServerRawPublicKey);

	return result;
}

void FECDH::generateKey(const boost::container::string& InPublicKey)
{
	EC_KEY* serverECKey = nullptr;
	EC_KEY* selfECKey = nullptr;
	EC_POINT* computedPoint = nullptr;
	BIGNUM* computedX = nullptr;
	BIGNUM* computedY = nullptr;

	try
	{

		boost::container::vector<unsigned char> decodedServerRawPublicKey;
		boost::algorithm::unhex(InPublicKey, std::back_inserter(decodedServerRawPublicKey));

		// convert ServerPublicKey from oct string to EC_KEY
		serverECKey = EC_KEY_new_by_curve_name(NID_X9_62_prime256v1);
		if (serverECKey == nullptr)
		{
			throw std::exception();
		}

		if ((EC_KEY_oct2key(serverECKey, decodedServerRawPublicKey.data(), decodedServerRawPublicKey.size(), NULL) != 0) || (EC_KEY_check_key(serverECKey) != 1))
		{
			throw std::exception();
		}

		// generate self ec key
		selfECKey = EC_KEY_new_by_curve_name(NID_X9_62_prime256v1);
		if (selfECKey == nullptr)
		{
			throw std::exception();
		}

		if (EC_KEY_generate_key(selfECKey) != 1)
		{
			throw std::exception();
		}

		computedPoint = EC_POINT_new(EC_KEY_get0_group(serverECKey));
		if (computedPoint == nullptr)
		{
			throw std::exception();
		}

		const BIGNUM* selfPrivateKey = EC_KEY_get0_private_key(selfECKey);
		if (EC_POINT_mul(EC_KEY_get0_group(serverECKey), computedPoint, nullptr, EC_KEY_get0_public_key(serverECKey), selfPrivateKey, nullptr) != 1)
		{
			throw std::exception();
		}

		computedX = BN_new();
		computedY = BN_new();
		if (computedX == nullptr || computedY == nullptr)
		{
			throw std::exception();
		}

		if (EC_POINT_get_affine_coordinates(EC_KEY_get0_group(serverECKey), computedPoint, computedX, computedY, nullptr) != 1)
		{
			throw std::exception();
		}

		ShareKey.resize(BN_num_bytes(computedX));
		BN_bn2bin(computedX, ShareKey.data());

		ShareKey = FMD5::ToByteArray(ShareKey.data(), 16);
		
		std::size_t keyByteSize = EC_POINT_point2oct(EC_KEY_get0_group(selfECKey), EC_KEY_get0_public_key(selfECKey), POINT_CONVERSION_UNCOMPRESSED, nullptr, 0, nullptr);
		PublicKey.resize(keyByteSize);

		if (EC_POINT_point2oct(EC_KEY_get0_group(selfECKey), EC_KEY_get0_public_key(selfECKey), POINT_CONVERSION_UNCOMPRESSED, PublicKey.data(), keyByteSize, nullptr) == 0)
		{
			throw std::exception();
		}
		
		EC_KEY_free(selfECKey);
		EC_KEY_free(serverECKey);
		EC_POINT_free(computedPoint);
		BN_free(computedX);
		BN_free(computedY);
	}
	catch (std::exception& e)
	{
		if (selfECKey != nullptr)
		{
			EC_KEY_free(selfECKey);
		}

		if (serverECKey != nullptr)
		{
			EC_KEY_free(serverECKey);
		}

		if (computedPoint != nullptr)
		{
			EC_POINT_free(computedPoint);
		}

		if (computedX != nullptr)
		{
			BN_free(computedX);
		}

		if (computedY != nullptr)
		{
			BN_free(computedY);
		}
	}
}

void FECDH::fetchPublickKeyFromServer(uint64 InUin)
{
	boost::container::string url = "https://keyrotate.qq.com/rotate_key?cipher_suite_ver=305&uin=" + boost::lexical_cast<boost::container::string>(InUin);
	cpr::Response response = cpr::Get(cpr::Url{ url.c_str() });

	if (response.status_code != 200)
	{
		return;
	}

	/* response json content
	{
		"QuerySpan": 86400,
		"PubKeyMeta": {
			"KeyVer": 2,
			"PubKey": "",
			"PubKeySign": ""
		}
	}
	*/

	try {
		boost::json::object responseJson = boost::json::parse(response.text).as_object();
		boost::json::object metaJson = responseJson["PubKeyMeta"].as_object();
		ServerPublicKeyVersion = metaJson["KeyVer"].as_int64();
		boost::container::string responsePublicKey = metaJson["PubKey"].as_string().c_str();
		generateKey(responsePublicKey);
	}
	catch (std::system_error& Error)
	{

	}
}
