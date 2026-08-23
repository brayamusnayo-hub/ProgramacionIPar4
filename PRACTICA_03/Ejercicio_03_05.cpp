// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Carrera del estudiante: Ingenieria de Sistemas
// Fecha creación: 21/08/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));  
        int num_aleatorio=0,numero_usuario=101,contador=1,min=1,max=100;
        
        num_aleatorio=rand()%(max-min+1)+min;
        cout<<"---------------------Intente adivinar el numero: -----------------------\n"<<"Adivine: ";
        while(num_aleatorio!=numero_usuario)
        {
            cout<<"Intento "<<contador<<": "; cin>>numero_usuario;
            if(numero_usuario<num_aleatorio)
            {
                cout<<"Es mayor, siga intentando, ";
            }
            else if(numero_usuario>num_aleatorio)
            {
                cout<<"Es menor, siga intentando, ";
            }
            contador++;
        }
        cout<<"Felicidades, lo adivinaste,"<<" Tuviste "<<contador<<" intentos";
    
    return 0;
}