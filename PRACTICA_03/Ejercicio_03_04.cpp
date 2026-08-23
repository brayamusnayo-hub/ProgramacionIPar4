// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 21/08/2026

#include <iostream>
using namespace std;
int main()
{
    int numero=0,suma=0,factorial=1;
    cout<<"Ingrese hasta que numero se hará la suma progresiva con factoriales: "; cin>>numero;
    for (int i=1;i<=numero;i++)
    {
        for(int j=i;j>=1;j--)
        {
            factorial*=j;
        }
        suma+=factorial;
        factorial=1;
    }
    cout<<"La suma es: "<<suma<<endl;
    return 0;
}