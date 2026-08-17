// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingeniería de Sistemas
// Fecha de Creación: 10/08/2026

#include <iostream>
using namespace std;
int main()
{
	float nota_practica=0,nota_teoria=0,nota_participacion=0,nota_final=0;

	cout<<"Ingrese su nota de practica: ";
	cin>>nota_practica;
	cout<<"Ingrese su nota de teoria: ";
	cin>>nota_teoria;
    cout<<"Ingrese su nota de participacion: ";
	cin>>nota_participacion;
	if(nota_practica>0 && nota_teoria>0 && nota_participacion>0)
	{
	    if(nota_practica<=100 && nota_teoria<=100 && nota_participacion<=100)
	    {
	    nota_practica*=0.30;
	    nota_teoria*=0.60;
        nota_participacion*=0.10;
        nota_final+=nota_practica+nota_teoria+nota_participacion;
    
        cout<<"--------------------------------------"<<endl;
	    cout<<"Su nota final es de: "<<nota_final<<endl;
	    }
	}
	else
	cout<<"Ingrese número positivos"<<endl;
	
	return 0;
}
