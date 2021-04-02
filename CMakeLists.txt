cmake_minimum_required(VERSION 3.20.0)

project(Intercom C CXX)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(googletest)
add_subdirectory(test)
add_subdirectory(json)

enable_testing()

add_library(Intercom STATIC Customer.cpp)

#target_link_libraries(Intercom PUBLIC nlohmann_json::nlohmann_json)


add_executable(Main main.cpp)

target_link_libraries(Main PUBLIC 
    nlohmann_json::nlohmann_json 
    Intercom
)