// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 07/10/2026
// Número de ejercicio: 5

#include <iostream>
#include <string>

using namespace std;

void inicializarMatrix(string matrix[100][100], int n);
void mostrar(string matrix[100][100], int n);
void comprarEntrada(string matrix[100][100], int n);
void mostrarEstadisticas(string matrix[100][100], int n);
void menu();

int main()
{
    menu();
    return 0;
}

void menu()
{
    int opcion = 0;
    string matrix[100][100];
    int n = 5;

    inicializarMatrix(matrix, n);

    while (opcion != 4)
    {
        cout << "\n======================MENU===========================\n";
        cout << "OPCIONES:\n";
        cout << "1. Mostrar disponibilidad de asientos\n";
        cout << "2. Comprar entrada\n";
        cout << "3. Estadisticas\n";
        cout << "4. Salir\n";
        cout << "Seleccione su opcion: ";
        cin >> opcion;
        cout << "=======================================================\n";

        switch (opcion)
        {
            case 1:
                mostrar(matrix, n);
                break;

            case 2:
                comprarEntrada(matrix, n);
                break;

            case 3:
                mostrarEstadisticas(matrix, n);
                break;

            case 4:
                cout << "Gracias por usar el sistema." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
                break;
        }
    }
}

void inicializarMatrix(string matrix[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = "L";
        }
    }
}

void comprarEntrada(string matrix[100][100], int n)
{
    int fila, columna;
    cout << "Seleccione asiento a comprar:" << endl;
    cout << "Ingrese fila (0 a " << n - 1 << "): ";
    cin >> fila;
    cout << "Ingrese columna (0 a " << n - 1 << "): ";
    cin >> columna;

    if (fila >= 0 && fila < n && columna >= 0 && columna < n)
    {
        if (matrix[fila][columna] == "L")
        {
            matrix[fila][columna] = "O";
            cout << "¡Asiento (" << fila << ", " << columna << ") comprado con exito!" << endl;
        }
        else
        {
            cout << "El asiento ya esta ocupado, elija otro." << endl;
        }
    }
    else
    {
        cout << "Coordenadas fuera de rango." << endl;
    }
}

void mostrar(string matrix[100][100], int n)
{
    cout << "\nESTADO DE LOS ASIENTOS (L = Libre, O = Ocupado):\n" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void mostrarEstadisticas(string matrix[100][100], int n)
{
    int ocupados = 0;
    int libres = 0;
    int totalAsientos = n * n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == "O")
            {
                ocupados++;
            }
            else
            {
                libres++;
            }
        }
    }

    double porcentajeOcupado = (double)ocupados / totalAsientos * 100.0;
    double porcentajeLibre = (double)libres / totalAsientos * 100.0;

    cout << "\n================ ESTADISTICAS ================" << endl;
    cout << "Total de asientos: " << totalAsientos << endl;
    cout << "Asientos ocupados: " << ocupados << " (" << porcentajeOcupado << "%)" << endl;
    cout << "Asientos libres: " << libres << " (" << porcentajeLibre << "%)" << endl;
    cout << "==============================================" << endl;
}