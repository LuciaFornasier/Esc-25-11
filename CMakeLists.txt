cmake_minimum_required(VERSION 4.2)
project(es4)

set(CMAKE_CXX_STANDARD 20)

add_executable(es4 main.cpp
        Notifica.cpp
        Notifica.h
        NotificaEmail.cpp
        NotificaEmail.h
        NotificaSMS.cpp
        NotificaSMS.h
        Notificapush.cpp
        Notificapush.h
        GestoreNotifiche.h
        GestoreNotifiche.cpp)
