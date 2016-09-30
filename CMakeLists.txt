cmake_minimum_required(VERSION 3.5)
project(CSC_402_Asst_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Util.cpp Util.h OOCompare/IComparable.cpp OOCompare/IComparable.h OOCompare/StringWrapper.cpp OOCompare/StringWrapper.h OOCompare/IntWrapper.cpp OOCompare/IntWrapper.h)
add_executable(CSC_402_Asst_2 ${SOURCE_FILES})