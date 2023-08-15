cmake_minimum_required(VERSION 3.10)

project(DinoGame)

set(CMAKE_CXX_STANDARD 11)

# Add your source files here
set(SOURCES
        entities/Entity.cpp
        main.cpp
        )

# Add your header files here
set(HEADERS
        entities/Entity.h
        )

add_executable(main ${SOURCES} ${HEADERS})
