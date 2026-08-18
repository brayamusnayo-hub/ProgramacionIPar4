// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingeniería de Sistemas
// Fecha de Creación: 12/08/2026

#include <iostream>

using namespace std;

int main() 
{
    int nota=0;
    cout<<"Ingrese la nota a registrar"<<endl; cin>>nota;
    
    while(nota<0 || nota>100)
    {
        cout<<"Ingrese una nota valida, intente nuevamente: "; cin>>nota;
    }
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"La nota se registro correctamente, su nota registrada es: "<<nota<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    return 0;
}