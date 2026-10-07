// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 07/10/2026

#include <iostream>
#include <string>
#include <vector>

using namespace std;

char aMinuscula(char c);
string aMinusculaString(string texto);
vector<string> buscarContactos(vector<string> contactos, string prefijo);

int main() {
    vector<string> contactos = {"Marcelo", "Maria", "Martin", "Juan", "Marcos"};
    string prefijo;

    cout << "Ingrese prefijo de busqueda: ";
    cin >> prefijo;

    vector<string> resultados = buscarContactos(contactos, prefijo);

    cout << "Resultados: ";
    for (int i = 0; i < resultados.size(); i++) {
        cout << resultados[i];
        if (i < resultados.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}

char aMinuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

string aMinusculaString(string texto) {
    string resultado = "";
    for (int i = 0; i < texto.size(); i++) {
        resultado += aMinuscula(texto[i]);
    }
    return resultado;
}

vector<string> buscarContactos(vector<string> contactos, string prefijo) {
    vector<string> filtrados;
    string prefijoMin = aMinusculaString(prefijo);

    for (int i = 0; i < contactos.size(); i++) {
        string contactoMin = aMinusculaString(contactos[i]);

        if (contactoMin.size() >= prefijoMin.size()) {
            bool coincide = true;

            for (int j = 0; j < prefijoMin.size(); j++) {
                if (contactoMin[j] != prefijoMin[j]) {
                    coincide = false;
                    break;
                }
            }

            if (coincide) {
                filtrados.push_back(contactos[i]);
            }
        }
    }

    return filtrados;
}