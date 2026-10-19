// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 14/10/2026
// Número de ejercicio: 7


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

int Aleatorio();
void ArmarMatrix(vector<string>& ListaTitulos, vector<string> Estudiantes, int matrixNotas[100][100], vector<float>& Notas);
void Ordenar(vector<string>& Estudiantes, int matrixNotas[100][100], vector<float>& Notas);
void MostrarTodo(vector<string> ListaTitulos, vector<string> Estudiantes, int matrixNotas[100][100], vector<float> Notas);

int main()
{
    srand(time(NULL));
    vector<string> ListaTitulos;
    vector<string> Estudiantes = {"Luisa", "Alizon", "Dania", "Jorge", "Matias"};
    int matrixNotas[100][100];
    vector<float> Notas;
    
    ArmarMatrix(ListaTitulos, Estudiantes, matrixNotas, Notas);
    
    cout << "=== BOLETIN ORIGINAL ===" << endl;
    MostrarTodo(ListaTitulos, Estudiantes, matrixNotas, Notas);
    
    Ordenar(Estudiantes, matrixNotas, Notas);
    
    cout << "\n=== BOLETIN ORDENADO ===" << endl;
    MostrarTodo(ListaTitulos, Estudiantes, matrixNotas, Notas);

    return 0;
}

int Aleatorio()
{
    int min = 0, max = 100;
    return min + rand() % (max - min + 1);
}

void ArmarMatrix(vector<string>& ListaTitulos, vector<string> Estudiantes, int matrixNotas[100][100], vector<float>& Notas)
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 0) { ListaTitulos.push_back("NOMBRES"); }  
        else if (i == 4) { ListaTitulos.push_back("PROMEDIO"); }
        else { ListaTitulos.push_back("NOTA " + to_string(i)); }
    }

    for (int i = 0; i < Estudiantes.size(); i++)
    {
        float suma = 0;
        for (int j = 0; j < 3; j++)
        {
            matrixNotas[i][j] = Aleatorio();
            suma += matrixNotas[i][j];
        }
        Notas.push_back(suma / 3.0);
    }
}

void Ordenar(vector<string>& Estudiantes, int matrixNotas[100][100], vector<float>& Notas)
{
    for (int i = 0; i < Estudiantes.size() - 1; i++)
    {
        for (int j = i + 1; j < Estudiantes.size(); j++)
        {
            if (Estudiantes[i] > Estudiantes[j])
            {
                string auxNombre = Estudiantes[i];
                Estudiantes[i] = Estudiantes[j];
                Estudiantes[j] = auxNombre;

                float auxPromedio = Notas[i];
                Notas[i] = Notas[j];
                Notas[j] = auxPromedio;

                for (int k = 0; k < 3; k++)
                {
                    int auxNota = matrixNotas[i][k];
                    matrixNotas[i][k] = matrixNotas[j][k];
                    matrixNotas[j][k] = auxNota;
                }
            }
        }
    }
}

void MostrarTodo(vector<string> ListaTitulos, vector<string> Estudiantes, int matrixNotas[100][100], vector<float> Notas)
{
    for (int i = 0; i < ListaTitulos.size(); i++)
    {
        cout << ListaTitulos[i] << "\t\t";
    }
    cout << "\n----------------------------------------------------------------------------\n";

    for (int i = 0; i < Estudiantes.size(); i++)
    {
        cout << Estudiantes[i] << "\t\t";
        for (int j = 0; j < 3; j++)
        {
            cout << matrixNotas[i][j] << "\t\t";
        }
        cout << Notas[i] << endl;
    }
}
  
