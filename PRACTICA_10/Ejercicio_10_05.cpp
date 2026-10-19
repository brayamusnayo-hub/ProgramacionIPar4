// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 14/10/2026
// Número de ejercicio: 5

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;
string ordenamiento(string palabra);

int main()
{
    string palabra="";
    cout<<"INGRESE SU PALABRA: "; 
    getline(cin, palabra);

    cout<<"------------PALABRA ORDENADA------------"<<endl;
    cout<<ordenamiento(palabra)<<endl;
    return 0;  
}

string ordenamiento(string palabra)
{
    for(int i = 0; i < palabra.size() - 1; i++)
    {
        for(int j = i + 1; j < palabra.size(); j++)
        {
            if (palabra[i] > palabra[j])
            {
                char aux = palabra[i];
                palabra[i] = palabra[j];
                palabra[j] = aux;
            }
        }
    }
    return palabra;
}


