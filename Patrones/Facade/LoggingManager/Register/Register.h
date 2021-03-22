//
// Created by jpabl on 21-mar.-21.
//

#ifndef PATRONES_REGISTER_H
#define PATRONES_REGISTER_H
#include <string>
using namespace std;

/***
 * Esta clase serán los nodos para una lista de registros de usuario, donde se guardará la contraseña y usuario
 * de cada uno
 */
class Register {

private:
    string userName;
    string password;
public:
    Register(string username, string password);
    Register* nextRegister;
    string getUsername();
    string getPassword();

};


#endif //PATRONES_REGISTER_H
