cmake_minimum_required(VERSION 3.7)
project(game)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Game.cpp Game.h Item/GameObject.cpp Item/GameObject.h Item/Item.cpp Item/Item.h Item/Property.cpp Item/Property.h)
add_executable(untitled ${SOURCE_FILES})