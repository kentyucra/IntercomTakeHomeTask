cmake_minimum_required(VERSION 3.16.3)

add_executable(IntercomTests IntercomTests.cpp)

target_link_libraries(IntercomTests PUBLIC
    gtest_main
    Intercom
)

add_test(
    NAME IntercomTests
    COMMAND IntercomTests
)
