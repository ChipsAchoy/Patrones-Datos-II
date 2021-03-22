cmake_minimum_required(VERSION 3.17)
project(Patrones)

set(CMAKE_CXX_STANDARD 14)

add_executable(Patrones main.cpp Facade/LoggingManager/Register/Register.cpp Facade/LoggingManager/Register/Register.h Facade/LoggingManager/LoggingManager.h Facade/LoggingManager/LoggingManager.cpp Observer/EventListener/Subscriber.h Observer/EventListener/Grades.cpp Observer/EventListener/Grades.h Observer/EventListener/Statistics.cpp Observer/EventListener/Statistics.h Observer/EventListener/CheckedStudents.cpp Observer/EventListener/CheckedStudents.h Observer/Lists/List.cpp Observer/Lists/List.h Observer/Lists/Node.h Observer/EventManager/EvManager.cpp Observer/EventManager/EvManager.h)