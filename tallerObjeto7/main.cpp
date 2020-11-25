#include <iostream>
#include <iomanip>
#include "Ball.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Ball b1;
	b1.setX(0);
	b1.setY(3.9);
	b1.setXSpeed(2.0);
	b1.setXY(2,4);
	b1.setXYSpeed(6.2212,4.222);
	b1.move(2,4);
	b1.print();
	
	return 0;
}
