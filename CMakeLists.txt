cmake_minimum_required(VERSION 3.15)
project(crytolib_demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(sha256 examples/main.cpp src/hash/sha256.cpp src/hash/sha256.h)

add_executable(testf test/sha256_test.cpp src/hash/sha256.h src/hash/sha256.cpp test/sha256_test.h)




