# CMakeList.txt : CMake project for Research, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (LeetcodeRunner "Leetcode.c" "Leetcode.h" "LeetcodeRunner.c" "utils.h" "utils.c" "Stack.c" "Stack.h" "research_error.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Research PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
