#include <iostream>
#include "Rectangulo.h"
#include "Triangulo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	Rectangulo r1;
	r1.setAncho(5);
	r1.setAlto(6);
	cout<<"El area del rectangulo R1 es "<<r1.getArea()<<endl;
	
	Triangulo t1;
	t1.setAncho(5);
	t1.setAlto(6);
	cout<<"El area del triangulo T1 es "<<t1.getArea()<<endl;
	return 0;
}
