add_library(example "")

target_sources(
    example
    PRIVATE
		main.cpp
		hello_world.cpp
		taran_add.cpp
		reverser.cpp
		capitalize.cpp
		factorial.cpp
	PUBLIC
		${CMAKE_CURRENT_LIST_DIR}/hello_world.h
		${CMAKE_CURRENT_LIST_DIR}/reverser.h
		${CMAKE_CURRENT_LIST_DIR}/capitalize.h
		${CMAKE_CURRENT_LIST_DIR}/factorial.h
    )

target_include_directories(
    example
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )