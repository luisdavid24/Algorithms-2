#include <stdio.h>
#include <iostream>
#include <cstdlib>
//Este el punto numero 4 del taller de Punteros C.
int numero1,numero2;
int *puntero1,*puntero2;
using namespace std;

int main(){
	numero1=5;
	numero2=6;
	
	puntero1=&numero1;
	puntero2=&numero2;
	
	cout<<"La suma  de los numeros ingresados es: "<<*puntero1+*puntero2;
	return 0;
}
