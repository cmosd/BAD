cmake_minimum_required(VERSION 3.19)
project(BAD)

set(CMAKE_CXX_STANDARD 14)

include_directories(
        /home/initard/blueprints/BAD/libs/
        /home/initard/blueprints/BAD/libs/eigen-3.3.9/
        )



add_executable(BAD
        src/main.cpp
        models/read_wav_file/readWavFile.h
        models/read_wav_file/readWavFile.cpp
        )
