
add_library(Toolkit
src/Tool.h
src/Tool.cpp)

# forces anyone who uses this lib to include the below mentioned source dir into their project props
target_include_directories(Toolkit PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")