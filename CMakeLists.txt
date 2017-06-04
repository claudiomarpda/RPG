cmake_minimum_required(VERSION 3.7)
project(RPG)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/Individual.cpp include/Individual.h src/IndividualDAO.cpp include/IndividualDAO.h src/BattleControl.cpp include/BattleControl.h src/Weapon.cpp include/Weapon.h src/Level.cpp include/Level.h src/HeartPoint.cpp include/HeartPoint.h src/SpellPoint.cpp include/SpellPoint.h src/Attribute.cpp include/Attribute.h include/Element.h src/Skill.cpp include/Skill.h src/Mage.cpp include/Mage.h src/Warrior.cpp include/Warrior.h include/LoggerConfig.h src/Log.cpp include/Log.h src/AttackManager.cpp include/AttackManager.h src/Enemy.cpp src/Enemy.h)
add_executable(RPG ${SOURCE_FILES})