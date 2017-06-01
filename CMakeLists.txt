cmake_minimum_required(VERSION 3.7)
project(RPG)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp model/Individual.cpp model/Individual.h infra/IndividualDAO.cpp infra/IndividualDAO.h control/BattleControl.cpp control/BattleControl.h model/Weapon.cpp model/Weapon.h model/Level.cpp model/Level.h model/HeartPoint.cpp model/HeartPoint.h model/SpellPoint.cpp model/SpellPoint.h model/Attribute.cpp model/Attribute.h)
add_executable(RPG ${SOURCE_FILES})