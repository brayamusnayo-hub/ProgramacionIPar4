// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 14/10/2026
// Número de ejercicio: 6

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

int aleatorio();
string NamesAl(vector<string> nombres);
void Ordenar(vector<string> &nombres);
void Mostrar(vector<string> lista);   
void Desordenado(vector<string> &cambiado, vector<string> nombres); 

int main()
{
    srand(time(NULL));
    vector<string> nombres = {"Brayam", "Carlos", "Luis", "Ronald", "Robert", "Angela", "Alizon", "Sofia", "Luisa", "Jhostin"};
    vector<string> cambiado;
    
    Desordenado(cambiado, nombres);
    
    cout << "--- LISTA ALEATORIA ORIGINAL ---" << endl;
    Mostrar(cambiado);
    
    Ordenar(cambiado);
    
    cout << "\n--- LISTA ORDENADA ALFABETICAMENTE ---" << endl;
    Mostrar(cambiado);

    return 0;
}

int aleatorio()
{
    int max = 9, min = 0;
    return min + rand() % (max - min + 1);
}

void Desordenado(vector<string> &cambiado, vector<string> nombres)
{
    for (int i = 0; i < nombres.size(); i++)
    {
        cambiado.push_back(NamesAl(nombres)); 
}
}

string NamesAl(vector<string> nombres)
{
    return nombres[aleatorio()];
}

void Ordenar(vector<string> &nombres)
{
    for(int i = 0; i < nombres.size() - 1; i++)
    {
        for (int j = i + 1; j < nombres.size(); j++) 
        {
            if(nombres[i] > nombres[j])
            {
                string aux = nombres[i];
                nombres[i] = nombres[j];
                nombres[j] = aux;
            }
        }
    }
}

void Mostrar(vector<string> lista)
{
    for (int i = 0; i < lista.size(); i++) 
    {
        cout << i + 1 << ". " << lista[i] << endl;
    }
}


