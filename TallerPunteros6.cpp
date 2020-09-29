#include <stdio.h>
#include <iostream>
#include <cstdlib>
//Este el punto numero 6 del taller de Punteros C.
using namespace std;
int *numero1,*numero2,numero3;
int comparacion(int *numero1,int *numero2){
	if(numero1>numero2){
		return *numero1;
	}else{
		return *numero2;
	}
}

int main(){
	void *malloc(size_t size);
	numero1=(int *)malloc(sizeof(int));
	numero2=(int *)malloc(sizeof(int));
	
	cout<<"Digite el valor de numero1: ";
	cin>>*numero1;
	cout<<"Digite el valor de numero2: ";
	cin>>*numero2;
	
	numero3=comparacion(numero1,numero2);
	cout<<numero3<<" el el numero maximo";
		
	return 0;
}


