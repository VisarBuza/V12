#include <V12.h>


class Sandbox : public V12::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

V12::Application* V12::CreateApplication()
{
	return new Sandbox();
}