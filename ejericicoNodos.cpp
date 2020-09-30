#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

//1. defino la estructura nodo
struct nodo{
	char info;
	nodo *sgt;
};
	
int main(){
	nodo *cabe=NULL,*nuevo,*recorre;
	int cant,i=1;
	cout<<"Dige la cantidad de nodos ";cin>>cant;
	while(i<=cant){
			nuevo=(nodo*)malloc(sizeof(nodo));
			nuevo->sgt=cabe;
			cout<<"Ingrese el dato: ";
			cin>>nuevo->info;
			cabe=nuevo;
			i++;
	}
	cout<<"Cabecera: "<<cabe<<endl;
	cout<<"Nuevo:" <<nuevo<<endl;
	
	recorre=cabe;
	while(recorre!=NULL){
		cout<<"Posicion: "<<recorre<<endl;
		cout<<"Dato: "<<recorre->info<<endl;
		cout<<"Hacia donde apunta: "<<recorre->sgt;
		recorre=recorre->sgt;
		cout<<endl;
		
	}
	
	
	
//	cabe =(nodo*)malloc(sizeof(nodo));
//	
//	cabe->info='a';
//	cabe->sgt=NULL;
//	cout<<cabe<<endl;
//	cout<<&cabe<<endl;
//	cout<<cabe->info;
	
	return 0;
}
