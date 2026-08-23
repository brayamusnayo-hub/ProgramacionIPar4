// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 21/08/2026

#include <iostream>
using namespace std;
int main()
{
    int numero=0,contador=1;
    
    cout<<"Ingrese el numero del que quiere ver su tabla de multiplicacion: "; cin>>numero;
    cout<<"La tabla del "<<numero<<" es: "<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<numero<<" x "<<contador<<" = "<<numero*contador<<endl;
        contador++;
    }
    
    return 0;
}