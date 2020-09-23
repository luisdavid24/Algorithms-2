#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;


int main(){ 	
	void *malloc(size_t size);
	float *puntero1,*puntero2;
	
	cout<<"Direccion del puntero 1: "<<&puntero1<<endl;
	cout<<"Direccion del puntero 2: "<<&puntero2<<endl;
	cout<<"Puntero 1 a punta a : "<<puntero1<<endl;
	cout<<"Puntero 2 a punta a : "<<puntero2<<endl;
	
	//asginamos los puntero
	puntero1=(float *)malloc(sizeof(float));
	puntero2=(float *)malloc(sizeof(float));
	cout<<"Luego de la asignacion "<<endl;
	cout<<"Direccion del puntero 1: "<<&puntero1<<endl;
	cout<<"Direccion del puntero 2: "<<&puntero2<<endl;
	cout<<"Puntero 1 a punta a : "<<puntero1<<endl;
	cout<<"Puntero 2 a punta a : "<<puntero2<<endl;
	
	*puntero1=99.9;
	*puntero2=-33.3;
	cout<<"Luego de poner los valor "<<endl;
	cout<<"Direccion del puntero 1: "<<&puntero1<<endl;
	cout<<"Direccion del puntero 2: "<<&puntero2<<endl;
	cout<<"Puntero 1 a punta a : "<<puntero1<<endl;
	cout<<"Puntero 2 a punta a : "<<puntero2<<endl;
	cout<<"puntero 1 contenido "<<*puntero1<<endl;
	cout<<"puntero 2 contenido "<<*puntero2<<endl;
	
	*puntero1=*puntero2;
	cout<<"Luego de poner unir *puntero "<<endl;
	cout<<"Direccion del puntero 1: "<<&puntero1<<endl;
	cout<<"Direccion del puntero 2: "<<&puntero2<<endl;
	cout<<"Puntero 1 a punta a : "<<puntero1<<endl;
	cout<<"Puntero 2 a punta a : "<<puntero2<<endl;
	cout<<"puntero 1 contenido "<<*puntero1<<endl;
	cout<<"puntero 2 contenido "<<*puntero2<<endl;
	cout<<endl;
	
	puntero1=puntero2;
	cout<<"Luego de poner unir puntero "<<endl;
	cout<<"Direccion del puntero 1: "<<&puntero1<<endl;
	cout<<"Direccion del puntero 2: "<<&puntero2<<endl;
	cout<<"Puntero 1 a punta a : "<<puntero1<<endl;
	cout<<"Puntero 2 a punta a : "<<puntero2<<endl;
	cout<<"puntero 1 contenido "<<*puntero1<<endl;
	cout<<"puntero 2 contenido "<<*puntero2<<endl;
	cout<<endl;
	free(puntero2);
	
	cout<<"Direccion del puntero 1: "<<&puntero1<<endl;
	cout<<"Direccion del puntero 2: "<<&puntero2<<endl;
	cout<<"Puntero 1 a punta a : "<<puntero1<<endl;
	cout<<"Puntero 2 a punta a : "<<puntero2<<endl;
	cout<<endl;
	*puntero1=940;
	cout<<"Direccion del puntero 1: "<<&puntero1<<endl;
	cout<<"Direccion del puntero 2: "<<&puntero2<<endl;
	cout<<"Puntero 1 a punta a : "<<puntero1<<endl;
	cout<<"Puntero 2 a punta a : "<<puntero2<<endl;
	cout<<"Puntero 1, contenido del puntero1: "<<*puntero1;
	return 0;
	
	
}
