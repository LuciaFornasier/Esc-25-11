cmake_minimum_required(VERSION 4.2)
project(Esercizio3)

set(CMAKE_CXX_STANDARD 20)

add_executable(Esercizio3 main.cpp
        MetodoPagamento.cpp
        MetodoPagamento.h
        CartaCredito.cpp
        CartaCredito.h
        PayPal.cpp
        PayPal.h
        Contanti.cpp
        Contanti.h)
