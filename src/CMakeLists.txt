cmake_minimum_required(VERSION 3.0)

set(SOURCE_FILES
	main.cpp
	hello_world.h
	hello_world.cpp
	taran_add.cpp
	reverser.h
	reverser.cpp
	capitalize.h
	capitalize.cpp
)

add_library(complex ${SOURCE_FILES})

set(TEST_FILES
	tester.cpp
)

add_executable(tests ${TEST_FILES})

target_link_libraries(tests complex)

add_test(NAME example_test COMMAND tests)