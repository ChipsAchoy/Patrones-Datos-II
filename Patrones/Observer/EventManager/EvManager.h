//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_EVMANAGER_H
#define PATRONES_EVMANAGER_H

#include "../EventListener/Subscriber.h"
#include "../Lists/List.h"


/**
 * Gestor de eventos que notifica a los suscriptores al recibir una entrada
 */
class EvManager {
    public:
        List * subs;
        int count_in = 0;
        int count_sub = 0;
        /**
         * COnstructor de la clase
         */
        EvManager();
        /**
         * Suscribe un observador
         * @param sub objeto de tipo suscriptor
         */
        void suscribeObs(Subscriber * sub);
        /**
         * Notifica a los suscriptores al recibir informacion nueva
         * @param grade nota del alumno
         * @param id carnet estudiantil
         * @param name nombre del estudiante
         */
        void notify(float grade, int id, string name);
};


#endif //PATRONES_EVMANAGER_H
