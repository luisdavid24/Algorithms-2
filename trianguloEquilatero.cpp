#include <stdio.h>
#include <iostream>
#include <cstdlib>

int numero;

using namespace std;

void mostrar(char *vector,int numero)
{	for(int i=0;i<numero;i++)
	{	cout<<vector[i];
	}
	cout<<endl;
	
}
void llenado(int numero,char *vector){
	for(int i=0;i<numero;i++){
		vector[i]='*';
		mostrar(vector,(i+1));
	}
}
int main(){ 
	cout<<"Digite el numero de * de la base: ";
	cin>>numero;
	char vector[numero];
	llenado(numero,vector);
	return 0;
}
