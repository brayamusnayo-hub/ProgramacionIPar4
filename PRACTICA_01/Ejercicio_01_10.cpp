// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera: Ingeniería de Sistemas
// Fecha de Creación: 12/08/2026

#include <iostream>
#include <string>

using namespace std;

int main() {
    int opcion;
    cout<<"Ingrese el numero del mes del anio que desea ver: "; cin>>opcion;
    switch (opcion)
    {
        case 1:
            cout<<"Enero"<<endl;
            break;
        case 2:
            cout<<"Febrero"<<endl;
            break;
        case 3:
            cout<<"Marzo"<<endl;
            break;
        case 4:
            cout<<"Abril"<<endl;
            break;
        case 5:
            cout<<"Mayo"<<endl;
            break;
        case 6:
            cout<<"Junio"<<endl;
            break;
        case 7:
            cout<<"Julio"<<endl;
            break;
        case 8:
            cout<<"Agosto"<<endl;
            break;
        case 9:
            cout<<"Septiembre"<<endl;
            break;
        case 10:
            cout<<"Octubre"<<endl;
            break;
        case 11:
            cout<<"Noviembre"<<endl;
            break;
        default:
            cout<<"Diciembre"<<endl;
            break;
    }
    
    return 0;
}