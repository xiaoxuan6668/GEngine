#pragma once

#ifdef GE_PLATFORM_WINDOWS

extern GEngine::Application* GEngine::CreateApplication();

int main(int argc, char** argv) {
	
	GEngine::Log::Init();
	GE_CORE_WARN("Initialized Log");
	int a = 5;
	GE_INFO("Hello! Var={0}",a);

	auto app = GEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif