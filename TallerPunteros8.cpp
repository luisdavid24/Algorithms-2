#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string.h>
//Este el punto numero 8 del taller de Punteros C.
char palabra[60];
int *numero;
using namespace std;

int main(){
	cout<<"Digite la palabra: ";
	cin>>palabra;
	numero=(int *)malloc(sizeof(int));
	*numero=strlen(palabra);
	cout<<"La longitud de la cadena "<<palabra<<endl;
	cout<<"Es "<<*numero;
	return 0;
}
