// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 24/09/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void generarVoltajes(vector<double>& voltajes);
void generarTemperaturas(vector<double>& temperaturas);
void generarAlfanumericos(vector<char>& alfanumericos);
void generarAnios(vector<int>& anios);
void generarVelocidades(vector<double>& velocidades);
void generarDistancias(vector<double>& distancias);

void mostrarVoltajes(vector<double>& voltajes);
void mostrarTemperaturas(vector<double>& temperaturas);
void mostrarAlfanumericos(vector<char>& alfanumericos);
void mostrarAnios(vector<int>& anios);
void mostrarVelocidades(vector<double>& velocidades);
void mostrarDistancias(vector<double>& distancias);

int main() {
    srand(time(0));

    vector<double> listaVoltajes;
    vector<double> listaTemperaturas;
    vector<char> listaAlfanumericos;
    vector<int> listaAnios;
    vector<double> listaVelocidades;
    vector<double> listaDistancias;

    generarVoltajes(listaVoltajes);
    generarTemperaturas(listaTemperaturas);
    generarAlfanumericos(listaAlfanumericos);
    generarAnios(listaAnios);
    generarVelocidades(listaVelocidades);
    generarDistancias(listaDistancias);

    mostrarVoltajes(listaVoltajes);
    mostrarTemperaturas(listaTemperaturas);
    mostrarAlfanumericos(listaAlfanumericos);
    mostrarAnios(listaAnios);
    mostrarVelocidades(listaVelocidades);
    mostrarDistancias(listaDistancias);

    return 0;
}

void generarVoltajes(vector<double>& voltajes) {
    double minimo = 20.00;
    double maximo = 220.00;

    for (int i = 0; i < 100; i++) {
        double valorAleatorio = minimo + (rand() / (double)RAND_MAX) * (maximo - minimo);
        voltajes.push_back(valorAleatorio);
    }
}

void generarTemperaturas(vector<double>& temperaturas) {
    double minimo = 0.00;
    double maximo = 100.00;

    for (int i = 0; i < 50; i++) {
        double valorAleatorio = minimo + (rand() / (double)RAND_MAX) * (maximo - minimo);
        temperaturas.push_back(valorAleatorio);
    }
}

void generarAlfanumericos(vector<char>& alfanumericos) {
    for (int i = 0; i < 30; i++) {
        int tipoCaracter = rand() % 3;
        char caracterGenerado;

        if (tipoCaracter == 0) {
            caracterGenerado = '0' + rand() % ('9' - '0' + 1);
        } else if (tipoCaracter == 1) {
            caracterGenerado = 'A' + rand() % ('Z' - 'A' + 1);
        } else {
            caracterGenerado = 'a' + rand() % ('z' - 'a' + 1);
        }

        alfanumericos.push_back(caracterGenerado);
    }
}

void generarAnios(vector<int>& anios) {
    int minimo = 1990;
    int maximo = 2025;

    for (int i = 0; i < 100; i++) {
        int anioAleatorio = minimo + rand() % (maximo - minimo + 1);
        anios.push_back(anioAleatorio);
    }
}

void generarVelocidades(vector<double>& velocidades) {
    double minimo = 10.00;
    double maximo = 300.00;

    for (int i = 0; i < 32; i++) {
        double valorAleatorio = minimo + (rand() / (double)RAND_MAX) * (maximo - minimo);
        velocidades.push_back(valorAleatorio);
    }
}

void generarDistancias(vector<double>& distancias) {
    double minimo = 1.00;
    double maximo = 1000.00;

    for (int i = 0; i < 1000; i++) {
        double valorAleatorio = minimo + (rand() / (double)RAND_MAX) * (maximo - minimo);
        distancias.push_back(valorAleatorio);
    }
}

void mostrarVoltajes(vector<double>& voltajes) {
    cout << "--- LISTA DE VOLTAJES ---" << endl;
    for (int i = 0; i < voltajes.size(); i++) {
        cout << voltajes[i] << " ";
    }
    cout << endl << endl;
}

void mostrarTemperaturas(vector<double>& temperaturas) {
    cout << "--- LISTA DE TEMPERATURAS ---" << endl;
    for (int i = 0; i < temperaturas.size(); i++) {
        cout << temperaturas[i] << " ";
    }
    cout << endl << endl;
}

void mostrarAlfanumericos(vector<char>& alfanumericos) {
    cout << "--- LISTA DE CARACTERES ALFANUMERICOS ---" << endl;
    for (int i = 0; i < alfanumericos.size(); i++) {
        cout << alfanumericos[i] << " ";
    }
    cout << endl << endl;
}

void mostrarAnios(vector<int>& anios) {
    cout << "--- LISTA DE ANIOS ---" << endl;
    for (int i = 0; i < anios.size(); i++) {
        cout << anios[i] << " ";
    }
    cout << endl << endl;
}

void mostrarVelocidades(vector<double>& velocidades) {
    cout << "--- LISTA DE VELOCIDADES ---" << endl;
    for (int i = 0; i < velocidades.size(); i++) {
        cout << velocidades[i] << " ";
    }
    cout << endl << endl;
}

void mostrarDistancias(vector<double>& distancias) {
    cout << "--- LISTA DE DISTANCIAS ---" << endl;
    for (int i = 0; i < distancias.size(); i++) {
        cout << distancias[i] << " ";
    }
    cout << endl << endl;
}