// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 30/09/2026

#include <iostream>
#include <string>
#include <vector>

using namespace std;
string palabrotas(string mensaje);
bool esPalabrota(const string& palabra, const vector<string>& lista);
int main() {
    string mensaje;
    cout << "Ingrese su comentario: " << endl;
    getline(cin, mensaje);
    cout << "Su nuevo mensaje es: " << palabrotas(mensaje) << endl;
    return 0;
}

bool esPalabrota(const string& palabra, const vector<string>& lista) {
    for (const string& p : lista) 
    {
        if (palabra == p) return true;
    }
    return false;
}

string palabrotas(string mensaje) {
    string palabraActual = "";
    string mensajeDefinitivo = "";
    vector<string> listaPalabras = {"noob", "manco", "tonto"};

    mensaje += " ";

    for (int i = 0; i < mensaje.size(); i++) {
        char caracter = mensaje[i];

        if (caracter != ' ') {
            palabraActual += caracter;
        } else {
            if (!palabraActual.empty()) {
                if (esPalabrota(palabraActual, listaPalabras)) {
                    mensajeDefinitivo += string(palabraActual.size(), '*');
                } else {
                    mensajeDefinitivo += palabraActual;
                }
                
                palabraActual = "";
            }
            
            mensajeDefinitivo += " ";
        }
    }

    if (!mensajeDefinitivo.empty()) {
        mensajeDefinitivo.pop_back();
    }

    return mensajeDefinitivo;
}
