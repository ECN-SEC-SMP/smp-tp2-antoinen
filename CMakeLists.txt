cmake_minimum_required(VERSION 3.10)
project(Tp2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(src)

set(src
    src/main.cpp
    src/lit_ecrit.cpp
    src/operations.cpp
    src/utilitaire.cpp
    src/config.cpp
    src/fibonacci.cpp
)

add_executable(${PROJECT_NAME} ${src})



