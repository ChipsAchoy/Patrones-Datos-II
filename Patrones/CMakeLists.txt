cmake_minimum_required(VERSION 3.17)
project(Patrones)

set(CMAKE_CXX_STANDARD 14)

add_executable(Patrones main.cpp EventListener/Subscriber.h EventListener/Grades.cpp EventListener/Grades.h EventListener/Statistics.cpp EventListener/Statistics.h EventListener/Approved.cpp EventListener/Approved.h Lists/ListInt.cpp Lists/ListInt.h Lists/ListStr.cpp Lists/ListStr.h Lists/ListSubs.cpp Lists/ListSubs.h)