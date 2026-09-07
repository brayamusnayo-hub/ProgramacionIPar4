// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 03/09/2026
// Número de ejercicio: 2

#include <iostream>
using namespace std;

void ModificarValores(int porValor, int &porReferencia);

int main() {
    int a = 5;
    int b = 5;

    cout << "--- Antes de llamar a la funcion ---" << endl;
    cout << "a (por valor): " << a << endl;        
    cout << "b (por referencia): " << b << endl;    

    ModificarValores(a, b);

    cout << "\n--- Despues de llamar a la funcion ---" << endl;
    cout << "a (por valor): " << a << endl;         
    cout << "b (por referencia): " << b << endl;    

    return 0;
}

void ModificarValores(int porValor, int &porReferencia) 
{
    porValor = porValor * 2;        
    porReferencia = porReferencia + 10; 
}