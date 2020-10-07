#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<iostream>
using namespace std;
struct nodo{
	int info;
	nodo *sgt;
};
nodo *cabe=NULL;
void menu(void);
void insertar_ordenadamente(void);
nodo *buscar_donde(nodo *lista,int dato);
void insertar(nodo *lista,nodo *posicion,int dato);
void recorrer(nodo *lista);

main(){
	menu();
}
void menu(void){
	int opc;
	do{
		cout<<"\t1 - Insertar datos Ordenadamente\n";
		cout<<"\t2 - Mostrar todos los datos\n";
		cout<<"\t0 - Finalizar\n";
		cout<<"\nSeleccione opcion: ";
		cin>>opc;
	switch(opc){
		case 0: cout<<"\n\nFinaliza y vacia la memoria";
 			getch();
 			exit(0);
		case 1:
			insertar_ordenadamente();
			break;
		case 2: recorrer(cabe);
			break;
		default: cout<<"\n\nOPCION NO VALIDA!!";
			getch();
		}
	}while(opc);
}
void insertar_ordenadamente(void){
	int cant,da;
	int i=1;
	cout<<"Digite la cantidad de nodos: ";
	cin>>cant;
	while (i<=cant){
		cout<<"Ingrese el dato: ";
		cin>>da;
		nodo *y;
		y=buscar_donde(cabe,da);
		insertar(cabe,y,da);
		i++;
	}
	cout<<"\n Los datos fueron igresados correctamente";
	system("pause>>null");
}

nodo *buscar_donde(nodo *lista,int dato){
	nodo *p=lista,*y=NULL;
	while(p!=NULL && p->info < dato){
		y=p;
		p=p->sgt;
	}
	return y;
}

void insertar(nodo *lista,nodo *posicion,int dato){
	nodo *nuevo=NULL;
	nuevo=(nodo *)malloc(sizeof(nodo));
	nuevo->info=dato;
	nuevo->sgt=NULL;
	if (posicion==NULL){
		nuevo->sgt=lista;
		cabe=nuevo;
	}else{
		nuevo->sgt=posicion->sgt;
		posicion->sgt=nuevo;
	}
}
void recorrer(nodo *lista){
	if (lista==0) {
		cout<<"\nLista Vacia!!\n";
	}
	else {
		nodo *recorre;
		recorre=lista;
		while(recorre!=0){
			cout<<"\nPosicion= "<<recorre;
			cout<<"\nDato= "<<recorre->info;
			cout<<"\nApunta a= "<<recorre->sgt;
			recorre=recorre->sgt;
		}
	}
}
