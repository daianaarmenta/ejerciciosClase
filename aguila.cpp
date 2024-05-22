#include <iostream>
#include "aguila.h"
#include <string>
using std::cout;
using std::endl;

Aguila::Aguila() : Ave(){}
Aguila::Aguila(std::string _nombre) : Ave(_nombre){}
void Aguila::volar(){
    cout << "soy una ave llamada " << nombre << " y vuelo, además soy la más rapida" << endl;
}