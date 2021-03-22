//
// Created by jpabl on 21-mar.-21.
//

#ifndef PATRONES_REGISTER_H
#define PATRONES_REGISTER_H
#include <string>
using namespace std;


class Register {

private:
    string userName;
    string password;
public:
    Register(string username, string password);
    Register* nextRegister;
    void setUserName(string userName);
    void setPassword(string password);
    string getUsername();
    string getPassword();

};


#endif //PATRONES_REGISTER_H
