//
// Created by jpabl on 21-mar.-21.
//

#ifndef PATRONES_LOGGINGMANAGER_H
#define PATRONES_LOGGINGMANAGER_H

#include <string>
#include "Register/Register.h"

using namespace std;

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
    string encryptPassword(string password);

    bool checkUser(string userName);
    string searchUserPass(string userName);
    string decryptPassword(string password);
    bool checkPassword(string password,string loggingPassword);
    char cryptAux(int num);


};


#endif //PATRONES_LOGGINGMANAGER_H
