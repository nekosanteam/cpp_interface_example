cmake_minimum_required(VERSION 3.11)
set(CMAKE_C_STANDARD   11)
set(CMAKE_CXX_STANDARD 14)
PROJECT(IFimpl CXX)
ENABLE_LANGUAGE(C)

set(CMAKE_C_FLAGS   "-Wall -Wextra -O2 ")
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Weffc++ -Wabi=2 -O2 ")

add_executable(InheritIFuse  InheritIFimpl.cpp  InheritIFuse.cpp)
add_executable(TemplateIFuse TemplateIFimpl.cpp TemplateIFuse.cpp)
