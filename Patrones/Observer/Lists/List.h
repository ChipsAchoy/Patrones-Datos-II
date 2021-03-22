//
// Created by anthony on 21/3/21.
//

#ifndef PATRONES_LIST_H
#define PATRONES_LIST_H


#include "Node.h"

/**
 * Implementacion de una lista simple
 *
 */
class List {
    public:
        Node * head;
        /**
         * Constructor de la clase
         */
        List();
        /**
         * Agrega un nodo a la lista
         * @param value un valor entero
         */
        void add(int value);
        /**
         * Agrega un nodo a la lista
         * @param value string que se almacena en el nodo
         */
        void add(string value);
        /**
         * Agrega un nodo a la lista
         * @param value referencia aun dato de tipo subscriber
         */
        void add(Subscriber * value);
        /**
         * Agrega un nodo a la lista
         * @param value valor de tipo flotante
         */
        void add(float value);
        /**
         * Retorna el dato asociado al nodo en una posicion
         * @param position posicion en la lista
         * @return string asociado
         */
        string getStr(int position);
        /**
         * Retorna el dato asociado al nodo en una posicion
         * @param position posicion en la lista
         * @return float asociado
         */
        float getGrade(int position);
        /**
         * Retorna el dato asociado al nodo en una posicion
         * @param position posicion en la lista
         * @return referencia al suscriptor
         */
        Subscriber * getSub(int position);
};


#endif //PATRONES_LIST_H
