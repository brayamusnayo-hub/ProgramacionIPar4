// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 03/09/2026
// Número de ejercicio: 9

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    srand(time(0));

    int n, contadorPrimos = 0;
    cout << "Cuantos numeros aleatorios desea generar? ";
    cin >> n;

    cout << "\nNumeros generados:" << endl;
    for (int i = 0; i < n; i++) {
        int num = rand() % 10000 + 1; 
        cout << num << " ";

        if (esPrimo(num)) {
            contadorPrimos++;
        }
    }

    cout << "\nTotal de numeros primos encontrados: " << contadorPrimos << endl;

    return 0;
}