// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 03/09/2026
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 

    int n, caras = 0, cruces = 0;
    cout << "Cuantas veces quiere lanzar la moneda? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int resultado = rand() % 2; 
        if (resultado == 0) {
            caras++;
        } else {
            cruces++;
        }
    }

    double porcCaras = (double)caras / n * 100;
    double porcCruces = (double)cruces / n * 100;

    cout << "\nResultados:" << endl;
    cout << "Caras: " << caras << " (" << porcCaras << "%)" << endl;
    cout << "Cruces: " << cruces << " (" << porcCruces << "%)" << endl;

    return 0;
}