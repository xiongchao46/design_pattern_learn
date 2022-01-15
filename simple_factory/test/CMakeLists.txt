find_package(GTest)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(calculator_test simple_factory_test.cpp)

target_link_libraries(calculator_test ${GTEST_BOTH_LIBRARIES} pthread)
gtest_discover_tests(calculator_test)