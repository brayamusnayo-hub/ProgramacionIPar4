// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 24/09/2026
// Número de ejercicio: 7

#include <iostream>
#include <vector>

using namespace std;

void ingresarDatos(vector<int>& numeros);
void imprimirVector(vector<int>& numeros);

int main() {
    vector<int> numeros;

    ingresarDatos(numeros);
    imprimirVector(numeros);

    return 0;
}

void ingresarDatos(vector<int>& numeros) {
    cout << "Ingrese numeros enteros (un numero negativo para detenerse):" << endl;
    
    int i = 0;
    bool continuar = true;

    while (i < 100 && continuar) {
        int numero;
        cout << "Numero " << i + 1 << ": ";
        cin >> numero;

        if (numero < 0) {
            continuar = false;
        } else {
            numeros.push_back(numero);
            i++;
        }
    }
}

void imprimirVector(vector<int>& numeros) {
    cout << "\nElementos introducidos:" << endl;
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
}