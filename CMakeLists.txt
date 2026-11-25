cmake_minimum_required(VERSION 4.2)
project(Personaggi)

set(CMAKE_CXX_STANDARD 20)

add_executable(Personaggi main.cpp
        Personaggio.cpp
        Personaggio.h
        Guerriero.cpp
        Guerriero.h
        Mago.cpp
        Mago.h
        Arciere.cpp
        Arciere.h)
