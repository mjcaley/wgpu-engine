#include <wgpu.h>
#define GLFW_INCLUDE_NONE
#include "GLFW/glfw3.h"

namespace hlwgpu {
	struct WGPUState {
		WGPUInstance instance;
		WGPUAdapter adapter;
		WGPUSurface surface;
		WGPUDevice device;
		WGPUQueue queue;
		WGPUSurfaceConfiguration config;
		// SDL_Window* window;

		WGPUState();
		~WGPUState();
	};

	void adapterRequestCallback(WGPURequestAdapterStatus status, WGPUAdapter adapter, char const* message, void* userdata);
}
