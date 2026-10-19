// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 14/10/2026
// Número de ejercicio: 3

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

int aleatorio(int max, int min);
float numeroListo();
vector<float> ListaCorredores(int n, vector<float> lista);
void mostrar(vector<float> lista);
vector<float> ordenarInser(vector<float> lista);
void mostrarOrdenado(vector<float>& lista);

int main()
{
    srand(time(0));
    int n;
    vector<float> lista;
    cout << "Ingrese la cantidad de corredores a ver: " << endl;
    cin >> n;
    cout << "LISTA ANTES DE ORDENAR" << endl;
    vector<float> listaAnterior = ListaCorredores(n, lista);
    mostrar(listaAnterior);
    cout << "LISTA DESPUES DE ORDENAR" << endl;
    vector<float> Fin = ordenarInser(listaAnterior);
    mostrarOrdenado(Fin);
    return 0;
}

int aleatorio(int max, int min)
{
    return min + rand() % (max - min + 1);
}

float numeroListo()
{
    float enteros = aleatorio(20, 10);
    float decimales = aleatorio(99, 1);
    return enteros + (decimales / 100);
}

vector<float> ListaCorredores(int n, vector<float> lista)
{
    for (int i = 0; i < n; i++)
    {
        lista.push_back(numeroListo());
    }
    return lista;
}

void mostrar(vector<float> lista)
{
    for (int i = 0; i < lista.size(); i++)
    {
        cout << lista[i] << "\t";
    }
    cout << "\n" << endl;
}

vector<float> ordenarInser(vector<float> lista)
{
    float n = lista.size();
    for (int i = 1; i < n; i++)
    {
        float valorActual = lista[i];
        int j = i - 1;

        while (j >= 0 && lista[j] > valorActual)
        {
            lista[j + 1] = lista[j];
            j--;
        }
        lista[j + 1] = valorActual;
    }
    return lista;
}

void mostrarOrdenado(vector<float>& lista)
{
    for (int i = 0; i < lista.size(); i++)
    {
        cout << lista[i] << "\t";
    }
    cout << endl;
}
