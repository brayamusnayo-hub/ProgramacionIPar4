// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 28/08/2026

#include <iostream>
using namespace std;
int verificacion(int numero, bool par);
int main()
{
    int numero;
    bool par;
    cout<<"Ingrese su numero: "; cin>>numero;
    if(numero>0)
    {
        if(verificacion(numero,par)==true)
            cout<<"Es par";
        else
            cout<<"Es impar";
    }
    else
        cout<<"Ingrese valores positivos mayores a 0";
}

int verificacion(int numero, bool par)
{       
    if(numero%2==0)
    {
        par=true;
    }
    else
        par=false;
    
    return par;
}