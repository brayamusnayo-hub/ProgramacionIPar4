// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 14/10/2026
// Número de ejercicio: 1

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

int aleatorio();
string NamesAl(vector<string>& nombres);
string ApellidoAl(vector<string>& apellido);

int main()
{
    srand(time(NULL));
    vector<string> nombres = {"Brayam", "Carlos", "Luis", "Ronald", "Robert", "Angela", "Alizon", "Sofia", "Luisa", "Jhostin"};
    vector<string> apellido = {"Usnayo", "Kapquequi", "Huanca", "Tacuri", "Huallpa", "Miranda", "Apaza", "Mamani", "Verastegui", "Cuccitini"};
    cout << "-------------------- Tu nueva identidad es: --------------------" << endl;
    cout << NamesAl(nombres) << " " << ApellidoAl(apellido) << endl;

    return 0;
}

int aleatorio()
{
    int max = 9, min = 0;
    return min + rand() % (max - min + 1);
}

string NamesAl(vector<string>& nombres)
{
    return nombres[aleatorio()];
}

string ApellidoAl(vector<string>& apellido)
{
    return apellido[aleatorio()];
}
