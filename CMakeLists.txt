cmake_minimum_required(VERSION 3.21)
project(cpluspluspractice)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpluspluspractice Monsterkampf-Simulator/main.cpp Monsterkampf-Simulator/monster.cpp Monsterkampf-Simulator/Monster.h Monsterkampf-Simulator/Monster_Fight.cpp Monsterkampf-Simulator/Monster_Fight.h Monsterkampf-Simulator/Monster_Creator.h Monsterkampf-Simulator/monster_creator.cpp)
