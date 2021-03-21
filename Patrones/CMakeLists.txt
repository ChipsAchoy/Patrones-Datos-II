cmake_minimum_required(VERSION 3.17)
project(Patrones)

set(CMAKE_CXX_STANDARD 14)

add_executable(Patrones main.cpp EventListener/Subscriber.h EventListener/Grades.cpp EventListener/Grades.h EventListener/Statistics.cpp EventListener/Statistics.h EventListener/CheckedStudents.cpp EventListener/CheckedStudents.h Lists/List.cpp Lists/List.h Lists/Node.h EventManager/EvManager.cpp EventManager/EvManager.h)