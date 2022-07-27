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

#endif