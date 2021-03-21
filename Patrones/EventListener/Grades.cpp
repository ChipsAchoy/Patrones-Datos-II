//
// Created by anthony on 21/3/21.
//

#include "Grades.h"


void Grades::update(float grade, int id, string name, int counter) {
    this->students->add(grade);
    this->counter = counter;
    this->printGrades();
}

void Grades::printGrades() {
    cout << "Notas: \n";
    for (int i=0; i<this->counter; i++){
        cout << this->students->getGrade(i) << endl;
    }
}