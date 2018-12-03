cmake_minimum_required(VERSION 2.6)

project(luna)

if(WIN32)
	# TODO
else()
	set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wno-unused-parameter -O2")
endif()

set(EXECUTABLE_OUTPUT_PATH "${PROJECT_BINARY_DIR}/bin")
set(LIBRARY_OUTPUT_PATH "${PROJECT_BINARY_DIR}/lib")

add_subdirectory(luna)
add_subdirectory(unittests)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 11)
