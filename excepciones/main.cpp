#include <iostream>
#include "impresora.h"

using std::cout;
using std::endl;

int main()
{
    Impresora impresora1("Hp",100);
    try
    {
        impresora1.imprimir("hola");
        impresora1.imprimir("hola parte 2");
    }
    catch(std::string &mensaje)
    {
        cout << "Atrapada una excepción string: " << mensaje << endl;
    } 
    catch(const char *mensaje)
    {
        cout << "atrapado como cadena de caracteres: " << mensaje << endl;
    }
    catch(...)
    {
        cout << "atrapé la excepción en el catch todo" << endl;

    }
    //como cachar un arreglo de caracteres

    return 0;
}