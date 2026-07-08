cmake_minimum_required(VERSION 3.20)

project(Favorite_color)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(Favorite_color
    src/Favorite_color.cpp
    src/ChooseColor.cpp
    src/PrintFun.cpp
)