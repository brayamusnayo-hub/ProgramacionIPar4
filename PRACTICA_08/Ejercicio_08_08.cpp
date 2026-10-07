// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 07/10/2026

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> obtenerPalabras(string oracion);
bool detectarPlagio(string oracionA, string oracionB);

int main() {
    string oracionA, oracionB;

    cout << "Ingrese Oracion A: ";
    getline(cin, oracionA);

    cout << "Ingrese Oracion B: ";
    getline(cin, oracionB);

    if (detectarPlagio(oracionA, oracionB)) {
        cout << "Alerta de plagio: Verdadero" << endl;
    } else {
        cout << "Alerta de plagio: Falso" << endl;
    }

    return 0;
}

vector<string> obtenerPalabras(string oracion) {
    vector<string> palabras;
    string palabraTemp = "";
    oracion += " ";

    for (int i = 0; i < oracion.size(); i++) {
        char caracter = oracion[i];

        if (caracter != ' ') {
            palabraTemp += caracter;
        } else {
            if (palabraTemp.size() > 0) {
                palabras.push_back(palabraTemp);
                palabraTemp = "";
            }
        }
    }

    return palabras;
}

bool detectarPlagio(string oracionA, string oracionB) {
    vector<string> palabrasA = obtenerPalabras(oracionA);
    vector<string> palabrasB = obtenerPalabras(oracionB);
    int coincidencias = 0;

    for (int i = 0; i < palabrasA.size(); i++) {
        for (int j = 0; j < palabrasB.size(); j++) {
            if (palabrasA[i] == palabrasB[j]) {
                coincidencias++;
                break;
            }
        }
    }

    return coincidencias > 3;
}