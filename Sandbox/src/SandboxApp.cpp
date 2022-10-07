#include <GEngine.h>

class ExampleLayer : public GEngine::Layer {
public:
	ExampleLayer()
		:Layer("Example") {}

	void OnUpdate() override {
		GE_INFO("ExampleLayer : Update");
	}

	void OnEvent(GEngine::Event& event) override {
		GE_TRACE("{0}", event);
	}
};

class Sandbox : public GEngine::Application {
public:
	Sandbox() {
		PushLayer(new ExampleLayer());
		PushOverlay(new GEngine::ImGuiLayer());
	}

	~Sandbox() {

	}
};

GEngine::Application* GEngine::CreateApplication() {
	return new Sandbox();
}