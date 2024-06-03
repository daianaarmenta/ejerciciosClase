#ifndef MIEXCEPCION_H
#define MIEXCEPCION_H
#include <iostream>
#include <exception>
#include <string>

class MiExcepcion : public std::exception
{
    private:
        std::string mensaje;
    public:
        MiExcepcion(std::string);
        void imprimir();

};

#endif