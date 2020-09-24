#include <stdio.h>
#include <iostream>
#include <cstdlib>
//Este el punto numero 6 del taller de Punteros C.
int numero1,numero2;

using namespace std;

void operacion(int&,int&);

int main(){
	numero1=5;
	numero2=6;
	operacion(numero1,numero2);	
		
	return 0;
}

void operacion(int& numero1,int& numero2){
	cout<<"La suma de los numeros es: "<<numero1+numero2;
}
