cmake_minimum_required ( VERSION 2.6)
project (CmakeIntro)


message ("using c++ 14")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_subdirectory(src/Toolkit Projects/Toolkit)
add_subdirectory(src/MainApp Projects/MainApp)

