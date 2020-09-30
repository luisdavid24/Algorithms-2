#include <stdio.h>
#include <iostream>
#include <cstdlib>
//Este el punto numero 3 del taller de Punteros C.

int m=10,*lm;
float fx=300.60006,*lfx;
char cht='z',*lcht;

using namespace std;

int main(){
	lm=&m;
	lfx=&fx;
	lcht=&cht;
	cout<<"Estas son las direcciones: "<<endl;
	cout<<"La direccion de m es: "<<lm<<endl;
	cout<<"La direccion de fx es: "<<lfx<<endl;
	printf("la direccion de memoria de cht es: %c \n",&cht);
	cout<<"direccion de cht: "<<lfx<<endl;
	cout<<endl;
	cout<<"Valores de las variables"<<endl;
	cout<<endl;
	cout<<"Valor correspodiente de m "<<m<<endl;
	cout<<"Valor correspodiente de lfx "<<fx<<endl;
	printf("la direccion de memoria de cht es: %c \n",cht);
	cout<<endl;
	
	
	return 0;
}

