cmake_minimum_required(VERSION 3.16)
project(app)

set(CMAKE_CXX_STANDARD 17)

include_directories(dependencies/argparse/include)
include_directories(headers)

add_executable(app
        dependencies/argparse/include/argparse/argparse.hpp
        headers/decode.hpp
        headers/encode.hpp
        headers/huffman.hpp
        headers/util.hpp
        src/decode.cpp
        src/encode.cpp
        src/huffman.cpp
        src/main.cpp
        src/util.cpp)
