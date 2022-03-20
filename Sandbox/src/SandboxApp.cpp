#include <Hazel.h>

class Sandbox : public Hazel::Application {
public:
	Sandbox() {}

	void Run() {}

	~Sandbox() {}

};

Hazel::Application* Hazel::CreateApplication() {
	
	return new Sandbox();

}
