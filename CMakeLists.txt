cmake_minimum_required(VERSION 3.28)
project(DungeonGenerator)

set(CMAKE_CXX_STANDARD 17)

include_directories(src/render/3rdparty/easyx/include)

add_library(DungeonRender SHARED
        src/render/DungeonRender.cpp
        src/render/DungeonRender.h
)

if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(EASYX_LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/src/render/3rdparty/easyx/lib64/libeasyx.a)
else ()
    set(EASYX_LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/src/render/3rdparty/easyx/lib32/libeasyx.a)
endif ()


target_link_libraries(DungeonRender
    ${EASYX_LIB_PATH}
)

add_library(DungeonGenerator SHARED
        src/generator/DungeonGenerator.cpp
        src/generator/DungeonGenerator.h
        src/generator/Room.cpp
        src/generator/Room.h
        src/generator/RandomGenerator.h
        src/generator/Dungeon.cpp
        src/generator/Dungeon.h
)

add_executable(DungeonGeneratorDemo DungeonGeneratorDemo.cpp)

target_link_libraries(DungeonGeneratorDemo
    DungeonRender
    DungeonGenerator
)
