#include <stdio.h>
#include <iostream>
#include <cstdlib>
//Este el punto numero 3 del taller de Punteros C.

int m=10;
float fx=300.60006;
char cht='z';

using namespace std;

int main(){
	cout<<"La direccion de m es: "<<&m<<endl;
//	printf("La direccion de m es %i &m");
	cout<<"La direccion de fx es: "<<&fx<<endl;
	printf("la direccion de memoria de cht es: %p \n", &cht);
	
	return 0;
}
//ESTE NO ESTA TERMINADO. 
