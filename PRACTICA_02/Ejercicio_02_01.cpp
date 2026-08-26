// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 17/08/2026
#include <iostream>
using namespace std;
int main()
{
    int numero;
    
    cout<<"Ingrese su numero para ver la tabla de multiplicacion"<<endl; cin>>numero;
    if(numero>0)
    {
    for (int i=1;i<=10;i++)
    {
        cout<<numero<<" x "<<i<<" = "<<numero*i<<endl;
    }
    }
    else
        cout<<"Error, ingrese un numero positivo"<<endl;
    return 0;
}