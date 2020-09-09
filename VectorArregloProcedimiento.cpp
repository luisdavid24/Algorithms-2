#include <stdio.h>
#include <iostream>
#include <cstdlib>
int vector[12];
int menor,vecez;
using namespace std;

void llenado(int *vector){
	for(int i=0;i<12;i++)
	{	cout<<"Valor posicion "<<i<<":";
		cin>>vector[i];
	}
	menor=vector[0];
}
void mostrar(int *vector){
	cout<<"Vector inveso: "<<endl;
	for(int i=11;i>=0;i--){
		cout<<"Valor de la posicion "<<i<<": ";
		cout<<vector[i]<<endl;
	}
	for(int i=0;i<12;i++){
		if(menor>vector[i]){
			menor=vector[i];
		}
	}	
	
}
void busqueda(int *vector){
	for(int i=0;i<11;i++){
		if(menor==vector[i]){
			cout<<"El elemento menor se encuentra en la posicion : "<<i<<endl;
			vecez++;
		}
	}
}
int main(){ 
	llenado(vector);
	mostrar(vector);
	cout<<"Este es el menor: "<<menor<<endl;
	busqueda(vector);
	cout<<"El numero de vecez que aparece el menor es : "<<vecez;
	return 0;
}
