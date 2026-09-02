// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 28/08/2026

#include <iostream>
using namespace std;
float conversion(float tipoCambio, int bolivianos);
int main()
{
    float tipoCambio;
    int bolivianos=0;
    cout<<"Ingrese el tipo de cambio "<<endl; cin>>tipoCambio;
    cout<<"Ingrese la cantidad en bolivianos: "<<endl; cin>>bolivianos;
    if (tipoCambio>0 && bolivianos>0)
    {
        cout<<"La cantidad es: "<<conversion(tipoCambio, bolivianos)<<" bolivianos";
    }
    else
        cout<<"Ingrese valores validos";
}

float conversion(float tipoCambio, int bolivianos)
{
    int resultado=0;
    resultado=tipoCambio*bolivianos;
    return resultado;
}