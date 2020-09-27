#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string.h>
//Este el punto numero 12 del taller de Punteros C.
using namespace std;
int *vector,*total;
int n;
void llenar(int *vector,int n);
void suma(int *vector,int n ,int *total);

int main(){
	void *malloc(size_t size);
	total=(int *)malloc(sizeof(int));
	*total=0;
	
	cout<<"Digite el numero de elementos del vector (max 10): ";
	cin>>n;
	vector=new int[n];
	llenar(vector,n);
	suma(vector,n,total);
	
	cout<<"La suma de todo los elemento es: "<<*total;
	return 0;
}

void llenar(int *vector,int){
	for(int i=0;i<n;i++){
		cout<<"Digite el valor para la posicion ["<<i<<"]: ";
		cin>>vector[i];
	}
	
}
void suma(int *vector,int n ,int *total){
	for(int i=0;i<n;i++){
		*total+=vector[i];
	}
}
