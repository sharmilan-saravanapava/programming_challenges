add_executable(
    unit_tests
    test_add.cpp
    test_factorial.cpp
    )

target_link_libraries(
    unit_tests
    gtest_main
    example
    )

add_test(
  NAME
    unit
  COMMAND
    ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/bin/unit_tests
  )
  
