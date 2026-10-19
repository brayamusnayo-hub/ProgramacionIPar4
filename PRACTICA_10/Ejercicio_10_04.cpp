// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 14/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

vector<double> Prod(vector<double>& lista, int n);
void ordenarSelec(vector<double>& lista);
float aleatorio(float max, float min);
float numDecimal();
float mayorElemento(vector<double>lista);
float menorElemento(vector<double>lista);
float medianaLista(vector<double>lista);
void mostrarLista(vector<double>& lista);

int main()
{
    srand(time(NULL));
    int n;
    vector<double> lista;
    cout << "Ingrese la cantidad de productos: ";
    cin >> n;
    
    Prod(lista, n);
    
    cout << "\n--- LISTA DE PRODUCTOS GENERADA ---" << endl;
    mostrarLista(lista);
    
    ordenarSelec(lista);
    
    cout << "\n--- LISTA DE PRODUCTOS ORDENADA ---" << endl;
    mostrarLista(lista);
    
    cout<<"\n------ELEMENTO MENOR------------"<<endl;
    cout<<menorElemento(lista)<<endl;
    
    cout<<"\n------ELEMENTO MAYOR------------"<<endl;
    cout<<mayorElemento(lista)<<endl;
    
    cout<<"\n----------MEDIANA----------"<<endl;
    cout<<medianaLista(lista)<<endl;
    return 0;
}
float medianaLista(vector<double>lista)
{
    float mediana;
    int n=lista.size();
    if (n % 2 != 0) {
        return lista[n / 2];
    } else {
        return (lista[(n / 2) - 1] + lista[n / 2]) / 2.0;
}
}
float mayorElemento(vector<double>lista)
{
    float  mayor=-1;
    for (int i=0;i<lista.size();i++)
    {
        if(lista[i]>mayor)
        {
            mayor=lista[i];
        }
    }
    return mayor;
}
float menorElemento(vector<double>lista)
{
    float menor=lista[0];
    return menor;
}

float aleatorio(float max, float min)
{
    return min + rand() % ((int)max - (int)min + 1);
}

float numDecimal()
{
    float enteros = aleatorio(1, 1000);
    float decimales = aleatorio(0, 99);
    return enteros + (decimales / 100.0);
}

vector<double> Prod(vector<double>& lista, int n)
{
    for (int i = 0; i < n; i++)
    {
        lista.push_back(numDecimal());
    }
    return lista;
}

void ordenarSelec(vector<double>& lista)
{
    int n = lista.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (lista[j] < lista[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            double temp = lista[i];
            lista[i] = lista[minIndex];
            lista[minIndex] = temp;
        }
    }
}

void mostrarLista(vector<double>& lista)
{
    for (int i = 0; i < lista.size(); i++)
    {
        cout << lista[i] << "\t";
    }
    cout << endl;
}