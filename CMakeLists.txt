cmake_minimum_required(VERSION 3.7)
project(RPG)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp model/Individual.cpp model/Individual.h util/IndividualDAO.cpp util/IndividualDAO.h control/BattleControl.cpp control/BattleControl.h)
add_executable(RPG ${SOURCE_FILES})