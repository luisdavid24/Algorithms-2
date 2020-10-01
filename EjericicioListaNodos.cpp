#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

struct nodo{
	int id;
	char nombre[20];
	int edad;
	char sexo;
	nodo *liga;
};

nodo *crearnodo(int id,int edad,char sexo,char nombre[20],nodo *enlace){
	nodo *p;
	p=(nodo *)malloc(sizeof(nodo));
	p->id=id;
	p->edad=edad;
	p->sexo=sexo;
	p->nombre[20]=nombre[20];
	p->liga=enlace;
	return p;
}
	
int main(){
	nodo *primero,*recorre;
	int id,cant,i=1,edad;
	char sexo,nombre[20];
	cout<<"Dige la cantidad de nodos ";cin>>cant;
	
	while(i<=cant){
			if(i==1){
				cout<<"Vamos a a llenar la info del estudiante "<<cant-i+1<<endl;
				cout<<"Digite el di:  ";
				cin>>id;
				cout<<"Digite la edad de estudiante: "<<endl;
				cin>>edad;
				cout<<"Digite el sexo del estudiante femenino (f) o masculino (m): "<<endl;
				cin>>sexo;
				cout<<"Digite el nombre del estudiante: "<<endl;
				cin>>nombre[20];
				primero=crearnodo(id,edad,sexo,nombre,NULL);
			}else{
				cout<<"Vamos a a llenar la info del estudiante "<<cant-i+1<<endl;
				cout<<"Digite el di:  ";
				cin>>id;
				cout<<"Digite la edad de estudiante: "<<endl;
				cin>>edad;
				cout<<"Digite el sexo del estudiante femenino (f) o masculino (m): "<<endl;
				cin>>sexo;
				cout<<"Digite el nombre del estudiante: "<<endl;
				cin>>nombre[20];
				primero=crearnodo(id,edad,sexo,nombre,primero);
			}
			i++;
	}
	
	recorre=primero;
	
	while(recorre!=NULL){
		cout<<"ID: "<<recorre->id<<endl;
		cout<<"Edad: "<<recorre->edad<<endl;
		cout<<"Sexo: "<<recorre->sexo<<endl;
		cout<<"Nombre "<<recorre->nombre[20]<<endl;
		recorre=recorre->liga;
		cout<<endl;
		
	}
	
	return 0;
}
