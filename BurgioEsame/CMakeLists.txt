cmake_minimum_required(VERSION 3.15)
project(BurgioEsame)

set(CMAKE_CXX_STANDARD 14)

add_executable(BurgioEsame main.cpp src/Individuo.cpp include/Individuo.h src/Popolazione.cpp include/Popolazione.h src/FunctionBase.cpp include/FunctionBase.h src/FiveInputClasses.cpp include/FiveInputClasses.h)