// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 28/08/2026

#include <iostream>
using namespace std;
int contarDigitos(int numero);
int main()
{
    int numero,digitos=0;
    cout<<"Ingrese su numero; "<<endl; cin>>numero;
    if (numero>0)
    {
        cout << "El numero tiene " << contarDigitos(numero) << " digitos." << endl;
    }
    else
        cout <<"Error";
}

int contarDigitos(int numero)
{      
    int digitos=0;
    if (numero == 0) 
    {
        digitos = 1;
    } 
    else 
    {
        for (int i = numero; i > 0; i /= 10) 
        {
        digitos++;

        }
    }
    return digitos;

}