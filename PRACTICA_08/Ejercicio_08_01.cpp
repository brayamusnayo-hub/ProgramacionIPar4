// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 30/09/2026

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
string listaName(vector<string> &Lista);
string listaAp(vector<string> &Lista);
int Aleatorio(int max, int min);
int Edad();
int main()
{
    srand(time(0));
    vector<string> ListaName,ListaAp;
    cout<<" Su nuevo nombre: "<<listaName(ListaName)<<endl;
    cout<<" Apellido: "<<listaAp(ListaAp)<<endl;
    cout<<" Tu edad: "<<Edad()<<endl;
    
    return 0;
}


string listaName(vector<string> &Lista)
{
    string NombreAl;
    Lista={"Brayam","Jhostin","Carlos","Juan","Lisa","Sofia","Belen","Dania","Alizon","Yoel"};
    int casilla=Aleatorio(9,0);
    return NombreAl=Lista[casilla];
    
}
string listaAp(vector<string> &Lista1)
{
    string ApellidoAl;
    Lista1={"Usnayo","Kapquequi","Verastegui","Candia","Chinchi","Sanz","Rosenthal","Cardona","Miranda","Bueno"};
    int casilla=Aleatorio(9,0);
    return ApellidoAl=Lista1[casilla];
    
}
int Aleatorio(int max, int min)
{
    int aleatorio = rand() % (max - min + 1) + min;
    return aleatorio;
    
}
int Edad()
{
    int edadAl=Aleatorio(99,1);
    return edadAl;
}




