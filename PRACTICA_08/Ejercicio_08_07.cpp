// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 07/10/2026

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> Extractor(string oracion);
void mostrar(vector<string> lista);

int main()
{
    string oracion;
    cout << "Ingrese su oracion: " << endl; 
    getline(cin, oracion);

    cout << "Las palabras con # son: " << endl;
    mostrar(Extractor(oracion));

    return 0;
}

vector<string> Extractor(string oracion)
{
    vector<string> ListaAsterisco;
    string palabraTemp = "";

    oracion += " ";

    for (int i = 0; i < oracion.size(); i++)
    {
        char caracter = oracion[i];

        if (caracter != ' ')
        {
            palabraTemp += caracter;
        }
        else
        {
            if (palabraTemp.size() > 0 && palabraTemp[0] == '#')
            {
                ListaAsterisco.push_back(palabraTemp);
            }
            
            palabraTemp = "";
        }
    }

    return ListaAsterisco;
}

void mostrar(vector<string> lista)
{
    for (int i = 0; i < lista.size(); i++)
    {
        cout << lista[i] << endl;
    }
}