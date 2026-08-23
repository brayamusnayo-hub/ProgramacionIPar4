// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 21/08/2026

#include <iostream>
using namespace std;
int main()
{

    int numero1, numero2;
    cout << "Ingrese dos numeros distintos: ";
    cin >> numero1 >> numero2;
    if(numero1!=numero2)
    {
        if (numero1 > numero2) 
        {
            for (int i = numero1; i >= numero2; i--) 
            {
                cout << i << " ";
            }
        } 
        else 
        {
            for (int i = numero1; i <= numero2; i++) 
            {
                cout << i << " ";
            }
        }

        cout << endl;
    }
    else
    cout<<"distintos por favor"<<endl;
    return 0;
}