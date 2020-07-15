#pragma once

#include "Core.h"

namespace V12 {

	class V12_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}

