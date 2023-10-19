#define HL_NAME(n) hlwgpu_##n

#include <hl.h>
#include <wgpu.h>
#include "hlwgpu.hpp"

//HL_PRIM 

hlwgpu::WGPUState::WGPUState()
{
	instance = wgpuCreateInstance(nullptr);

	WGPURequestAdapterOptions options;
	wgpuInstanceRequestAdapter(
		instance,
		&options,
		[](WGPURequestAdapterStatus status, WGPUAdapter adapter, char const* message, void* userdata) mutable {
			if (status != WGPURequestAdapterStatus_Success) {
				throw "An exception";
			}

			auto* state = static_cast<WGPUState*>(userdata);
			state->adapter = adapter;
		},
		this);
	
	// SDL_SysWMinfo windowInfo;
	// SDL_GetWindowWMInfo(window, &windowInfo);
	// auto winSurfaceDescriptor = WGPUSurfaceDescriptorFromWindowsHWND();
	// winSurfaceDescriptor.chain.sType = WGPUSType_SurfaceDescriptorFromWindowsHWND;
	// winSurfaceDescriptor.hwnd = windowInfo.info.win.window;
	// auto surfaceDesc = WGPUSurfaceDescriptor();
	// surfaceDesc.nextInChain = &winSurfaceDescriptor.chain;
	// surface = wgpuInstanceCreateSurface(instance, &surfaceDesc);
	
	// auto adapterOptions = WGPURequestAdapterOptions();
	// adapterOptions.compatibleSurface = surface;
	/*wgpuInstanceRequestAdapter(
		instance,
		&adapterOptions,
		[]();*/
}

hlwgpu::WGPUState::~WGPUState()
{
	wgpuDeviceRelease(device);
	wgpuInstanceRelease(instance);
}

void hlwgpu::adapterRequestCallback(WGPURequestAdapterStatus status, WGPUAdapter adapter, char const* message, void* userdata)
{
	if (status != WGPURequestAdapterStatus_Success) {
		throw "An exception";
	}

	auto* state = static_cast<WGPUState*>(userdata);
	state->adapter = adapter;
}

int main() {
    if (!glfwInit())
    {
        return 1;
    }

    glfwTerminate();
}
