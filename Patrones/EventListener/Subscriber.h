//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_SUBSCRIBER_H
#define PATRONES_SUBSCRIBER_H

#include <string>
using namespace std;

class Subscriber {
    public:
        /**
         * Clase que actualiza el estado de un suscriptor basado en la entrada
         * @param grade nota final
         * @param id carnet de estudiante
         * @param name nombre del estudiante
         * @param counter contador de eventos recibidos
         */
        virtual void update(float grade, int id, string name, int counter) = 0;
};


#endif //PATRONES_SUBSCRIBER_H
