//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_APPROVED_H
#define PATRONES_APPROVED_H

#include "string"
#include "Subscriber.h"

using namespace std;

class Approved: public Subscriber {
    int * ids;
    int * grades;
    void update(int grade, int id, string name, int counter);
    void printNames();

};


#endif //PATRONES_APPROVED_H
