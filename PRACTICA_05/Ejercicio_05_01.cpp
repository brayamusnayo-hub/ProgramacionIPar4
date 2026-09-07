// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 03/09/2026
// Número de ejercicio: 1

#include <iostream>
using namespace std;
void IntercambiarValores(int num1, int num2);
int main()
{
    int num1,num2;
    cout<<"Ingrese su numero 1: "<<endl; cin>>num1;
    cout<<"Ingrese su numero 2: "<<endl; cin>>num2;
    cout << "--- Antes de llamar a la funcion ---" << endl;
    cout<<"numero 1 es: "<<num1<<endl;
    cout<<"numero 2 es: "<<num2<<endl;
    if (num1>0 && num2>0)
    {
        cout << "\n--- Despues de llamar a la funcion ---" << endl;
        cout<<"numero 1 ahora es: "<<num2<<endl;
        cout<<"numero 2 ahora es: "<<num1<<endl;
    }
    else
        cout<<"Error"<<endl;
    
    return 0;
}

void IntercambiarValores(int &num1, int &num2)
{
    int temporal=num1;
    num1=num2;
    num2=temporal;
}
