#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string.h>
//Este el punto numero 8 del taller de Punteros C.
char *palabra;
int numero;
using namespace std;
//char longitud(char cadena){
//	int i=0;
//	while(cadena[i]!='0'){
//		i++;
//	}
//	return i;
//}
int main(){
	void *malloc(size_t size);
	palabra=(char*)malloc(sizeof(char));
	//NO ESTA LISTO 
	cout<<"Digite la palabra: ";
	cin>>*palabra;
	cout<<*palabra;
	
	return 0;
}
