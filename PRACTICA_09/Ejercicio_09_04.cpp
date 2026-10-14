// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 07/10/2026
// Número de ejercicio: 4

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int aleatorio(int max, int min);
void llenarMatrix(int matrix[100][100], int n);
void mostrar(int matrix[100][100], int n);
void puntoS(int matrix[100][100], int n);

int main()
{
    srand(time(NULL));
    int n = 0, matrix[100][100];

    cout << "Ingrese la dimension: ";
    cin >> n;

    llenarMatrix(matrix, n);

    cout << "\nMATRIZ GENERADA:" << endl;
    mostrar(matrix, n);

    puntoS(matrix, n);

    return 0;
}

int aleatorio(int max, int min)
{
    return rand() % (max - min + 1) + min;
}

void llenarMatrix(int matrix[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = aleatorio(10, 1);
        }
    }
}

void mostrar(int matrix[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void puntoS(int matrix[100][100], int n)
{
    bool existePunto = false;

    for (int i = 0; i < n; i++)
    {
        int menorFila = matrix[i][0];
        int colMenor = 0;

        for (int j = 1; j < n; j++)
        {
            if (matrix[i][j] < menorFila)
            {
                menorFila = matrix[i][j];
                colMenor = j;
            }
        }

        bool esMayorEnColumna = true;
        for (int k = 0; k < n; k++)
        {
            if (matrix[k][colMenor] > menorFila)
            {
                esMayorEnColumna = false;
            }
        }

        if (esMayorEnColumna == true)
        {
            cout << "\nPUNTO DE SILLA ENCONTRADO:" << endl;
            cout << "Valor: " << menorFila << endl;
            cout << "Posicion: Fila " << i << ", Columna " << colMenor << endl;
            existePunto = true;
        }
    }

    if (existePunto == false)
    {
        cout << "\nNo se encontro ningun punto de silla en la matriz." << endl;
    }
}

