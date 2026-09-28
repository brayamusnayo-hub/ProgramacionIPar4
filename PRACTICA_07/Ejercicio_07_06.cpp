// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 24/09/2026
// Número de ejercicio: 6

#include <iostream>
#include <vector>

using namespace std;

void pedirValores(vector<int>& vec, string nombre);
void sumarVectores(vector<int>& vec1, vector<int>& vec2, vector<int>& vec3);
void mostrarVector(vector<int>& vec, string nombre);

int main() {
    vector<int> vector1;
    vector<int> vector2;
    vector<int> vector3;

    pedirValores(vector1, "vector1");
    pedirValores(vector2, "vector2");

    sumarVectores(vector1, vector2, vector3);

    mostrarVector(vector3, "vector3");

    return 0;
}

void pedirValores(vector<int>& vec, string nombre) {
    cout << "--- Ingrese 5 valores para " << nombre << " ---" << endl;
    for (int i = 0; i < 5; i++) {
        int valor;
        cout << "Valor " << i + 1 << ": ";
        cin >> valor;
        vec.push_back(valor);
    }
}

void sumarVectores(vector<int>& vec1, vector<int>& vec2, vector<int>& vec3) {
    for (int i = 0; i < 5; i++) {
        vec3.push_back(vec1[i] + vec2[i]);
    }
}

void mostrarVector(vector<int>& vec, string nombre) {
    cout << "\nValores de " << nombre << ":" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}