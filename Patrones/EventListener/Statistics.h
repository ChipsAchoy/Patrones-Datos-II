//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_STATISTICS_H
#define PATRONES_STATISTICS_H


#include "Subscriber.h"

class Statistics: public Subscriber {

    int * grades;

    void update(int grade, int id, string name, int counter);
    int getMax();
    int getMin();
    int getMean();
    void printStats();
};


#endif //PATRONES_STATISTICS_H
