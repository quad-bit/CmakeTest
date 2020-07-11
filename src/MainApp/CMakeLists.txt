find_package(Vulkan REQUIRED)

add_executable(basic
main.cpp)

message ("vulkan include directory ${Vulkan_INCLUDE_DIR}")
target_include_directories(basic PUBLIC ${Vulkan_INCLUDE_DIR})

message ("vulkan library ${Vulkan_LIBRARIES}")
target_link_libraries(basic PUBLIC ${Vulkan_LIBRARIES} Toolkit)