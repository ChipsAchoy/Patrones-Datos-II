//
// Created by anthony on 21/3/21.
//

#include "List.h"

List::List() {
    this->head = NULL;
}

void List::add(int value) {
    if (this->head == NULL){
        this->head = new Node();
        this->head->id = value;
    }else{
        Node * tmp = this->head;
        while (tmp->next != NULL){
            tmp = this->head->next;
        }
        tmp->next = new Node();
        tmp->next->id = value;
    }
}

void List::add(float value) {
    if (this->head == NULL){
        this->head = new Node();
        this->head->grade = value;
    }else{
        Node * tmp = this->head;
        while (tmp->next != NULL){
            tmp = this->head->next;
        }
        tmp->next = new Node();
        tmp->next->grade = value;
    }
}

void List::add(string value) {
    if (this->head == NULL){
        this->head = new Node();
        this->head->name = value;
    }else{
        Node * tmp = this->head;
        while (tmp->next != NULL){
            tmp = this->head->next;
        }
        tmp->next = new Node();
        tmp->next->name = value;
    }
}

void List::add(Subscriber * value) {
    if (this->head == NULL){
        this->head = new Node();
        this->head->sub = value;
    }else{
        Node * tmp = this->head;
        while (tmp->next != NULL){
            tmp = this->head->next;
        }
        tmp->next = new Node();
        tmp->next->sub = value;
    }

}

float List::getGrade(int position) {
    Node * tmp = this->head;
    for (int i=0; i<position; i++){
        tmp = tmp->next;
    }
    return tmp->grade;
}

string List::getStr(int position) {
    Node * tmp = this->head;
    for (int i=0; i<position; i++){
        tmp = tmp->next;
    }
    return tmp->name;
}

Subscriber * List::getSub(int position) {
    Node * tmp = this->head;
    for (int i=0; i<position; i++){
        tmp = tmp->next;
    }
    return tmp->sub;
}