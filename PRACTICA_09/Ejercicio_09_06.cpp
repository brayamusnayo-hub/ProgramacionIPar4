// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 07/10/2026
// Número de ejercicio: 6

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int aleatorio(int max, int min);
void llenar(int temperaturas[4][7]);
void mostrar(int temperaturas[4][7]);
void temperaturaMasAlta(int temperaturas[4][7]);
void promedioSemanas(int temperaturas[4][7]);
void contarDiasCalurosos(int temperaturas[4][7]);

int main()
{
    srand(time(NULL));
    int temperaturas[4][7];

    llenar(temperaturas);

    cout << "MATRIZ DE TEMPERATURAS (4 semanas x 7 dias):\n" << endl;
    mostrar(temperaturas);

    cout << "\n================ RESULTADOS ================" << endl;
    temperaturaMasAlta(temperaturas);
    promedioSemanas(temperaturas);
    contarDiasCalurosos(temperaturas);

    return 0;
}

int aleatorio(int max, int min)
{
    return rand() % (max - min + 1) + min;
}

void llenar(int temperaturas[4][7])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            temperaturas[i][j] = aleatorio(35, 5);
        }
    }
}

void mostrar(int temperaturas[4][7])
{
    cout << "\tDia 1\tDia 2\tDia 3\tDia 4\tDia 5\tDia 6\tDia 7" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Sem " << i + 1 << "\t";
        for (int j = 0; j < 7; j++)
        {
            cout << temperaturas[i][j] << " C\t";
        }
        cout << endl;
    }
}

void temperaturaMasAlta(int temperaturas[4][7])
{
    int maxTemp = temperaturas[0][0];
    int semMax = 0;
    int diaMax = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (temperaturas[i][j] > maxTemp)
            {
                maxTemp = temperaturas[i][j];
                semMax = i;
                diaMax = j;
            }
        }
    }

    cout << "Temperatura mas alta del mes: " << maxTemp << " C" << endl;
    cout << "Ocurrio en la Semana " << semMax + 1 << ", Dia " << diaMax + 1 << endl;
}

void promedioSemanas(int temperaturas[4][7])
{
    cout << "\nPromedio de temperatura por semana:" << endl;
    for (int i = 0; i < 4; i++)
    {
        int suma = 0;
        for (int j = 0; j < 7; j++)
        {
            suma += temperaturas[i][j];
        }
        double promedio = (double)suma / 7.0;
        cout << "Semana " << i + 1 << ": " << promedio << " C" << endl;
    }
}

void contarDiasCalurosos(int temperaturas[4][7])
{
    int contador = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (temperaturas[i][j] > 30)
            {
                contador++;
            }
        }
    }

    cout << "\nDias del mes que superaron los 30 C: " << contador << " dias." << endl;
}