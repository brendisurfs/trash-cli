add_executable(trash_cli_test test_trash_cli.cc)

set_target_properties(trash_cli_test PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)

target_link_libraries(trash_cli_test PRIVATE
  trashutil
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(trash_cli_test)
