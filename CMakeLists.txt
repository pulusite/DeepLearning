cmake_minimum_required(VERSION 3.3)
project(deeplearning)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(SOURCE_FILES main.cpp header/Circle.h source/Circle.cpp)
add_executable(deeplearning ${SOURCE_FILES})

set(PROJECT_BINARY_DIR F:/github/deeplearning)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

target_link_libraries(deeplearning glu32 opengl32)