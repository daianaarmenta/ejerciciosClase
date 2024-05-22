#ifndef PINGUINO_H
#define PINGUINO_H
#include "ave.h"
#include <iostream>
using namespace std;

class Pinguino:Ave{
    public:
    Pinguino();
    Pinguino(string);
    void volar();
};

#endif