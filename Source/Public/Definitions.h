#ifndef DEFINITIONS_H
#define DEFINITIONS_H

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
	#ifdef _WIN64
		#ifdef MIRAI_NATIVE_API_EXPORT
			#define  MIRAI_NATIVE_CPP_API __declspec(dllexport)
		#else
			#define MIRAI_NATIVE_CPP_API __declspec(dllimport)
		#endif
	#else
	#error mirai-core-native can only be used on 64-bit platforms.
	#endif
#else
#define MIRAI_NATIVE_CPP_API
#endif

#ifdef __cplusplus
	#define EXPORT_SCOPE_START extern "C" {
	#define EXPORT_SCOPE_END }
#else
	#define EXPORT_SCOPE_START
	#define EXPORT_SCOPE_END
#endif

typedef signed char			int8;
typedef signed short		int16;
typedef signed int			int32;
typedef signed long long	int64;

typedef unsigned char		uint8;
typedef unsigned short		uint16;
typedef unsigned int		uint32;
typedef unsigned long long	uint64;

#define INT8_MAX        127i8
#define UINT8_MAX       0xffui8
#define BYTE_MAX        0xff
#define SHORT_MAX       32767
#define INT16_MAX       32767i16
#define USHORT_MAX      0xffff
#define UINT16_MAX      0xffffui16
#define WORD_MAX        0xffff
#define INT_MAX         2147483647
#define INT32_MAX       2147483647i32
#define UINT_MAX        0xffffffff
#define UINT32_MAX      0xffffffffui32
#define LONG_MAX        2147483647L
#define ULONG_MAX       0xffffffffUL
#define DWORD_MAX       0xffffffffUL
#define LONGLONG_MAX    9223372036854775807i64
#define LONG64_MAX      9223372036854775807i64
#define INT64_MAX       9223372036854775807i64
#define ULONGLONG_MAX   0xffffffffffffffffui64
#define DWORDLONG_MAX   0xffffffffffffffffui64
#define ULONG64_MAX     0xffffffffffffffffui64
#define DWORD64_MAX     0xffffffffffffffffui64
#define UINT64_MAX      0xffffffffffffffffui64
#define INT128_MAX      170141183460469231731687303715884105727i128
#define UINT128_MAX     0xffffffffffffffffffffffffffffffffui128

enum { INDEX_NONE = -1 };

#endif