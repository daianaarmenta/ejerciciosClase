#include <iostream>
#include <string>
#include "ave.h"
using std::cout;
using std::endl;

Ave::Ave(){}
Ave::Ave(std::string _name){
    nombre = _name;
}
void Ave::volar(){
    cout << "Soy una ave llamada " << nombre << " y vuelo" << endl;
}
