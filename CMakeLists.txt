cmake_minimum_required(VERSION 3.20.0)

project(fetchpp)

find_package(httplib)

add_executable(fetchpp main.cpp)
target_link_libraries(fetchpp httplib::httplib)
