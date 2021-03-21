//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_GRADES_H
#define PATRONES_GRADES_H


#include "Subscriber.h"

class Grades: public Subscriber {

    int * grades;
    int * ids;

    void update(int grade, int id, string name, int counter);
    void printGrades();
};


#endif //PATRONES_GRADES_H
