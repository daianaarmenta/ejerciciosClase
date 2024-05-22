#include <iostream>
#include "pinguino.h"
#include <string>
using std::cout;
using std::endl;

Pinguino::Pinguino():Ave(){}
Pinguino::Pinguino(std::string _nombre):Ave(_nombre){}
void Pinguino::volar(){
    cout << "Soy un pinguino, me llamo " << nombre << " y no vuelo" << endl;
}