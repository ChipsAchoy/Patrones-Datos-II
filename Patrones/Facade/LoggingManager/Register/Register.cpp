//
// Created by jpabl on 21-mar.-21.
//

#include "Register.h"

/***
 * Retorna el nombre del usuario
 * @return nombre del usuario
 */
string Register::getUsername() {
    return userName;
}

/***
 * Se obtiene la contraseña del usuario
 * @return contraseña del usuario
 */
string Register::getPassword() {
    return password;
}

/***
 * Contructor de la clase Register, que son los nodos del registro de usuario
 * @param _username nombre de usuario
 * @param _password contraseña del usuario
 */
Register::Register(string _username, string _password) {
    userName = _username;
    password = _password;
}


