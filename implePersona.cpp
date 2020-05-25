#include "Persona.h"
#include <iostream>
#include <string>

using namespace std;
Persona::Persona(){
        nombre=' ';
        apellido=' ';
        edad=0;     
}
Persona::Persona(string nombre , string apellido ,int edad){
    this -> nombre=nombre;
    this -> apellido=apellido;
    this -> edad=edad;
}
string Persona::getNombre(){
    return nombre;    
}
string Persona::getApellido() {
    return apellido;
}
int  Persona::getEdad() {
    return edad;
}
void Persona::setNombre(const string nombre){
    this ->nombre = nombre ;
    return ;
}
void Persona::setApellido(const string apellido){
    this ->apellido = apellido ;
    return ;
}
void Persona::setEdad(const int edad){
    this ->edad = edad ;
    return ;
}

