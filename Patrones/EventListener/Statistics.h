//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_STATISTICS_H
#define PATRONES_STATISTICS_H


#include "Subscriber.h"
#include "CheckedStudents.h"
#include <iostream>

using namespace std;

/**
 * Clase concreta de subscriber
 */
class Statistics: public Subscriber {
    public:
        List * students = new List();
        int counter = counter;
        float max = 0;
        float min = 100;
        float mean = 0;
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
         * Muestra las estadisticas del conjunto de notas, incluyendo la mayor y menor nota
         */
        void printStats();
};


#endif //PATRONES_STATISTICS_H
