#include <iostream>
#include "miexcepcion.h"
#include <string>

using std::string;

MiExcepcion::MiExcepcion(string _mensaje)
{
    mensaje = _mensaje;
}

void MiExcepcion::imprimir()
{
    std::cout << mensaje << std::endl;
}