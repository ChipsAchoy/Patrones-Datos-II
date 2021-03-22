//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_NODE_H
#define PATRONES_NODE_H

#include "../EventListener/Subscriber.h"

/**
 * Nodo vinculado a la clase Lista
 */

class Node {
    public:
        Node * next = NULL;
        float grade;
        int id;
        Subscriber * sub;
        string name;
};


#endif //PATRONES_NODE_H
