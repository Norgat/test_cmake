
cmake_minimum_required(VERSION 3.2)

project (test_cmake C CXX)

add_subdirectory (target1)
add_subdirectory (target2)


add_executable(test_cmake "main.cpp")
target_link_libraries(test_cmake target2)
