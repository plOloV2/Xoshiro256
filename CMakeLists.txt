cmake_minimum_required(VERSION 3.28)
project(xoshiro256 C)

add_library(xoshiro256 STATIC src/Xoshiro256.c)

target_include_directories(xoshiro256 PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/inc>)
