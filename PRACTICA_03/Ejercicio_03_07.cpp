// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 21/08/2026

#include <iostream>
using namespace std;
int main()
{
    int numero=0,suma_divisores=0;

    cout<<"Ingrese su numero para ver si es perfecto o no: "; cin>>numero;
    if(numero>0)
    {
        for (int i=1;i<numero;i++)
        {
            if(numero%i==0)
            {
                suma_divisores+=i;
            }

        }
        if (suma_divisores==numero)
        {
            cout<<"Es un numero perfecto"<<endl;
        }
        else
            cout<<"No es un numero perfecto"<<endl;
    }
    else
        cout<<"Ingrese un numero positivo"<<endl;

    return 0;
}
