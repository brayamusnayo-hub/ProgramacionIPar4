// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingeniería de Sistemas
// Fecha de Creación: 10/08/2026

#include <iostream>
using namespace std;
int main()
{
    int numero_1,numero_2,suma=0,resta=0,multiplicacion=0,division=0; 
    
    cout<<"Ingrese su primer numero: "<<endl;
    cin>>numero_1;
    cout<<"Ingrese su segundo numero: "<<endl;
    cin>>numero_2;
    
    suma=numero_1+numero_2;
    resta=numero_1-numero_2;
    multiplicacion=numero_1*numero_2;
    division=numero_1/numero_2;
    
    cout<<"La suma es: "<<suma<<"\n"<<"La resta es: "<<resta<<endl;
    cout<<"La multiplicacion es: "<<multiplicacion<<"\n"<<"La  division es: "<<division<<endl;
    return 0;
}
