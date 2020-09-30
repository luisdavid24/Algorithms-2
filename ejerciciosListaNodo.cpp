#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;


struct nodo{
	int id;
	char nombre[15];
	int edad;
	char sexo;
	nodo *sgt;
};
	
int main(){
	nodo *cabe=NULL,*nuevo,*recorre;
	int cant,i=1;
	cout<<"Dige la cantidad de nodos ";cin>>cant;
	while(i<=cant){
			nuevo=(nodo*)malloc(sizeof(nodo));
			nuevo->sgt=cabe;
			cout<<"Ingrese el identificacion: ";
			cin>>nuevo->id;
			cout<<"Ingrese el nombre: ";
			cin>>nuevo->nombre;
			cout<<"Ingrese la edad: ";
			cin>>nuevo->edad;
			cout<<"Ingrese el sexo: ";
			cin>>nuevo->sexo;

			cabe=nuevo;
			i++;
	}

	
	recorre=cabe;
	
	while(recorre!=NULL){
		cout<<"Identificacion: "<<recorre->id<<endl;
		cout<<"Nombre: "<<recorre->nombre<<endl;
		cout<<"Edad: "<<recorre->edad<<endl;
		cout<<"Sexo: "<<recorre->sexo<<endl;
		recorre=recorre->sgt;
		cout<<endl;
		
	}
	return 0;
}
