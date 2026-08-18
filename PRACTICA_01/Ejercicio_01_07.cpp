// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingeniería de Sistemas
// Fecha de Creación: 12/08/2026

#include <iostream>

using namespace std;

int main() 
{
    int numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    int variable_temporal = numero; 
    int suma = 0;
    int cont_digitos = 0;

    if (variable_temporal == 0) 
    {
        cont_digitos = 1;
        suma = 0;
    } 
    else 
    {
        while (variable_temporal > 0) 
        {
            int digito = variable_temporal % 10;   
            suma += digito;           
            cont_digitos+=1;       
            variable_temporal/=10;
        }
    }

    cout << "Cantidad de digitos: " << cont_digitos << endl;
    cout << "Suma de los digitos: " << suma << endl;

    return 0;
}