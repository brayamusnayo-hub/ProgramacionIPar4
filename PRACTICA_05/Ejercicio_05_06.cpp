// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 03/09/2026
// Número de ejercicio: 6

#include <iostream>
using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota) {
    sumaTotal += nuevaNota;
    cantidadNotas++;
}

int main() {
    double suma = 0.0;
    int cantidad = 0;
    int n;

    cout << "Cuantas notas desea ingresar? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        double nota;
        cout << "Ingrese la nota " << (i + 1) << ": ";
        cin >> nota;
        agregarNota(suma, cantidad, nota);
    }

    cout << "\nTotal acumulado: " << suma << endl;
    cout << "Cantidad de notas: " << cantidad << endl;
    if (cantidad > 0) {
        cout << "Promedio: " << (suma / cantidad) << endl;
    }

    return 0;
}