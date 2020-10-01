#include <iostream>
#include <string.h>
#include <conio.h>
//Este el punto numero 10 del taller de Punteros C.
using namespace std;

char palabra[30];
int vocales,consonates;

void llenado();
void contar(char *);

int main(){
	vocales=0,consonates=0;
	llenado();
	contar(palabra);
	cout<<"Este son el numero de vocales :"<<vocales<<endl;
	cout<<"Este es el numero de consonates: "<<consonates;
	return 0;
}

void llenado(){
	cout<<"Digite su nombre: ";
	cin.getline(palabra,30,'\n');
	strupr(palabra);
}
void contar(char *palabra){
	while(*palabra){
		if(*palabra=='A'or *palabra=='E'or *palabra=='I' or *palabra=='O' or *palabra=='U'){
			vocales++;
		}else{
			consonates++;
		}
		*palabra++;
	}
}
