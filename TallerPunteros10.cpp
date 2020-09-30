#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string.h>
//Este el punto numero 10 del taller de Punteros C.
char *vocales[]={"A","E","I","O","U"};
char *consonates[]={"B","C","D","F","G","H","J","K","L","M","N","Ñ","P","Q","R","S","T","V","W","X","Y","Z"};
char palabra[20];
using namespace std;

int main(){
//	palabra=(char *)malloc(sizeof(char));
	cout<<"Digite el numero de elemento de la palabra: ";
	cin>>palabra;
	cout<<palabra;
	
	return 0;
}
