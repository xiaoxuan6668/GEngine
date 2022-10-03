#pragma once

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GENGINE_API __declspec(dllexport)
	#else
		#define GENGINE_API __declspec(dllimport)
	#endif
#else
	#error GEngine only suport Windows!
#endif

#ifdef GE_ENABLE_ASSERTS
	#define GE_ASSERT(x,...){if(!x) {GE_ERROR("Assertion Failed:{0}",__VA_ARGS__);__debugbreak();}}
	#define GE_CORE_ASSERT(x,...){if(!x) {GE_CORE_ERROR("Assertion Failed:{0}",__VA_ARGS__);__debugbreak();}}
#else
	#define GE_ASSERT(x,...)
	#define GE_CORE_ASSERT(x,...)
#endif // GE_ENABLE_ASSERTS

#define BIT(x) (1<<x)