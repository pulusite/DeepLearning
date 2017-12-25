cmake_minimum_required(VERSION 3.7)
project(DeepLearning)
find_package(OpenCV)
#或者find_package(OpenCV3)
include_directories( ${OpenCV_INCLUDE_DIRS} )
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp header/Circle.h source/Circle.cpp)

add_executable(DeepLearning ${SOURCE_FILES})
target_link_libraries( DeepLearning ${OpenCV_LIBS} )