#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
//Este el punto numero 14 del taller de Punteros C.
using namespace std;

struct estudiante{
	char nombre[20];
	char apellido[20];
	float nota;
}estudiante1, *puntero=&estudiante1;

void informacion();
void imprimir(estudiante *);

int main(){
	informacion();	
	imprimir(puntero);
	
	return 0;
}

void informacion(){
	cout<<"Digite el nombre: ";
	cin.getline(puntero->nombre,20,'\n');
	cout<<"Digite su apellido: ";
	cin>>puntero->apellido;
	cout<<"Digite su nota final: ";
	cin>>puntero->nota;
}

void imprimir(estudiante *puntero){
	cout<<"El estudiante "<<puntero->nombre<<" "<<puntero->apellido<<" tuvo la siguiente nota "<<puntero->nota;
}




