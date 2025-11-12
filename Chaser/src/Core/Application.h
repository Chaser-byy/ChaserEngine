#pragma once

#include "Core.h"

namespace Chaser {

class CHASER_API Application 
{
public:
	Application();
	virtual ~Application();

	void run();

};

// to be defined in CLIENT
Application* createApplication();

} // namespace Chaser
