//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_STATISTICS_H
#define PATRONES_STATISTICS_H


#include "Subscriber.h"
#include "CheckedStudents.h"
#include <iostream>

using namespace std;

class Statistics: public Subscriber {
    public:
        List * students = new List();
        int counter = counter;
        float max = 0;
        float min = 100;
        float mean = 0;
        void update(float grade, int id, string name, int counter);
        void printStats();
};


#endif //PATRONES_STATISTICS_H
