cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        consolOutputInform.cpp
        consolOutputInform.h
        Decryption.cpp
        Decryption.h
        Encryption.cpp
        Encryption.h
        helpFunc.cpp
        helpFunc.h
        HillComp.cpp
        HillComp.h
        programInMain.cpp
        programInMain.h
        ShamirKeygen.cpp
        ShamirKeygen.h)
