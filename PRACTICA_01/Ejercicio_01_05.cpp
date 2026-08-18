// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingeniería de Sistemas
// Fecha de Creación: 12/08/2026

#include <iostream>
using namespace std;
int main()
{
	int numero=0;
	
	cout<<"Ingrese su numero del dia de la semana: "; cin>>numero;
	if(numero>0 && numero<=7)
	{
	    switch(numero)
	    {
	        case 1:
	            cout<<"El dia es Lunes"<<endl;
	            break;
	        case 2:
	            cout<<"El dia es martes"<<endl;
	            break;
	        case 3:
	            cout<<"El dia es miercoles"<<endl;
	            break;
	        case 4:
	            cout<<"El dia es jueves"<<endl;
	            break;
	        case 5:
	            cout<<"El dia es viernes"<<endl;
	            break;
	        case 6:
	            cout<<"El dia es sabado"<<endl;
	            break;
	        case 7:
	            cout<<"El dia es domingo"<<endl;
	            break;
	        default:
	            cout<<"Ingrese una opcion valida"<<endl;
	            break;
	    }
	}
	else
	    cout<<"Error en tu numero"<<endl;
	
	return 0;
}