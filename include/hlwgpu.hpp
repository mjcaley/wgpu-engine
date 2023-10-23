#ifdef _WIN32
	#define HLWGPUEXPORT __declspec(dllexport)
#else
	#define HLWGPUEXPORT
#endif


#include <wgpu.h>
#define GLFW_INCLUDE_NONE
#include "GLFW/glfw3.h"

namespace hlwgpu {
	struct HLWGPUEXPORT WGPUState {
		WGPUInstance instance;
		WGPUAdapter adapter;
		WGPUSurface surface;
		WGPUDevice device;
		WGPUQueue queue;
		WGPUSurfaceConfiguration config;

		WGPUState();
		~WGPUState();
	};

	HLWGPUEXPORT void error_callback(int error, const char* description);
	HLWGPUEXPORT void adapterRequestCallback(WGPURequestAdapterStatus status, WGPUAdapter adapter, char const* message, void* userdata);
	HLWGPUEXPORT int run();
}
