// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingeniería de Sistemas
// Fecha de Creación: 10/08/2026

#include <iostream>
using namespace std;
int main()
{
    float numero_1=0,numero_2=0, resultado=0;
    
    cout<<"Ingrese su primer numero: "<<endl; cin>>numero_1;
    cout<<"Ingrese su segundo numero: "<<endl; cin>>numero_2;
    
    resultado=(numero_1/numero_2)+1;
    
    cout.precision(2);
    cout<<"Su resultado de (a+b)+1 es: "<<resultado<<endl;
    
    return 0;
    
}
