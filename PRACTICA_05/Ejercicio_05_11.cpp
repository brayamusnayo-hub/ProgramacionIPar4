// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 03/09/2026
// Número de ejercicio: 11

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int N;
    cout << "Ingrese la cantidad total maxima de ninos (N): ";
    cin >> N;

    int ninos1Ano = rand() % (N + 1);

    int sobrante1 = N - ninos1Ano;
    int ninos2Anos = rand() % (sobrante1 + 1);

    int sobrante2 = sobrante1 - ninos2Anos;
    int ninos3Anos = rand() % (sobrante2 + 1);

    int panales1Ano = ninos1Ano * 6;
    int panales2Anos = ninos2Anos * 3;
    int panales3Anos = ninos3Anos * 2;

    int totalPanales = panales1Ano + panales2Anos + panales3Anos;

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Ninos de 1 ano: " << ninos1Ano << " (Consumo: " << panales1Ano << " panales)" << endl;
    cout << "Ninos de 2 anos: " << ninos2Anos << " (Consumo: " << panales2Anos << " panales)" << endl;
    cout << "Ninos de 3 anos: " << ninos3Anos << " (Consumo: " << panales3Anos << " panales)" << endl;
    cout << "Total de ninos generados: " << (ninos1Ano + ninos2Anos + ninos3Anos) << " de " << N << " maximos." << endl;
    cout << "Total consumo de panales por dia: " << totalPanales << " PANALES" << endl;

    return 0;
}