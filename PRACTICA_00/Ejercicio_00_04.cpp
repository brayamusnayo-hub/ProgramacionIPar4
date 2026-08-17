// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingeniería de Sistemas
// Fecha de Creación: 18/08/2026

#include <iostream>
using namespace std;
int main()
{
    float numero_1=0,numero_2=0,numero_3=0,numero_4=0,numero_5=0,numero_6=0,resultado=0;
    cout<<"Se hará la operación de: (a+(b/c))/(d+(e/f)) "<<endl;
    cout<<"Ingrese el valor de a: "; cin>>numero_1;
    cout<<"Ingrese el valor de b: "; cin>>numero_2;
    cout<<"Ingrese el valor de c: "; cin>>numero_3;
    cout<<"Ingrese el valor de d: "; cin>>numero_4;
    cout<<"Ingrese el valor de e: "; cin>>numero_5;
    cout<<"Ingrese el valor de f: "; cin>>numero_6;
    resultado= (numero_1+(numero_2/numero_3))/(numero_4+(numero_5/numero_6));
    cout.precision(2);
     
    cout<<"Su resultado es: "<<resultado<<endl;
    return 0;
}