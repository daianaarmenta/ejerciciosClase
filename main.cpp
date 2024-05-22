#include <iostream>
#include "ave.h"
#include "aguila.h"
#include "pinguino.h"
using namespace std;

int main(){
    Ave ave1("Piolin");
    ave1.volar();
    Aguila aguila1("Emilio");
    aguila1.volar();
    Pinguino pingu("Pingu");
    pingu.volar();

    return 0;
}