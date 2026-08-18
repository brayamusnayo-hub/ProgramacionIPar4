// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingeniería de Sistemas
// Fecha de Creación: 12/08/2026

#include <iostream>
using namespace std;
int main()
{
	float precio=0, costo_total=0;
	
	cout<<"Ingrese el precio de su producto para sumarle su impuesto IVA: "; cin>>precio;
	if (precio>0)
	{
	    costo_total=precio+(precio*0.13);
	    cout<<"Su precio final mas el impuesto IVA es de: "<<costo_total<<endl;
	}
	else
	    cout<<"Ingrese un precio valido"<<endl;
	return 0;
}