// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 17/08/2026
#include <iostream>
using namespace std;
int main()
{
    int numero=0,factorial=1;
    cout<<"Ingrese su numero: "; cin>>numero;
    for(int i=1;i<=numero;i++)
        {
            factorial*=i;   
        }
        
        cout<<"El factorial es: "<<factorial;
    return 0;
}