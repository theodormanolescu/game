cmake_minimum_required(VERSION 3.7)
project(game)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Game/Game.cpp Game/Game.h Game/GameObject.cpp Game/GameObject.h Item/Item.cpp Item/Item.h Item/Property.cpp Item/Property.h Character/Character.cpp Character/Character.h Character/CharacterFactory.cpp Character/CharacterFactory.h Character/Player.cpp Character/Player.h)
add_executable(untitled ${SOURCE_FILES})