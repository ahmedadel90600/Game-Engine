#include "SandBoxApplication.h"
#include <iostream>
#include "GameEngine/EntryPoint.h"

void SandBoxApplication::Run()
{
	std::cout << "Sandbox application is running "<<std::endl;
}

Applicaiton* const GameEngine::CreateApplication()
{
	return new SandBoxApplication();
}