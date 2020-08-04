cmake_minimum_required(VERSION 3.16)
project(huffmancoding)

set(CMAKE_CXX_STANDARD 17)

include_directories(headers)

add_executable(huffmancoding
        src/decode.cpp
        src/encode.cpp
        src/huffman.cpp
        src/main.cpp
        src/util.cpp)
