// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 17/08/2026

#include <iostream>
using namespace std;
int main()
{
    int cuadrado,suma=0;
     
    for (int i=1;i<=10;i++)
    {
        cuadrado=i*i;
        suma+=cuadrado;

    }
    cout<<"la suma es: "<<suma<<endl;
    
    return 0;
}