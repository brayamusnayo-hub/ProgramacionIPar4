// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 28/08/2026

#include <iostream>
using namespace std;
int sumatoria(int numero);
int main()
{
    int numero=0;
   cout<<"Ingrese su numero: "<<endl;
   cin>>numero;
   if(numero>0)
   {
       cout<<"Su suma es: "<<sumatoria(numero);
   }
   else
    cout<<"Error";
}

int sumatoria(int numero)
{      
    int sumas=0;
    for (int i=1;i<=numero;i++)
    {
        sumas+=i;
    }
    return sumas;

}