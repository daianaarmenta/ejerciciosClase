#include <iostream>
#include "aguila.h"
using namespace std;

Aguila::Aguila() : Ave(){}
Aguila::Aguila(string _nombre) : Ave(_nombre){}
void Aguila::volar(){
    cout << "soy una ave llamada " << nombre << " y vuelo, además soy la más rapida" << endl;
}