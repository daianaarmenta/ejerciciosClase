#ifndef IMPRESORA_H
#define IMPRESORA_H
#include <iostream>
#include <string>

using std::string;

class Impresora
{
    private:
        int numHojas;
        string nombre;
    public:
        Impresora(string,int);
        void imprimir(string);
        void recargar(int);        
};

#endif