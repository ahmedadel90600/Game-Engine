#pragma once

#include "Application.h"

#ifdef GAMEENGINE_PLATFORM_WINDOWS

extern Applicaiton* const GameEngine::CreateApplication();

int main(int x, char** y)
{
	Applicaiton* MyApplication = GameEngine::CreateApplication();
	MyApplication->Run();
	delete MyApplication;

	return 0;
}

#endif