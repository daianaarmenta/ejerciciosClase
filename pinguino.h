#ifndef PINGUINO_H
#define PINGUINO_H
#include "ave.h"
#include <iostream>
#include <string>

class Pinguino:Ave{
    public:
    Pinguino();
    Pinguino(std::string);
    void volar();
};

#endif