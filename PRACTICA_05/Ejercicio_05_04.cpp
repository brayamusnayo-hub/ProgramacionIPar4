// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 03/09/2026
// Número de ejercicio: 4

#include <iostream>
#include <cmath> 
using namespace std;

float calcularArea(float lado) {
    return lado * lado;
}

float calcularArea(float base, float altura) {
    return base * altura;
}

double calcularArea(double radio) {
    return 3.14159 * radio * radio;
}

int main() {
    int opcion;

    cout << "=== CALCULADORA DE AREAS ===" << endl;
    cout << "1. Calcular area de un Cuadrado" << endl;
    cout << "2. Calcular area de un Rectangulo" << endl;
    cout << "3. Calcular area de un Circulo" << endl;
    cout << "Seleccione una opcion (1-3): "<<endl;
    cin >> opcion;

    if (opcion == 1) {
        float lado;
        cout << "Ingrese el lado del cuadrado: "<<endl;
        cin >> lado;
        cout << "El area del cuadrado es: " << calcularArea(lado) << endl;

    } else if (opcion == 2) {
        float base, altura;
        cout << "Ingrese la base del rectangulo: "<<endl;
        cin >> base;
        cout << "Ingrese la altura del rectangulo: "<<endl;
        cin >> altura;
        cout << "El area del rectangulo es: " << calcularArea(base, altura) << endl;

    } else if (opcion == 3) {
        double radio;
        cout << "Ingrese el radio del circulo: "<<endl;
        cin >> radio;
        cout << "El area del circulo es: " << calcularArea(radio) << endl;

    } else {
        cout << "Opcion no valida." << endl;
    }

    return 0;
}