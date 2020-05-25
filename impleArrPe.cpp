#include <iostream>
#include <string>
#include "ArregloDePersonas.h"
#include "Persona.h"
using namespace std;

ArregloDePersonas::ArregloDePersonas(const Persona personas[],const int tam){
    this ->size=tam; 
    ptrpers= new Persona[tam];//tam
    //necesario??
    for(int i=0;i<tam;++i)//tam
        ptrpers[i]=personas[i];
}
ArregloDePersonas::ArregloDePersonas(const ArregloDePersonas &o){
       
    this ->size=o.size;
    ptrpers=new Persona [size];
    for(int i=0;i<size;i++)
        ptrpers[i]=o.ptrpers[i];
}
ArregloDePersonas::~ArregloDePersonas(){
        delete[] ptrpers;
}

void ArregloDePersonas::redimensionar(int n){
    Persona *ptr=new Persona[n];
    int mintam=(n>size?size:n);
    for(int i=0;i<mintam;i++)
        ptr[i]=ptrpers[i];
    delete[] ptrpers;
    size=n;
    ptrpers=ptr;
}
void ArregloDePersonas::push_back(const Persona &p){
    redimensionar(size+1);
    ptrpers[size-1]=p;
} 
void ArregloDePersonas::insert(const int posicion, const Persona &p){
    redimensionar(size+1);
    for(int i=size;i>posicion;i--)
        ptrpers[i]=ptrpers[i-1];
    ptrpers[posicion]=p;
}
void ArregloDePersonas::remove(const int pos){
    if(pos>=0 && pos<size){
        for(int i=pos;i<size-2;i++)
            ptrpers[i]=ptrpers[i+1];
        redimensionar(size-1);
    }
}
const int ArregloDePersonas::getSize(){
    return size;
}
void ArregloDePersonas::clear(){
    redimensionar(0);
}
