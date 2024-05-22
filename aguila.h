#ifndef AGUILA_H
#define AGUILA_H
#include <iostream>
#include "ave.h"
#include <string>

class Aguila:Ave{
    public:
    Aguila();
    Aguila(std::string);
    void volar();
};

#endif