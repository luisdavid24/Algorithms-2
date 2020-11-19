#include <iostream>
#include "Animal.h"
#include "Cebra.h"
#include "Delfin.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Cebra c1;
	c1.setEdad(2);
	c1.setNombre("juan");
	c1.setLugar("kk");
	c1.setMensaje();
	
	
	Delfin d1;
	d1.setColor("Rojo");
	d1.setEdad(3);
	d1.setNombre("Pepe");
	d1.setMensaje();
	return 0;
}
