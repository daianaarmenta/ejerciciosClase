#include <iostream>
#include "pinguino.h"
using namespace std;

Pinguino::Pinguino():Ave(){}
Pinguino::Pinguino(string _nombre):Ave(_nombre){}
void Pinguino::volar(){
    cout << "Soy un pinguino, me llamo " << nombre << " y no vuelo" << endl;
}