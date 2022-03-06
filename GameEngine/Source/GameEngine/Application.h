#pragma once

#include "Core.h"

class GAMEENGINE_API Applicaiton
{

public:

	virtual void Run();
};

namespace GameEngine
{
	Applicaiton* const CreateApplication();
}