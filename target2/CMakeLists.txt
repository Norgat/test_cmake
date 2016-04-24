cmake_minimum_required(VERSION 3.2)

project (target1 C CXX)

add_library (target2 STATIC "target2.c")
target_link_libraries (target2 target1)
