#include <iostream>
#include "circle.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	circle c1(1.2,"verde");
	cout<<"El circulo c1 tiene un radio de: "<<c1.getRadius()<<" un color: "<<c1.getColor()<<endl;
	cout<<"y se le calculo un area de: "<<c1.getArea()<<endl;
	
	c1.setRadius(3.0);
	cout<<"El circulo c1 tiene un radio de: "<<c1.getRadius()<<" un color: "<<c1.getColor()<<endl;
	cout<<"y se le calculo un area de: "<<c1.getArea()<<endl;
	
	c1.setColor("Morado");
	cout<<"El circulo c1 tiene un radio de: "<<c1.getRadius()<<" un color ahora : "<<c1.getColor()<<endl;
	cout<<"y se le calculo un area de: "<<c1.getArea()<<endl;
	
	
	return 0;
}
