//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_CHECKEDSTUDENTS_H
#define PATRONES_CHECKEDSTUDENTS_H

#include "string"
#include "Subscriber.h"
#include "../Lists/List.h"

using namespace std;

class CheckedStudents: public Subscriber {
    public:
        List * students = new List();
        int counter = counter;
        void update(float grade, int id, string name, int counter);
        void printNames();

};


#endif //PATRONES_CHECKEDSTUDENTS_H
