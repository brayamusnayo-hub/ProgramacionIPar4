// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 07/10/2026
// Número de ejercicio: 2

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int Aleatorio(int max,int min);
void llenar(int matrix[100][100],int n);
void mostrar(int matrix[100][100], int n);
void suma(int matrix[100][100], int n);
void produc(int matrix[100][100], int n);
void mayorYposi(int matrix[100][100], int n);
void promedio(int matrix[100][100], int n);



int main()
{
    srand(time(0));
    int n;
    int matrix[100][100];
    cout<<"Ingrese su dimension cuadrada: "; cin>>n;
	llenar(matrix,n);
	mostrar(matrix,n);
    suma(matrix,n);
    produc(matrix,n);
    mayorYposi(matrix, n);
    promedio(matrix,n);
	return 0;
}
int Aleatorio(int max,int min)
{
    int num;
    num=rand() % (max - min + 1) + min;
    return num;
}
void llenar(int matrix[100][100], int n)
{
    int max, min;
    cout<<"Ingrese su valor mínimo: ";cin>>min;
    cout<<"Ingrese su valor máximo: ";cin>>max;
    
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            matrix[i][j]=Aleatorio(max,min);
        }
    }
}
void mostrar(int matrix[100][100], int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void suma(int matrix[100][100], int n)
{
    int sumados=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (j=n-1)
            {
                sumados+=matrix[i][j];
            }
        
        }
    }
    cout<<"La suma de la ultima columna es: "<<sumados<<endl;
}
void produc(int matrix[100][100], int n)
{
    int producto=1;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i=n-1)
            {
                producto*=matrix[i][j];
            }
        
        }
    }
    cout<<"La multiplicacion de la ultima fila es: "<<producto<<endl;
}
void mayorYposi(int matrix[100][100], int n)
{   
    int mayor=-1;
    int posF=0,posC=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (mayor<matrix[i][j])
            {
                mayor=matrix[i][j];
                posF=i;
                posC=j;
            }
        
        }
    }
    
    cout<<"El mayor es: "<<mayor<<" Y su posicion es: a"<<posF<<posC<<endl;    
    
}
void promedio(int matrix[100][100], int n)
{
    int suma=0;
    double promedios=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            suma+=matrix[i][j];
        
        }
    }
    promedios=suma/(n*n);
    cout<<"El promedio es: "<<promedios<<endl;      
}





