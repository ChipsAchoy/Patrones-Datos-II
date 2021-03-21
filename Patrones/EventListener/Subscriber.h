//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_SUBSCRIBER_H
#define PATRONES_SUBSCRIBER_H

#include <string>
using namespace std;

class Subscriber {
    public:
        virtual void update(float grade, int id, string name, int counter) = 0;
};


#endif //PATRONES_SUBSCRIBER_H
