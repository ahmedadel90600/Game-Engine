#pragma once

#ifdef GAMEENGINE_PLATFORM_WINDOWS
	#ifdef GAMEENGINE_BUILD_DLL
		#define GAMEENGINE_API __declspec(dllexport)
	#else
		#define GAMEENGINE_API __declspec(dllimport)
	#endif
#else
	#error This GameEngine onlue supports windows
#endif