#ifndef AVE_H
#define AVE_H
#include <iostream>
using namespace std;

class Ave{
    protected: //permite que esta clase y las demás accedan a este atributo
    string nombre;
    public:
    Ave();
    Ave(string);
    void volar();
};

#endif