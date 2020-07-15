#pragma once

#ifdef V12_PLATFORM_WINDOWS
	#ifdef V12_BUILD_DLL
		#define V12_API __declspec(dllexport) 
	#else
		#define V12_API __declspec(dllimport) 
	#endif
#else 
	#error V12 only supports Windows!
#endif