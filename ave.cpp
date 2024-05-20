#include <iostream>
#include <string>
#include "ave.h"
using namespace std;

Ave::Ave(){}
Ave::Ave(string _name){
    nombre = _name;
}
void Ave::volar(){
    cout << "Soy una ave llamada " << nombre << " y vuelo" << endl;
}
