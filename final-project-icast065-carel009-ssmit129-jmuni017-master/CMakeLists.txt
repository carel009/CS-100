cmake_minimum_required(VERSION 3.17)
project(final_project_icast065_carel009_ssmit129_jmuni017)

set(CMAKE_CXX_STANDARD 14)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})
include_directories(.)
include_directories(scenes)
include_directories(scenes/Encounter)
include_directories(scenes/Encounter/Combat)

add_executable(final_project_icast065_carel009_ssmit129_jmuni017
        scenes/Encounter/Combat/Combat.cpp
        scenes/Encounter/Combat/Combat.hpp
        scenes/Encounter/Encounter.cpp
        scenes/Encounter/Encounter.hpp
        scenes/Scene.cpp
        scenes/Scene.hpp
        character.hpp
        foe.cpp
        foe.hpp
        main.cpp
        player.hpp spells/PlayerSpells.cpp spells/PlayerSpells.hpp spells/MageSpells.cpp spells/MageSpells.hpp spells/Spells.cpp spells/Spells.hpp spells/Level1MageSpell.cpp spells/Level1MageSpell.hpp spells/SpellManager.cpp spells/SpellManager.hpp spells/WarriorSpells.cpp spells/WarriorSpells.hpp spells/Level1WarriorSpell.cpp spells/Level1WarriorSpell.hpp spells/KnightSpells.cpp spells/KnightSpells.hpp spells/Level1KnightSpells.cpp spells/Level1KnightSpells.hpp)

add_executable(Challenge_of_the_Idol_Frog
        scenes/Encounter/Combat/Combat.cpp
        scenes/Encounter/Encounter.cpp
        scenes/Scene.cpp
        foe.cpp
        main.cpp
        spells/PlayerSpells.cpp
        spells/MageSpells.cpp
        spells/Level1MageSpell.cpp
        spells/SpellManager.cpp)

target_link_libraries(final_project_icast065_carel009_ssmit129_jmuni017 ${CURSES_LIBRARIES})
