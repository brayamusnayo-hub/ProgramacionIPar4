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
    int numeros=0,suma=0,sumaPar=0,sumaImpar=0,sumaPrimos=0,num_aleatorio=0,max=100,min=1,divisores=0;
    cout<<"Ingrese la cantidad de numeros alatorios para hacer las diferentes sumas:  "; cin>>numeros;
    
    for (int i=1;i<=numeros;i++)
    {
        num_aleatorio=rand()%(max-min+1)+min;
        cout<<num_aleatorio<<endl;
        suma+=num_aleatorio;
        if(num_aleatorio%2==0)
        {
            sumaPar+=num_aleatorio;
        }
        else
        {
            sumaImpar+=num_aleatorio;
        }
        for (int j=1;j<=num_aleatorio;j++) 
        {
            if(num_aleatorio%j==0)
            {
                divisores++;
            }
        }
        if(divisores<=2 && num_aleatorio!=1)
            {
                sumaPrimos+=num_aleatorio;
            }
        
        divisores=0;
        num_aleatorio=0;
    }
    cout<<"La suma de todo es: "<<suma<<"\n"<<"La suma de pares es: "<<sumaPar<<"\n"<<"La suma de impares es: "<<sumaImpar<<"\n"<<"La suma de primos es: "<<sumaPrimos<<endl;
    
    return 0;
}