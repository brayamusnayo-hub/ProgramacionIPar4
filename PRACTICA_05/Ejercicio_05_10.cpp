// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 03/09/2026
// Número de ejercicio: 10

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

    int n;
    cout << "Cuantos numeros aleatorios entre 1 y 1000 desea generar? ";
    cin >> n;

    int sumaPares = 0;
    double sumaImpares = 0;
    int cantImpares = 0;
    int mayorPrimo = -1;

    cout << "\nNumeros generados: " << endl;
    for (int i = 0; i < n; i++) {
        int num = rand() % 1000 + 1;
        cout << num << " ";

        if (num % 2 == 0) {
            sumaPares += num;
        } else {
            sumaImpares += num;
            cantImpares++;
        }

        if (esPrimo(num)) {
            if (num > mayorPrimo) {
                mayorPrimo = num;
            }
        }
    }

    cout << "\n\n--- RESULTADOS ---" << endl;
    cout << "a. Sumatoria de numeros pares: " << sumaPares << endl;

    if (cantImpares > 0) {
        cout << "b. Promedio de numeros impares: " << (sumaImpares / cantImpares) << endl;
    } else {
        cout << "b. No se generaron numeros impares." << endl;
    }

    if (mayorPrimo != -1) {
        cout << "c. Mayor numero primo generado: " << mayorPrimo << endl;
    } else {
        cout << "c. No se genero ningun numero primo." << endl;
    }

    return 0;
}