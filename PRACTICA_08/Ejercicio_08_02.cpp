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
string VerificaContra(string contrasenia);
int main()
{
    string contrasenia;
    cout<<"Ingrese su contraseña, que sea FUERTE: "<<endl; cin>>contrasenia;
    cout<<"Su contrasenia es: "<<VerificaContra(contrasenia);
    
    return 0;
}

string VerificaContra(string contrasenia)
{
    int mayus=0,minus=0,num=0,especial=0;
    if(contrasenia.size()>=8)
    {
        for (int i=0; i<=contrasenia.size();i++)
        {
            char letra=contrasenia[i];
            if (letra<='z' && letra>='a')
            {
                minus++;
                
            }
            
            if (letra<='Z' && letra>='A')
            {
                mayus++;
                    
            }
            
            if (letra<='9' && letra>='0')
            {
                num++;
                    
            }
            
            if(letra<=46 && letra>33)
            {
                especial++;
            }
            
        }
    }
    else
        return "Por favor, 8 CARACTERES";
    
    if (mayus>0 && minus>0 && num>0 && especial>0)
    {
        return " SEGURA";
    }
    else
        return " NO SEGURA";
}

