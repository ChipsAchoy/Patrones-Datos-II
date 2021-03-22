//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_GRADES_H
#define PATRONES_GRADES_H


#include "Subscriber.h"
#include "CheckedStudents.h"
#include <iostream>

using namespace std;
class Grades: public Subscriber {
    public:
        List * students = new List();
        int counter = counter;
        void update(float grade, int id, string name, int counter);
        void printGrades();
};


#endif //PATRONES_GRADES_H
