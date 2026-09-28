// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 24/09/2026
// Número de ejercicio: 5

#include <iostream>
#include <vector>

using namespace std;

void leerVector(vector<int>& vec, int n, string nombre);
void combinarVectores(vector<int>& vec1, vector<int>& vec2, vector<int>& combinado);
void mostrarVector(vector<int>& vec, string titulo);

int main() {
    int n;
    cout << "Ingrese la dimension de los vectores: ";
    cin >> n;

    vector<int> vector1;
    vector<int> vector2;
    vector<int> vectorCombinado;

    leerVector(vector1, n, "Vector 1");
    leerVector(vector2, n, "Vector 2");

    combinarVectores(vector1, vector2, vectorCombinado);

    mostrarVector(vectorCombinado, "Vector combinado:");

    return 0;
}

void leerVector(vector<int>& vec, int n, string nombre) {
    cout << "--- Llenar " << nombre << " ---" << endl;
    for (int i = 0; i < n; i++) {
        int valor;
        cout << "Elemento " << i + 1 << ": ";
        cin >> valor;
        vec.push_back(valor);
    }
}

void combinarVectores(vector<int>& vec1, vector<int>& vec2, vector<int>& combinado) {
    for (int i = 0; i < vec1.size(); i++) {
        combinado.push_back(vec1[i]);
    }
    for (int i = 0; i < vec2.size(); i++) {
        combinado.push_back(vec2[i]);
    }
}

void mostrarVector(vector<int>& vec, string titulo) {
    cout << "\n" << titulo << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}