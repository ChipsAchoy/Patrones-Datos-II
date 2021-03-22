//
// Created by anthony on 21/3/21.
//

#include "EvManager.h"
#include <iostream>
using namespace std;
EvManager::EvManager() {
    this->subs = new List();
    this->count_in = 0;
    this->count_sub = 0;
}

void EvManager::notify(float grade, int id, string name) {
    this->count_in ++;
    for (int i=0; i<this->count_sub; i++){
        this->subs->getSub(i)->update(grade, id, name, this->count_in);
    }
}


void EvManager::suscribeObs(Subscriber * sub) {
    this->count_sub ++;
    this->subs->add(sub);
}