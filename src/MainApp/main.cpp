#include <iostream>
#include <vulkan/vulkan.h>

//#define GLFW_INCLUDE_VULKAN
//#include <GLFW/glfw3.h>
#include "Tool.h"

int main()
{
    printf("hello world \n");

    VkApplicationInfo appInfo{};
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.pApplicationName = "Random Game";
    appInfo.pEngineName = "VkEngine";
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.apiVersion = VK_API_VERSION_1_0;

    VkInstance vulkanInstanceObj;

    VkInstanceCreateInfo createInfoObj{};
    createInfoObj.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfoObj.pApplicationInfo = &appInfo;
    vkCreateInstance(&createInfoObj, VK_NULL_HANDLE, &vulkanInstanceObj);
        
    //glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    //_glfw_window = glfwCreateWindow(800, 600, "CmakeTest", nullptr, nullptr);
    
    Tool::Print();

	          
    return 0;
}