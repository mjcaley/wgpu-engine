#include <wgpu.h>
#include <SDL.h>

namespace hlwgpu {
	struct WGPUState {
		WGPUInstance instance;
		WGPUAdapter adapter;
		WGPUSurface surface;
		WGPUDevice device;
		WGPUQueue queue;
		WGPUSurfaceConfiguration config;
		SDL_Window* window;

		WGPUState(SDL_Window* window);
		~WGPUState();
	};

	void adapterRequestCallback(WGPURequestAdapterStatus status, WGPUAdapter adapter, char const* message, void* userdata);
}
