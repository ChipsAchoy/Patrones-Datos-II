//
// Created by anthony on 21/3/21.
//

#include "Statistics.h"
#include "iostream"

using namespace std;

void Statistics::update(float grade, int id, string name, int counter) {
    if (grade > this->max){
        this->max = grade;
    }
    if (grade < this->min){
        this->min = grade;
    }
    this->printStats();
}

void Statistics::printStats() {
    cout << "Minimo: " << this->min << endl;
    cout << "Maximo: " << this->max << endl;
    cout << "-------------------------------" << endl;
}