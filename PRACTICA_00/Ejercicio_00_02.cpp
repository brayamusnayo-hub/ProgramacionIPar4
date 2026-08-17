// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingeniería de Sistemas
// Fecha de Creación: 10/08/2026

#include <iostream>
using namespace std;
int main()
{
    int edad=0;
    char sexo[10];
    float altura=0;
    cout<<"Ingrese su edad: "<<endl; cin>>edad;
    cout<<"Ingrese su sexo: "<<endl; cin>>sexo;
    cout<<"Ingrese su altura en metros por favor: "<<endl; cin>>altura;
    if(edad>0 && altura>0)
    {
        cout<<"------------------------------------"<<endl;
        cout<<"Su edad es: "<<edad<<"\n"<<"Su sexo es: "<<sexo<<"\n";
        cout<<"Su altura es: "<<altura<<endl;
    }
    else
        cout<<"Error"<<endl;
    return 0;
    
}
