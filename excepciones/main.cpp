#include <iostream>
#include "impresora.h"
#include "miexcepcion.h"
#include <string>

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
    catch(MiExcepcion &excep)
    {
        cout << "Atrapé una MiExcepcion" << endl;
        excep.imprimir();
    }
    catch(...)
    {
        cout << "atrapé la excepción en el catch todo" << endl;

    }


    return 0;
}