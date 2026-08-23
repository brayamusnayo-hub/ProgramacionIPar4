// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 21/08/2026

#include <iostream>
using namespace std;
int main()
{
    int numero=0,suma=0;
    cout<<"Ingrese hasta que numero se hará la suma progresiva: "; cin>>numero;
    for (int i=1;i<=numero;i++)
    {
        suma+=i;
    }
    cout<<"La suma es: "<<suma<<endl;
    return 0;
}