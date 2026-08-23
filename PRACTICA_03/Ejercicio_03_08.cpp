// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 21/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    int cantidadPrecios = 0;
    int max = 10000, min = 10;
    
    double sumaTotal = 0, sumaIva = 0, sumaDescuento = 0;
    double caro = 0, barato = 0;

    cout << "Ingrese la cantidad de precios aleatorios a mostrar: " << endl;
    cin >> cantidadPrecios;

    for (int i = 1; i <= cantidadPrecios; i++)
        {
        double precioBase = rand() % (max - min + 1) + min; 
        cout<<precioBase<<endl;
        double descuento = 0;
        double iva = precioBase * 0.13;
        
        if (precioBase > 2500) 
        {
            descuento = precioBase * 0.05;
        }

        double precioFinal = precioBase - descuento;

        sumaIva += iva;
        sumaDescuento += descuento;
        sumaTotal += precioFinal;

        if (i == 1) 
        { 
            caro = precioFinal;
            barato = precioFinal;
        } else 
        {
            if (precioFinal > caro) caro = precioFinal;
            if (precioFinal < barato) barato = precioFinal;
        }
    }

    cout << "\nSuma total ingresada: " << sumaTotal << endl;
    cout << "Suma de descuentos: " << sumaDescuento << endl;
    cout << "Suma de los impuestos IVA: " << sumaIva << endl;
    cout << "Producto mas caro (monto final): " << caro << endl;
    cout << "Producto mas barato (monto final): " << barato << endl;

    return 0;
}