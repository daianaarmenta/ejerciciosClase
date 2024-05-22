#ifndef AVE_H
#define AVE_H
#include <iostream>
#include <string>

class Ave{
    protected: //permite que esta clase y las demás accedan a este atributo
    std::string nombre;
    public:
    Ave();
    Ave(std::string);
    void volar();
};

#endif