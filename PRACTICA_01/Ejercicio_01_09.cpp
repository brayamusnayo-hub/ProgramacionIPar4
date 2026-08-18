// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingeniería de Sistemas
// Fecha de Creación: 12/08/2026

#include <iostream>
#include <string>

using namespace std;

int main() {
    int numero=0,contador=0,digito=0,variable_temporal=0;
    cout<<"Ingrese su numero: "; cin>>numero;
    variable_temporal+=numero;
    while(variable_temporal!=0)
    {
        digito=variable_temporal%10;
        contador++;
        cout<<"Cuadricula de: "<<digito<<endl;
        cout<<endl;
        for(int i=1;i<=digito;i++)
        {
            for (int j=1;j<=digito;j++)
                {
                    if(j<=digito)
                    {
                        cout<<digito;
                    }
                        
                }
                cout<<"\n"<<endl;
        }
        cout<<endl;
        variable_temporal/=10;
    }
    return 0;
}