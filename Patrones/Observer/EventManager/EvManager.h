//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_EVMANAGER_H
#define PATRONES_EVMANAGER_H

#include "../EventListener/Subscriber.h"
#include "../Lists/List.h"

class EvManager {
    public:
        List * subs;
        int count_in = 0;
        int count_sub = 0;
        EvManager();
        void suscribeObs(Subscriber * sub);
        void notify(float grade, int id, string name);
};


#endif //PATRONES_EVMANAGER_H
