#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string.h>
//Este el punto numero 11 del taller de Punteros C.
using namespace std;
int *numero1,*numero2,*numero3;
int comparacion(int *numero1,int *numero2){
	if(*numero1>*numero2){
		return *numero1;
	}else{
		return *numero2;
	}
	
	
}

int main(){
	void *malloc(size_t size);
	numero1=(int *)malloc(sizeof(int));
	numero2=(int *)malloc(sizeof(int));
	numero3=(int *)malloc(sizeof(int));
	
	cout<<"Digite el valor para la variable #1: "<<endl;
	cin>>*numero1;
	cout<<"Digite el valor para la variable #2: "<<endl;
	cin>>*numero2;
	
	cout<<"El numero "<<comparacion(numero1,numero2)<<" es mas grande";
	
	return 0;
}
