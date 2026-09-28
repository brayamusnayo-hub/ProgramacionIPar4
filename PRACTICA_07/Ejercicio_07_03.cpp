// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 24/09/2026
// Número de ejercicio: 3

#include <iostream>
#include <vector>

using namespace std;

void leerCalificaciones(vector<int>& calificaciones, int n);
int calcularSuma(vector<int>& calificaciones);
double calcularPromedio(int suma, int n);
void calcularDesviaciones(vector<int>& calificaciones, double promedio, vector<double>& desviacion);
double calcularVarianza(vector<double>& desviacion);
void mostrarResultados(vector<int>& calificaciones, vector<double>& desviacion, int suma, double promedio, double varianza);

int main() {
    int n;
    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> n;

    vector<int> calificaciones;
    vector<double> desviacion;

    leerCalificaciones(calificaciones, n);

    int suma = calcularSuma(calificaciones);
    double promedio = calcularPromedio(suma, n);

    calcularDesviaciones(calificaciones, promedio, desviacion);
    double varianza = calcularVarianza(desviacion);

    mostrarResultados(calificaciones, desviacion, suma, promedio, varianza);

    return 0;
}

void leerCalificaciones(vector<int>& calificaciones, int n) {
    for (int i = 0; i < n; i++) {
        int nota;
        cout << "Ingrese calificacion " << i + 1 << ": ";
        cin >> nota;
        calificaciones.push_back(nota);
    }
}

int calcularSuma(vector<int>& calificaciones) {
    int sumaTotal = 0;
    for (int i = 0; i < calificaciones.size(); i++) {
        sumaTotal += calificaciones[i];
    }
    return sumaTotal;
}

double calcularPromedio(int suma, int n) {
    return (double)suma / n;
}

void calcularDesviaciones(vector<int>& calificaciones, double promedio, vector<double>& desviacion) {
    for (int i = 0; i < calificaciones.size(); i++) {
        double valorDesviacion = calificaciones[i] - promedio;
        desviacion.push_back(valorDesviacion);
    }
}

double calcularVarianza(vector<double>& desviacion) {
    double sumaCuadrados = 0;
    for (int i = 0; i < desviacion.size(); i++) {
        sumaCuadrados += desviacion[i] * desviacion[i];
    }
    return sumaCuadrados / desviacion.size();
}

void mostrarResultados(vector<int>& calificaciones, vector<double>& desviacion, int suma, double promedio, double varianza) {
    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Suma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    
    cout << "\nCalificacion - Desviacion:" << endl;
    for (int i = 0; i < calificaciones.size(); i++) {
        cout << calificaciones[i] << " -> " << desviacion[i] << endl;
    }

    cout << "\nVarianza: " << varianza << endl;
}