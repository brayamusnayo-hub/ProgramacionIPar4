// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 28/08/2026

#include <iostream>
using namespace std;
int mayor(int num1, int num2, int num3);
int main()
{
    int num1=0,num2=0,num3=0;
    cout<<"Ingrese su primer numero: "; cin>>num1;
    cout<<"Ingrese su segundo numero: "; cin>>num2;
    cout<<"Ingrese su tercer numero: "; cin>>num3;
    if (num1>0 && num2>0 && num3>0)
    {
        cout<<"El mayor es: "<<mayor(num1,num2,num3);
    }
    else
        cout<<"Ingrese numeros validos";
    
}

int mayor(int num1, int num2, int num3)
{
    int mayor=0;
    if (num1>num2 && num1>num3)
        return mayor=num1;
    else if(num2>num1 && num2>num3)
        return mayor=num2;
    else
        return mayor=num3;
}