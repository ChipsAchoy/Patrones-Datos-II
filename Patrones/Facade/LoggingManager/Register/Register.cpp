//
// Created by jpabl on 21-mar.-21.
//

#include "Register.h"


string Register::getUsername() {
    return userName;
}

string Register::getPassword() {
    return password;
}


void Register::setUserName(string _userName) {
    userName = _userName;
}

void Register::setPassword(string _password) {
    password = _password;
}

Register::Register(string _username, string _password) {
    userName = _username;
    password = _password;
}


