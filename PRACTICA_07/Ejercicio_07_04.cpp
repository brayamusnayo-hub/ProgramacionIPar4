// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 24/09/2026
// Número de ejercicio: 4

#include <iostream>
#include <vector>

using namespace std;

void leerVector(vector<int>& vec, int n, string nombre);
void multiplicarVectores(vector<int>& vec1, vector<int>& vec2, vector<int>& resultado);
void mostrarVector(vector<int>& vec, string titulo);

int main() {
    int n;
    cout << "Ingrese el tamaño N de los vectores: ";
    cin >> n;

    vector<int> vector1;
    vector<int> vector2;
    vector<int> vectorResultado;

    leerVector(vector1, n, "Vector 1");
    leerVector(vector2, n, "Vector 2");

    multiplicarVectores(vector1, vector2, vectorResultado);

    mostrarVector(vectorResultado, "Resultado de la multiplicacion:");

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

void multiplicarVectores(vector<int>& vec1, vector<int>& vec2, vector<int>& resultado) {
    for (int i = 0; i < vec1.size(); i++) {
        resultado.push_back(vec1[i] * vec2[i]);
    }
}

void mostrarVector(vector<int>& vec, string titulo) {
    cout << "\n" << titulo << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}