// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingeniería de Sistemas
// Fecha de Creación: 12/08/2026

#include <iostream>
using namespace std;
int main()
{
    int numero=0;
    cout<<"Ingrese su numero para verificar si es par o impar: "; cin>>numero;
    if(numero>0)
    {
        if (numero%2==0)
        {
            cout<<"Es par"<<endl;
        }
        else
            cout<<"Es impar"<<endl;
    }
    else
    cout<<"Ingrese numeros positivos"<<endl;;
    
    return 0;
}