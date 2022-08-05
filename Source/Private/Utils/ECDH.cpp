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
	EC_KEY* selfECKey = nullptr;
	const EC_GROUP* selfGroup = nullptr;
	EC_POINT* serverPublicKey;

	try
	{
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
		
		std::size_t keyByteSize = EC_POINT_point2oct(selfGroup, EC_KEY_get0_public_key(selfECKey), POINT_CONVERSION_UNCOMPRESSED, nullptr, 0, nullptr);
		PublicKey.resize(keyByteSize);

		if (EC_POINT_point2oct(EC_KEY_get0_group(selfECKey), EC_KEY_get0_public_key(selfECKey), POINT_CONVERSION_UNCOMPRESSED, PublicKey.data(), keyByteSize, nullptr) == 0)
		{
			throw std::exception();
		}

		const BIGNUM* selfPrivateKey = EC_KEY_get0_private_key(selfECKey);
		if (selfPrivateKey)
		{
			throw std::exception();
		}

		PrivateKey.resize(BN_num_bytes(selfPrivateKey));
		BN_bn2bin(selfPrivateKey, PrivateKey.data());

		serverPublicKey = EC_POINT_new(selfGroup);
		if (EC_POINT_oct2point(selfGroup, serverPublicKey, reinterpret_cast<const unsigned char*>(InPublicKey.data()), InPublicKey.size(), NULL) != 1)
		{
			throw std::exception();
		}

		EC_KEY_set_public_key(selfECKey, serverPublicKey);

		ShareKey.resize(100);
		int32 shareKeyLength = ECDH_compute_key(ShareKey.data(), 100, serverPublicKey, selfECKey, NULL);
		if (shareKeyLength <= 0)
		{
			throw std::exception();
		}

		ShareKey.resize(shareKeyLength);

		EC_POINT_clear_free(serverPublicKey);
		EC_KEY_free(selfECKey);
		CRYPTO_cleanup_all_ex_data();
	}
	catch (std::exception& e)
	{
		if (selfECKey != nullptr)
		{
			EC_KEY_free(selfECKey);
		}

		if (serverPublicKey != nullptr)
		{
			EC_POINT_free(serverPublicKey);
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
