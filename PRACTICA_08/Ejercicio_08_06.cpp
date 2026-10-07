// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 07/10/2026

#include <iostream>
#include <string>

using namespace std;
string EliminarEsp(string oracion);
int main()
{
    string oracion;
    cout<<"Ingrese su oracion: "<<endl; getline(cin,oracion);
    cout<<"Su nueva oracion es: "<<EliminarEsp(oracion);


    return 0;
}

string EliminarEsp(string oracion)
{
    string sinEspacio="";
    for (int i=0;i<oracion.size();i++)
    {
        char caracter=oracion[i];
        if(caracter!=' ')
        {
            sinEspacio+=caracter;
        }
    }
    return sinEspacio;
}
