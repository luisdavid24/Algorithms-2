#include <stdio.h>
#include <iostream>
#include <cstdlib>
//Este el punto numero 15 del taller de Punteros C.
using namespace std;
int tamano;
char *palabras[]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
int main(){
	tamano=sizeof(palabras)/sizeof(char *);
	
	cout<<"este es el alfabeto "<<endl;
	for(int i=0;i<tamano;i++){
		printf("%s",palabras[i]);
	}
	return 0;
}
