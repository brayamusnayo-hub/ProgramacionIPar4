// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 28/08/2026

#include <iostream>
using namespace std;
int area(float base, float altura);
int main()
{
    int base=0,altura=0;
    cout<<"Ingrese la base: : "; cin>>base;
    cout<<"Ingrese la altura: "; cin>>altura;
    if(base>0 && altura>0)
    {
        cout<<"El area es: "<<area(base,altura);
    }
    else
        cout<<"Ingrese valores validos";
}

int area(float base,float altura)
{
    int resultadoArea=0;
    resultadoArea=(base * altura) / 2;
    return resultadoArea;
}