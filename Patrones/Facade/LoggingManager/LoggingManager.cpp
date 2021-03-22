//
// Created by jpabl on 21-mar.-21.
//

#include <iostream>
#include "LoggingManager.h"
using namespace std;


LoggingManager::LoggingManager() {
}

/***
 * Clase logging es una de las dos funciones del facade a las cuales el usuario puede acceder, esta se utiliza
 * para iniciar sesión dentro del registro de usuarios, también llama a otras funciones que le informan si el
 * usuario se encuentra en el registro o si la contraseña es correcta.
 * @param userName nombre del usuario a iniciar sesión.
 * @param password contraseña del usuario.
 */
void LoggingManager::logging(string userName, string password) {
    cout<<"Iniciando sesion con: "<<userName<<endl;
    if (checkUser(userName)){
        if (checkPassword(searchUserPass(userName),password)){
            cout<<"Se ha iniciado correctamente, usuario: "<<userName<<endl;
        } else{
            cout<<"Contrasena incorrecta, usuario:"<<userName<<endl;
        }

    } else{
        cout<<"Usuario "<<userName<<" no existe"<<endl;
    }
    cout<<endl;

}

/***
 * Es una función parte del facade, a la cual el usuario puede tener acceso, esta se utiliza para registrase,
 * toma el nombre de usuario y la contraseña para agregarlas al registro princial y a una copia de seguridad.
 * @param userName nombre del usuario a registrar.
 * @param password contraseña del usuario.
 */
void LoggingManager::signIn(string userName, string password) {
    addToRegister(userName,password);
    addToBackup(userName,password);
    cout<<endl;
}

/***
 * Añade al registro principal a usuario, este registro se comporta como una lista simple de nodos de tipo Register.
 * @param userName nombre de usuario a agregar al registro principal.
 * @param password contraseña del usuario a agregar al registro principal.
 */
void LoggingManager::addToRegister(string userName, string password) {
    cout<<"Agregando usuario:"<<userName<<endl;
    if (counter == 0){
        userRegister = new Register(userName,encryptPassword(password,true));
        counter++;
    }else{
        Register* tempRegister = userRegister;
        userRegister = new Register(userName,encryptPassword(password,true));
        userRegister->nextRegister = tempRegister;
        counter++;
    }
}

/***
 * Funciona de manera similar a la función addToRegister, pero los agrega a la copia de seguridad.
 * @param userName nombre del usuario a agregar a la copìa de seguridad.
 * @param password contraseña del usuario a agregar a la copia de seguridad.
 */
void LoggingManager::addToBackup(string userName, string password) {
    cout<<"Agregando a la copia de seguridad a "<<userName<<endl;;
    if (counter == 0){
        backupRegister = new Register(userName,encryptPassword(password, false));
    }else{
        Register* tempRegister = backupRegister;
        backupRegister = new Register(userName,encryptPassword(password, false));
        backupRegister->nextRegister = tempRegister;
    }
}

/***
 * Se encarga de encriptar las contraseñas del los usuarios, lo que hace es tomar el valor ascii de la letra,
 * sumarle 5 y luego retornar el caracter al que le pertenece ese valor
 * @param password contraseña a encriptar
 * @param printInfo un booleano para saber si se quiere o no imprimir una línea sobre el estado de la encriptación
 * @return la contraseña ya encriptada
 */
string LoggingManager::encryptPassword(string password,bool printInfo) {
    string encryptedPassword = password;
    char temp[1];
    for (int i = 0; i<password.length();i++){
        temp[0] = cryptAux(char(password[i])+5);
        encryptedPassword[i] = temp[0];
    }
    if (printInfo) cout<<"Encriptado contrasena "<<"{"<<password<<"->>>"<<encryptedPassword<<"}"<<endl;
    return encryptedPassword;
}

/***
 * Función auxiliar para encriptar o desencriptar, con esta se retorna una letra/símbolo encriptado
 * @param num valor del caracter ascii que se desea obtener
 * @return retorna un char con el caracter ascci correspondiente a num
 */
char LoggingManager::cryptAux(int num) {
    char temp[1];
    sprintf(temp,"%c",num);
    return temp[0];
}

/***
 * Realiza una función contraria a lo que hace la de encriptar, toma la contraseña que se le da por entrada y la desencripta,
 * restando 5 al valor ascii de los caracteres que lo componen.
 * @param password contraseña encriptada
 * @return retorna la contraseña desencriptada
 */
string LoggingManager::decryptPassword(string password) {
    string decryptedPassword = password;
    char temp[1];
    for (int i = 0; i<password.length();i++){
        temp[0] = cryptAux(char(password[i])-5);
        decryptedPassword[i] = temp[0];
    }

    cout<<"Desencriptando contrasena"<<"{"<<password<<"->>>"<<decryptedPassword<<"}"<<endl;
    return decryptedPassword;
}

/***
 * Busca la contraseña de un determinado usuario en el resgistro.
 * @param userName usuario al que se le desea encontrar la contraseña
 * @return retorna la contraseña del usuario.
 */
string LoggingManager::searchUserPass(string userName) {
    cout<<"Buscando usuario "<<userName<<endl;
    Register* temp = userRegister;
    for (int i = 0;i<=counter;i++){
        if (userName == temp->getUsername()){
            return temp->getPassword();
        } else{
            temp = temp->nextRegister;
        }
    }
}

/***
 * Revisa que la contraseña del inicio de sesión sea la misma del resultado de la desencriptación de la
 * contraseña del registro de este usuario.
 * @param password contraseña encriptada que está en el registro
 * @param loggingPassword contraseña del inicio de sesión
 * @return retorna true si la contraseña es la misma, en caso contrario, false.
 */
bool LoggingManager::checkPassword(string password, string loggingPassword) {
    cout<<"Verificando contrasena...."<<endl;
    if (decryptPassword(password)==loggingPassword){
        return true;
    }else{
        return false;
    }

}
/***
 * Revisa que el usuario exista en el registro.
 * @param userName nombre de usuario a revisar dentro del registro.
 * @return un true si el usuario se encuentra en el resgistro, false, en caso contrario.
 */
bool LoggingManager::checkUser(string userName) {
    Register* temp = userRegister;
    for (int i = 0;i<counter;i++){
        if (userName == temp->getUsername()){
            return true;
        } else{
            temp = temp->nextRegister;
        }
    }
    return false;
}
