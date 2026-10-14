// Materia: Programación I, Paralelo 4
// Autor: Brayam Usnayo Apaza
// Fecha creación: 07/10/2026
// Número de ejercicio: 1

#include <iostream>
using namespace std;
void llenar( int n, string matrix[100][100]);
void cambio(string matrix[100][100], int n);
int main()
{
	int n;
	string matrix[100][100];
	cout<<"De qué dimensión será tu matriz? : "<<endl;
	cin>>n;
	llenar(n,matrix);
	for (int i=0;i<n;i++)
	    {
	        for (int j=0;j<n;j++)
	        {
	            cout<<matrix[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	cout<<"EL CAMBIO ES ESTE: "<<endl;
	cambio(matrix,n);
    for (int i=0;i<n;i++)
	    {
	        for (int j=0;j<n;j++)
	        {
	            cout<<matrix[i][j]<<" ";
	        }
	        cout<<endl;
	    }

	return 0;
}
void llenar(int n, string matrix[100][100])
{
    cin.ignore();
	cout<<"A CONTINUACIÓN LLENARÁ SU MATRIZ: "<<endl;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cout<<"Elemento a"<<i<<""<<j<<": ";
		    getline(cin, matrix[i][j]);

		}
		
	}
}
void cambio(string matrix[100][100], int n)
{
    for (int j=0;j<n;j++)
    {
        string temp = matrix[0][j];
        matrix[0][j] = matrix[n - 1][j];
        matrix[n - 1][j] = temp;
    }
}




