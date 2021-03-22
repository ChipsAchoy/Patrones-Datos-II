//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_GRADES_H
#define PATRONES_GRADES_H


#include "Subscriber.h"
#include "CheckedStudents.h"
#include <iostream>

using namespace std;
/**
 * Clase concreta de subscriber para gestionar las notas finales
 */
class Grades: public Subscriber {
    public:
        List * students = new List();
        int counter = counter;
        /**
         * Overwrite del metodo abstracto de subscriber
         * Actualiza los datos para este suscriptor
         * @param grade nota final
         * @param id carnet de estudiante
         * @param name nombre del estudiante
         * @param counter contador de eventos recibidos
         */
        void update(float grade, int id, string name, int counter);
        /**
         * Muestra las notas actuales del registro
         */
        void printGrades();
};


#endif //PATRONES_GRADES_H
