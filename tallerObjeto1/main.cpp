#include <iostream>
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Shape.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Triangulo t1;
	t1.setAncho(2);
	t1.setAlto(3);
	t1.getArea();
	
	Rectangulo r1;
	r1.setAlto(3);
	r1.setAncho(2);
	r1.getArea();
	return 0;
}
