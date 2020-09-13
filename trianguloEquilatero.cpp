#include <stdio.h>
#include <iostream>
#include <cstdlib>

int numero;

using namespace std;

void mostrar(int *vector,int numero)
{	for(int i=0;i<numero;i++)
	{	cout<<vector[i];
	}
	cout<<endl;
	
}
void llenado(int numero,int *vector){
	for(int i=0;i<numero;i++){
		vector[i]=1;
		mostrar(vector,(i+1));
	}
}
int main(){ 
	cout<<"Digite el numero de * de la base: ";
	cin>>numero;
	int vector[numero];
	llenado(numero,vector);
	return 0;
}
