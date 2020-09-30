#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

//1. defino la estructura nodo
struct nodo{
	int dato;
	nodo *liga;
};
//defino la funcion
nodo *crearnodo(int x,nodo *enlace){
	nodo *p;
	p=(nodo *)malloc(sizeof(nodo));
	p->dato=x;
	p->liga=enlace;
	return p;
}
	
int main(){
	nodo *primero,*recorre;
	int elemento,cant,i=1;
	
	cout<<"Dige la cantidad de nodos ";cin>>cant;
	while(i<=cant){
			if(i==1){
				cout<<"Digite el elemento "<<cant-i+1<<" de la lista";
				cin>>elemento;
				primero=crearnodo(elemento,NULL);
			}else{
				cout<<"Digite el elemento "<<cant-i+1<<" de la lista";
				cin>>elemento;
				primero=crearnodo(elemento,primero);
				
			}
			i++;
	}
	
	
	recorre=primero;
	while(recorre!=NULL){
		cout<<"Posicion: "<<recorre<<endl;
		cout<<"Dato: "<<recorre->dato<<endl;
		cout<<"Hacia donde apunta: "<<recorre->liga;
		recorre=recorre->liga;
		cout<<endl;
		
	}
	
	
	
	
	return 0;
}
