// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 28/08/2026

#include <iostream>
using namespace std;
float volumen(float radio,float altura);
int main()
{
    int radio=0,altura=0;
    cout<<"Ingrese su radio: "<<endl; cin>>radio;
    cout<<"Ingrese su altura: "<<endl; cin>>altura;
    if (altura>0 && radio>0)
    {
        cout<<"El volumen es: "<<volumen(radio,altura);
    }
    
}

float volumen(float radio,float altura)
{
    int volumenResultado=0,π=3.1416 ;
    volumenResultado= (π * radio * radio * altura);
    return volumenResultado;

}