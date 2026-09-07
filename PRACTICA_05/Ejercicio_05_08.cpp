// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 03/09/2026
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

long long calcularFactorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    srand(time(0));
    int numero = rand() % 10 + 1;

    cout << "Numero aleatorio generado: " << numero << endl;
    cout << "El factorial de " << numero << " es: " << calcularFactorial(numero) << endl;

    return 0;
}