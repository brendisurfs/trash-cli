add_executable(test_trashutil test_trashutil.cc)

set_target_properties(test_trashutil PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)

target_link_libraries(test_trashutil PRIVATE
  trashutil
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_trashutil)
