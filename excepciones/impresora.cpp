#include <iostream>
#include "impresora.h"

using std::string;
using std::cout;
using std::endl;

Impresora::Impresora(string _nombre,int _numHojas)
{
    nombre = _nombre;
    numHojas = _numHojas;
}

void Impresora::imprimir(string texto)
{
    int hojasUsadas = texto.size()/2;
    if(hojasUsadas > numHojas)
    {
        string mensaje = "El numero de hojas usadas excede el numero de hojas disponibles ";
    }
    cout << "Imprimiendo... " << endl;
    cout << texto << endl;
    cout << "Utilizamos " << hojasUsadas << endl;
    numHojas -= hojasUsadas;
    cout << "Me quedan " << hojasUsadas << endl;
}

void Impresora::recargar(int num)
{
    cout << "Recargando..." << num << endl;
}