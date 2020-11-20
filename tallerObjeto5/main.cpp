#include <iostream>
#include "Point.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	Point p1;
	p1.setX(3);
	p1.setY(4);
	p1.getArgument();
	cout<<endl;
	p1.getManitude();
	cout<<endl;
	p1.print();
	return 0;
}
