// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 24/09/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector>

using namespace std;

void cargarVoltios(vector<double>& voltios);
void mostrarVoltios(vector<double>& voltios);

int main() {
    vector<double> voltios;

    cargarVoltios(voltios);
    mostrarVoltios(voltios);

    return 0;
}

void cargarVoltios(vector<double>& voltios) {
    voltios.push_back(11.95);
    voltios.push_back(16.32);
    voltios.push_back(12.15);
    voltios.push_back(8.22);
    voltios.push_back(15.98);
    voltios.push_back(26.22);
    voltios.push_back(13.54);
    voltios.push_back(6.45);
    voltios.push_back(17.59);
}

void mostrarVoltios(vector<double>& voltios) {
    for (int i = 0; i < voltios.size(); i++) {
        cout << voltios[i] << " ";
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }
}