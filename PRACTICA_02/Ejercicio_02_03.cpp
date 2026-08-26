// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingenieria de Sistemas
// Fecha de Creación: 17/08/2026

#include <iostream>
using namespace std;
int main()
{
	int numeros=1, max=30, min=20,suma=0;
    while((numeros>30||numeros<20)||numeros==0)
    {   
        suma+=numeros;
        cout<<"Ingrese su numero entre el rango de 20-30: "<<endl;
        cin>>numeros;
    }
    suma+=numeros;
    cout<<"La suma es: "<<suma-1;


	    return 0;
}