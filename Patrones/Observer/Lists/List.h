//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_LIST_H
#define PATRONES_LIST_H


#include "Node.h"

class List {
    public:
        Node * head;
        List();
        void add(int value);
        void add(string value);
        void add(Subscriber * value);
        void add(float value);
        string getStr(int position);
        float getGrade(int position);
        Subscriber * getSub(int position);
};


#endif //PATRONES_LIST_H
