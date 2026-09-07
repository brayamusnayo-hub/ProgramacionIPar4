// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 03/09/2026
// Número de ejercicio: 5

#include <iostream>
#include <cmath> 
using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos);

int main()
{
    int totalSeg, h = 0, m = 0, s = 0;

    cout << "Ingrese la cantidad total de segundos: ";
    cin >> totalSeg;

    calcularTiempo(totalSeg, h, m, s);

    cout << "\nEl equivalente es:" << endl;
    cout << h << " hora(s), " << m << " minuto(s) y " << s << " segundo(s)." << endl;

    return 0;
    
}

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos) 
{
    horas=totalSegundos/360;
    int segundosRestantes=totalSegundos%3600;
    minutos=segundosRestantes/60;
    segundos=segundosRestantes%60;
}

