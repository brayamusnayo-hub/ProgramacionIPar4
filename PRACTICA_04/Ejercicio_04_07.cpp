// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 28/08/2026

#include <iostream>
using namespace std;
float mru(float velocidad, float tiempo);
int main()
{
    float velocidad, tiempo;
    cout<<"Ingrese la velocidad: "; cin>>velocidad;
    cout<<"Ingrese la tiempo: "; cin>>tiempo;
    if(velocidad>0 && tiempo>0)
        cout<<"La distancia recorrida es: "<<mru(velocidad, tiempo);
    else
        cout<<"Error";
}

float mru(float velocidad, float tiempo)
{      
    int distancia=0;
    distancia=velocidad *tiempo;
    
    return distancia;

}