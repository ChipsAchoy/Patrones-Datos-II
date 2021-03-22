//
// Created by jpabl on 21-mar.-21.
//

#include <iostream>
#include "LoggingManager.h"
using namespace std;


LoggingManager::LoggingManager() {
}

void LoggingManager::logging(string userName, string password) {
    if (checkUser(userName)){
        if (checkPassword(searchUserPass(userName),password)){
            cout<<"Se ha iniciado correctamente, usuario: "<<userName<<endl;
        } else{
            cout<<"Contraseña incorrecta, usuario:"<<userName<<endl;
        }

    } else{
        cout<<"Usuario "<<userName<<" no existe"<<endl;
    }
}

void LoggingManager::signIn(string userName, string password) {
    addToRegister(userName,password);

    addToBackup(userName,password);
}

void LoggingManager::addToRegister(string userName, string password) {
    cout<<"Agregando usuario:"<<userName<<endl;
    if (counter == 0){
        userRegister = new Register(userName,encryptPassword(password));
        counter++;
    }else{
        Register* tempRegister = userRegister;
        userRegister = new Register(userName,encryptPassword(password));
        userRegister->nextRegister = tempRegister;
        counter++;
    }
}

void LoggingManager::addToBackup(string userName, string password) {
    if (counter == 0){
        backupRegister = new Register(userName,encryptPassword(password));
    }else{
        Register* tempRegister = backupRegister;
        backupRegister = new Register(userName,encryptPassword(password));
        backupRegister->nextRegister = tempRegister;
    }


}

string LoggingManager::encryptPassword(string password) {
    string encryptedPassword = password;
    char temp[1];
    for (int i = 0; i<password.length();i++){
        temp[0] = cryptAux(char(password[i])+5);
        encryptedPassword[i] = temp[0];
    }
    cout<<encryptedPassword<<endl;
    return encryptedPassword;
}

char LoggingManager::cryptAux(int num) {
    char temp[1];
    sprintf(temp,"%c",num);
    return temp[0];
}

string LoggingManager::decryptPassword(string password) {
    string decryptedPassword = password;
    char temp[1];
    for (int i = 0; i<password.length();i++){
        temp[0] = cryptAux(char(password[i])-5);
        decryptedPassword[i] = temp[0];
    }
    return decryptedPassword;
}

string LoggingManager::searchUserPass(string userName) {
    Register* temp = userRegister;
    for (int i = 0;i<=counter;i++){
        if (userName == temp->getUsername()){
            return temp->getPassword();
        } else{
            temp = temp->nextRegister;
        }
    }
    return "-";
}

bool LoggingManager::checkPassword(string password, string loggingPassword) {

    if (decryptPassword(password)==loggingPassword){
        return true;
    }else{
        return false;
    }

}

bool LoggingManager::checkUser(string userName) {
    Register* temp = userRegister;
    for (int i = 0;i<=counter;i++){
        if (userName == temp->getUsername()){
            return true;
        } else{
            temp = temp->nextRegister;
        }
    }
    return false;
}
