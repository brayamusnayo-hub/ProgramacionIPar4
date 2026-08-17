// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingeniería de Sistemas
// Fecha de Creación: 10/08/2026

#include <iostream>
using namespace std;
int main()
{
	int numero_1=0,numero_2=0,cambio_variable_numero_1=0,cambio_variable_numero_2=0;

	cout<<"Ingrese su primer numero: ";
	cin>>numero_1;
	cout<<"Ingrese su segundo numero: ";
	cin>>numero_2;

	cambio_variable_numero_1=numero_2;
    cambio_variable_numero_2=numero_1;
    
    cout<<"--------------------------------------"<<endl;
	cout<<"Su primer numero ahora vale: "<<cambio_variable_numero_1<<endl;
	cout<<"Su segundo numero ahora vale: "<<cambio_variable_numero_2<<endl;


	return 0;
}
