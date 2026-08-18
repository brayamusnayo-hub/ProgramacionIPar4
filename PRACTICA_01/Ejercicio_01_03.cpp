// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingeniería de Sistemas
// Fecha de Creación: 12/08/2026

#include <iostream>
using namespace std;
int main()
{
	int edad=0;
	char sexo[10];
	float altura=0;
	
	cout<<"Ingrese su edad: "; cin>>edad;
	cout<<"Ingrese su sexo: "; cin>>sexo;
	cout<<"Ingrese su altura"; cin>>altura;
	
	if (edad>0 && altura>0)
	{
	    cout<<"Su edad es: "<<edad<<"\n"<<"Su sexo es: "<<sexo<<endl;
	    cout<<"Su altura es: "<<altura<<endl;
	}
	return 0;
}