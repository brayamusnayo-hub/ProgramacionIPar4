// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 30/09/2026

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
string VerificaTarjeta(string num);
int main()
{
    string num;
    cout<<"Ingrese su tarjeta de credito: "<<endl; cin>>num;
    cout<<"Su numero de tarjeta de credito "<<VerificaTarjeta(num)<<endl;
    
    
    return 0;
}

string VerificaTarjeta(string num)
{
    bool operar=false;
    int suma=0,digito;
    if(num.size()>=13)
    {
        for (int i=num.size()-1;i>=0;i--)
        {
            digito=num[i]-'0'; //Esto vuelve de char a numero
            if(operar)
            {
                digito=digito*2;
                if (digito>9)
                    digito=digito-9;
                suma+=digito;
            }
            else
            {
                suma+=digito;
            }
            operar=!operar;
            
        }
    }
    if (suma%10==0)
        return "es válido";
    else
        return "no es válido";
}

