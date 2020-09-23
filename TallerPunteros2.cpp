#include <stdio.h>
#include <iostream>
#include <cstdlib>
//Este el punto numero 2 del taller de Punteros C.
int m=29,*b;
using namespace std;

int main(){
	cout<<"La direcion de m es: "<<&m<<endl;
	cout<<"El valor de m es: "<<m;
	b=&m;
	
	cout<<"Direccion del punto b es : "<<b<<endl;
	cout<<"El valor de b es de: "<<*b<<endl;
	cout<<endl;
	
	m=34;
	cout<<"Direccion del punto b es : "<<b<<endl;
	cout<<"El valor de b es de: "<<*b<<endl;
	cout<<endl;
	*b=7;
	cout<<"La direccion de m es: "<<&m<<endl;
	cout<<"El valor de m es "<<m<<endl;
	
	return 0;
}
