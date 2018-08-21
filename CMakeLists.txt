cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE} --std=c++14")

project(main)

add_executable(
	main
	main.cpp
	hello_world.h
	hello_world.cpp
	taran_add.cpp
)
