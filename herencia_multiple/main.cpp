#include <iostream>
using std::cout;
using std::endl;

class Padre1
{
    Padre1()
    {
        cout << "Dentro de constructor Padre1" << endl;
    }
    ~Padre1()
    {
        cout << "Dentro de destructor Padre1" << endl;
    }
    void imprimir()
    {
        cout << "Dentro de imprimir Padre1" << endl;
    }
};
class Padre2
{
    Padre2()
    {
        cout << "Dentro de constructor Padre2" << endl;
    }
    ~Padre1()
    {
        cout << "Dentro de destructor Padre2" << endl;
    }
    void imprimir()
    {
        cout << "Dentro de imprimir Padre2" << endl;
    }
};
class Hijo:public Padre1 
{
  
};

class A
{
    void imprimir()
    {
        cout << "Dentro de imprimir en clase A" << endl;
    }
};
class B : public A{}:
class C : public A
{
    void imprimir()
    {
        cout << "En imprimir de C" << endl;
    }
};
class D :  public B, public C {}

int main()
{
    D obj;
    obj.imprimir();
    return 0;
}
