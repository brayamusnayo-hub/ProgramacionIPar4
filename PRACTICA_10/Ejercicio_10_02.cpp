// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 14/10/2026
// Número de ejercicio: 2

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

int aleatorio();
vector<int> llenarVectPunt(vector<int>& puntuaciones, int n);
void mostrarVec(vector<int>& puntuaciones, int n);
void ordeBurbuja(vector<int>& puntuaciones);
void mostrarBurbuja(vector<int>& puntuaciones);

int main()
{
    srand(time(NULL));
    int n;
    vector<int> puntuaciones;
    cout << "Ingrese cantidad de jugadores: " << endl;
    cin >> n;
    llenarVectPunt(puntuaciones, n);
    mostrarVec(puntuaciones, n);
    
    ordeBurbuja(puntuaciones);
    mostrarBurbuja(puntuaciones);
    
    return 0;
}

int aleatorio()
{
    int max = 100, min = 1;
    return min + rand() % (max - min + 1);
}

vector<int> llenarVectPunt(vector<int>& puntuaciones, int n)
{
    for (int i = 0; i < n; i++)
    {
        puntuaciones.push_back(aleatorio());
    }
    return puntuaciones;
}

void mostrarVec(vector<int>& puntuaciones, int n)
{
    for (int i = 0; i < puntuaciones.size(); i++)
    {
        cout << puntuaciones[i] << "\t";
    }
    cout << endl;
}

void ordeBurbuja(vector<int>& puntuaciones)
{
    int n = puntuaciones.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (puntuaciones[j] > puntuaciones[j + 1])
            {
                swap(puntuaciones[j], puntuaciones[j + 1]);
            }
        }
    }
}

void mostrarBurbuja(vector<int>& puntuaciones)
{
    cout << "==========================BURBUJA ORDENADA==========================" << endl;
    for (int i = 0; i < puntuaciones.size(); i++)
    {
        cout << puntuaciones[i] << "\t";
    }
    cout << endl;
}
