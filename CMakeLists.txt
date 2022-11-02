cmake_minimum_required(VERSION 3.10.0)

project(Race_Simulator_Project)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(Race_Simulator_Library SHARED 
Boots_AllTerrain.cpp Boots_AllTerrain.h
Broomstick.cpp Broomstick.h
Camel.cpp Camel.h
Camel_HighSpeed.cpp Camel_HighSpeed.h
Carpet_Flying.cpp Carpet_Flying.h
Centaur.cpp Centaur.h
Eagle.cpp Eagle.h
Transport.cpp Transport.h
Racing_simulator.cpp)

add_executable(Race_Simulator_Programm Racing_simulator.cpp)

target_link_libraries(Race_Simulator_Programm Race_Simulator_Library)