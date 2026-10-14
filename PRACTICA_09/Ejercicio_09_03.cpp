// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 07/10/2026
// Número de ejercicio: 3

#include <iostream>


using namespace std;
void llenar(int matrix[100][100], int n);
void mostrar(int matrix[100][100], int n);

int main()
{
    int n;
    int matrix[100][100];
    cout<<"Ingrese la dimension: "<<endl; cin>>n;
    
    llenar(matrix,n);
    mostrar(matrix,n);
    
    return 0;
}

void llenar(int matrix[100][100], int n)
{
    int elementos=1;
    for (int i=0;i<n;i++)
    {
        
        for (int j=0;j<n;j++)
        {
            matrix[i][j]=elementos;
            elementos+=1;
        }
        elementos=elementos-(n/2)-1;
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
