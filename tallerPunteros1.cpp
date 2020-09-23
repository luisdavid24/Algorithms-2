#include <stdio.h>
#include <iostream>
#include <cstdlib>
//Este el punto numero 1 del taller de Punteros C.
int m=10,n,o,*z;
using namespace std;

int main(){

	z=&m;
	
	cout<<"La direccion de z es:  "<<z<<endl;
	cout<<"La direccion de n es: "<<&n<<endl;
	cout<<"La direccion de o es: "<<&o<<endl;
	cout<<"La direccion de m es: "<<&m<<endl;
	cout<<"El valor de m es de: "<<*z<<endl;
	cout<<"La direccion de z es: "<<&z<<endl;
	return 0;
}
