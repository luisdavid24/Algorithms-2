#include <stdio.h>
#include <iostream>
#include <cstdlib>
//Este el punto numero 7 del taller de Punteros C.
int *vector;
int n;
using namespace std;

void llenar(int n,int *vector)
{	for(int i=0;i<n;i++)
	{	
		cout<<"Digite el elemento de la posicion: ["<<i<<"]: ";
		cin>>vector[i];
	}
	
}
void mostrar(int n,int *vector)
{
	for(int i=0;i<n;i++)
	{	
		cout<<"El elemento de que esta en la posicion ["<<i<<"] es: "<<vector[i];
		cout<<endl;
	}
}
int main(){
	cout<<"Escriba la cantidad de elemento del vector: ";
	cin>>n;
	vector=new int(n);
	llenar(n,vector);
	mostrar(n,vector);	
	return 0;
}


