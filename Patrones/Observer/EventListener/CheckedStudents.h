//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_CHECKEDSTUDENTS_H
#define PATRONES_CHECKEDSTUDENTS_H

#include "string"
#include "Subscriber.h"
#include "../Lists/List.h"

using namespace std;
/**
 * Clase concreta de subscriber para los estudiantes calificados
 */
class CheckedStudents: public Subscriber {
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
         * Hace print de los estudiantes calificados
         */
        void printNames();

};


#endif //PATRONES_CHECKEDSTUDENTS_H
