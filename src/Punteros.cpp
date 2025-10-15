#include <iostream>
#include <string>
#include <list>
using namespace std;

class Humano{
private:
    string nombre;
    int edad;
public:
    string LeerNombre();
    int LeerEdad();
};

class Alumno : public Humano{
private:
    int registro;
public:
    int LeerRegistro();
};

class Empleado : public Humano{
private:
    int noEmpleado;
public:
    long LeernoEmpleado();
};

int main(int argc, char const *argv[])
{
    list<Humano*> listahumanos;

    Humano* humano = NULL;
    Alumno* alumno = new Alumno();
    Empleado* empleado = new Empleado();

    humano = alumno;
    humano->LeerEdad();

    humano = empleado;
    humano->LeerEdad();

    listahumanos.emplace_back(new Alumno());

    for (auto &&humano : listahumanos)
    {
        cout << humano->LeerNombre() << endl;
    }
    
    return 0;
}