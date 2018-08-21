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
	reverser.h
	reverser.cpp
)

enable_testing()
add_executable(
	tester
	../test/tester.cpp
	../src/taran_add.cpp
)

add_test(t1 tester at1)
add_test(t2 tester at2)
add_test(t3 tester at3)
add_test(t4 tester at4)