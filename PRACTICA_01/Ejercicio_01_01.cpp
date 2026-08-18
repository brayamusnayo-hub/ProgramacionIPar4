// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingeniería de Sistemas
// Fecha de Creación: 12/08/2026

#include <iostream>
using namespace std;
int main()
{
	int anio=0;
	
	cout<<"Ingrese su anio: "; cin>>anio;
	if (((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) && (anio >= 1000 && anio <= 2026))
	{
	    cout<<"Es anio bisiesto"<<endl;
	}
	else
	    cout<<"No es anio bisiesto o ingreso un dato no valido"<<endl;
	return 0;
}