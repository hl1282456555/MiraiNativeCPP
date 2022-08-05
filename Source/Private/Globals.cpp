#include "Structures/Globals.h"

FDeviceInfo SystemDeviceInfo = {
	"MIRAI.123456.001",
	"mirai",
	"mirai",
	"mirai",
	"mamoe",
	"mirai",
	"unknow",
	"mamoe/mirai/mirai:10/MIRAI.200122.001/1234567:user/release-keys",
	"cb886ae2-00b6-4d68-a230-787f111d12c7",
	"Linux version 3.0.31-cb886ae2 (android-build@xxx.xxx.xxx.xxx.com)",
	"",
	"T-Mobile",
	"android",
	"00:50:56:C0:00:08",
	{10, 0, 1, 3},
	"00:50:56:C0:00:08",
	"<unknown ssid>",
	"",
	"468356291846738",
	"MIRAI.123456.001",
	"wifi",
	"MIUI",
	"mirai",
	"",
	"",
	EProtocolType::IPad,
	{
		"5891938",
		"10",
		"REL",
		29
	}
};

boost::container::map<EProtocolType, FAppVersion> AppVersionMap = {
	{EProtocolType::AndroidPhone,	{{0xA6, 0xB7, 0x45, 0xBF, 0x24, 0xA2, 0xC2, 0x77, 0x52, 0x77, 0x16, 0xF6, 0xF3, 0x6E, 0xB6, 0x8D},	"com.tencent.mobileqq",		"8.8.95",	"6.0.0.2512",	537122601,		537122601,	1654672174,		18,	150470524,		0x10400,	16724722,	EProtocolType::AndroidPhone }},
	{ EProtocolType::AndroidWatch,	{{0xA6, 0xB7, 0x45, 0xBF, 0x24, 0xA2, 0xC2, 0x77, 0x52, 0x77, 0x16, 0xF6, 0xF3, 0x6E, 0xB6, 0x8D},	"com.tencent.qqlite",			"2.0.5",	"6.0.0.236",	537064446,		537064446,	1559564731,		5,		16252796,		0x10400,	34869472,	EProtocolType::AndroidWatch} },
	{ EProtocolType::IPad,			{{170, 57, 120, 244, 31, 217, 111, 249, 145, 74, 102, 158, 24, 100, 116, 199},						"com.tencent.minihd.qq",		"8.8.35",	"6.0.0.2433",	537097188,		537097188,	1595836208,		12,	150470524,		66560,		1970400,	EProtocolType::IPad} },
	{ EProtocolType::MacOS,			{{170, 57, 120, 244, 31, 217, 111, 249, 145, 74, 102, 158, 24, 100, 116, 199},						"com.tencent.minihd.qq",		"5.8.9",	"6.0.0.2433",	537064315,		537064315,	1595836208,		12,	150470524,		66560,		1970400,	EProtocolType::MacOS} },
	{ EProtocolType::QiDian,		{{160, 30, 236, 171, 133, 233, 227, 186, 43, 15, 106, 21, 140, 133, 92, 41},							"com.tencent.qidian",			"5.0.0",	"6.0.0.2484",	537096038,		537036590,	1630062176,		18,	184024956,		66560,		34869472,	EProtocolType::QiDian} }
};