//
// Created by anthony on 21/3/21.
//

#include "CheckedStudents.h"
#include <iostream>

using namespace std;

void CheckedStudents::update(float grade, int id, string name, int counter) {
    this->students->add(name);
    this->counter = counter;
    this->printNames();
}

void CheckedStudents::printNames() {
    cout << "Estudiantes: \n";
    for (int i=0; i<this->counter; i++){
        cout << this->students->getStr(i) << endl;
    }
}