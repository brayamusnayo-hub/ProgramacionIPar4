// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 03/09/2026
// Número de ejercicio: 3

#include <iostream>
using namespace std;

float CalcularPrecioTotal(float precioBase, float porcentajeImpuesto = 13.0) {
    float impuestoCalculado = precioBase * (porcentajeImpuesto / 100.0);
    return precioBase + impuestoCalculado;
}

int main() {
    float precio = 0;
    float personal=0;
    cout<<"Ingrese precio: "<<endl; cin>>precio;

    float totalPorDefecto = CalcularPrecioTotal(precio);
    cout << "Precio con impuesto por defecto (13%): BS " << totalPorDefecto << endl; 
    cout<<"Ingrese impuesto personalizado: "<<endl; cin>>personal;
    float totalPersonalizado = CalcularPrecioTotal(precio, personal);
    cout << "Precio con impuesto personalizado"<<" ("<<personal<<"%): BS " << totalPersonalizado << endl;

    return 0;
}
    
    

