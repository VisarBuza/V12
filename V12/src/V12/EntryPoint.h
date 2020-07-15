#pragma once

#ifdef V12_PLATFORM_WINDOWS

extern V12::Application* V12::CreateApplication();

int main(int argc, char** argv)
{
	printf("Welcome to the V12 engine!\n");
	auto app = V12::CreateApplication();
	app->Run();
	delete app;
}


#endif