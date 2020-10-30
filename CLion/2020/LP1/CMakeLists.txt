cmake_minimum_required(VERSION 3.12)
project(LP1 C)


file(GLOB SOURCES
        main.c
        pr/*.c
        tp/*.c
        )

set(CMAKE_C_STANDARD 99)

add_executable(LP1 ${SOURCES} ${SOURCE_FILES} tp/tp02.c tp/tp02.h pr/pr01.c pr/pr01.h tp/tp03.c tp/tp03.h pr/pr02.c pr/pr02.h pr/pr03.c pr/pr03.h tp/tp04.c tp/tp04.h tp/tp05.c tp/tp05.h pr/pr04.c pr/pr04.h tp/tp06.c tp/tp06.h pr/pr05.c pr/pr05.h pr/pr06.c pr/pr06.h)
