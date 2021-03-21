//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_SUBSCRIBER_H
#define PATRONES_SUBSCRIBER_H

#include <string>
using namespace std;

class Subscriber {
    virtual void update(int grade, int id, string name, int counter);
};


#endif //PATRONES_SUBSCRIBER_H
