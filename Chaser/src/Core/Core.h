#pragma once

#ifdef CHASER_PLATFORM_WINDOWS
	#define CHASER_LIBRARY_EXPORT __declspec(dllexport)
	#define CHASER_LIBRARY_IMPORT __declspec(dllimport)
#else 
	#error Platform not supported by ChaserEngine
#endif

#ifdef CHASER_STATIC_PLUGIN
	#define CHASER_API
#elif defined CHASER_BUILDING_CORE
	#define CHASER_API CHASER_LIBRARY_EXPORT 
#else
	#define CHASER_API CHASER_LIBRARY_IMPORT
#endif
