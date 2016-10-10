cmake_minimum_required(VERSION 3.5)
project(CSC_402_Asst_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Util.cpp Util.h Wrappers/IComparable.h Wrappers/StringWrapper.cpp Wrappers/StringWrapper.h Wrappers/IntWrapper.cpp Wrappers/IntWrapper.h TemplateCompare/TIntWrapper.cpp TemplateCompare/TIntWrapper.h TemplateCompare/TStringWrapper.cpp TemplateCompare/TStringWrapper.h)
add_executable(CSC_402_Asst_2 ${SOURCE_FILES})