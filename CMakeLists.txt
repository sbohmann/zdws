cmake_minimum_required(VERSION 3.21)
project(zdws C)

set(CMAKE_C_STANDARD 23)

set(CMAKE_C_FLAGS "-Wall -Wpedantic -Werror")

set(CMAKE_EXE_LINKER_FLAGS "-rdynamic")

add_executable(zdws main.c linereader.c linereader.h intparsing.c intparsing.h string.c string.h chararray.c fail.c fail.h)
