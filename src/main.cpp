#include <iostream>
#include "GLFW/glfw3.h"
#include "hlwgpu.hpp"

void error_callback(int error, const char* description)
{
    std::cout << "Error: " << description << std::endl;
}


int main() {
    std::cout << "Hello world!" << std::endl;
    
    glfwSetErrorCallback(error_callback);
    if (!glfwInit())
    {
        std::cout << "GLFW failed init" << std::endl;
        return 1;
    }

    GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
    if (!window)
    {
        std::cout << "GLFW failed create window" << std::endl;
    }

    std::cout << "GLFW success init" << std::endl;

    std::cout << "WGPU state setup" << std::endl;

    auto wgpuState = hlwgpu::WGPUState();

    while (true)
    {

    }

    glfwTerminate();

    return 0;
}
