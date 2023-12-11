cmake_minimum_required(VERSION 3.23)
project(AdventOfCode2023CPP)

set(CMAKE_CXX_STANDARD 23)

set(SOURCES
        main.cpp
        Day1/SolutionDay1.cpp
        )

add_executable(AdventOfCode2023CPP ${SOURCES})

target_compile_options(AdventOfCode2023CPP PRIVATE -O3)
