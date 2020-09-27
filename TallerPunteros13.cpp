#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string.h>
//Este el punto numero 13 del taller de Punteros C.
int *vector,n;
using namespace std;

void llenar(int *vector,int n);
void mostrar(int *vector,int n);

int main(){
	cout<<"Digite el numero de elemento de vectores: ";
	cin>>n;
	vector= new int[n];
	llenar(vector,n);
	mostrar(vector,n);
	return 0;
}

void llenar(int *vector,int n){
	for(int i=0;i<n;i++){
		cout<<"Digite el valor en la posicion ["<<i<<"]: ";
		cin>>vector[i];
	}
}
void mostar(int *vector,int n){
	for(int i=n;i>0;i--){
		cout<<"El valor de la posicion" <<i<<" "<<vector[i];
	}
}
