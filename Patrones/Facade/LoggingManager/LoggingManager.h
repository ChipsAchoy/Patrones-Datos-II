//
// Created by jpabl on 21-mar.-21.
//

#ifndef PATRONES_LOGGINGMANAGER_H
#define PATRONES_LOGGINGMANAGER_H

#include <string>
#include "Register/Register.h"

using namespace std;

/***
 * Esta clase manera un registro de usuarios, la cual tiene un facade, ya que solo se pueden acceder a dos
 * métodos, logging() y singIn(), los cuales maneran el restro de funciones de esta clase, para que así
 * el usuario principal no tenga que preocuparse o darse cuenta, de los procesos que conllevan realizar
 * un registro.
 */
class LoggingManager {
public:
    LoggingManager();
    void logging(string userName,string password);
    void signIn(string userName, string password);

private:
    Register* userRegister;
    Register* backupRegister;
    int counter = 0;
    void addToRegister(string userName,string password);
    void addToBackup(string username,string password);
    string encryptPassword(string password,bool printInfo);

    bool checkUser(string userName);
    string searchUserPass(string userName);
    string decryptPassword(string password);
    bool checkPassword(string password,string loggingPassword);
    char cryptAux(int num);


};


#endif //PATRONES_LOGGINGMANAGER_H
