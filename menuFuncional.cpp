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
void recorrer(nodo *lista,int n);
void eliminar(nodo *&lista,int n,int condicion);
void insertar_al_final();
void ordenarAsecendentemente(nodo *lista);
void ordenarDesedente(nodo *lista);
void liberarLista(nodo *&lista);
void eliminarRepetidos(nodo *&lista);
void buscarUnDato(nodo *lista);
void insertar_al_inicio(nodo *&lista);
int veces(nodo *lista,int num,int n);


main(){
	menu();
}

void menu(void){
	int opc,numero;
	do{
		cout<<endl;
		cout<<"\t1 - Insertar datos al final  \n";
		cout<<"\t2 - Insertar siempre al principio \n"; 
		cout<<"\t3 - Insertar datos Ordenadamente\n";
		cout<<"\t4 - Borrar datos \n";
		cout<<"\t5 - Eliminar  datos repetidos\n";
		cout<<"\t6 - Liberar lista \n";
		cout<<"\t7 - Mostrar Lista\n";
		cout<<"\t8 - Mostrar lista con detalles \n";
		cout<<"\t9 - Buscar dato\n";
		cout<<"\t10 - Ordenar la lista  ascendentemente\n";
		cout<<"\t11 - Ordenar la lista descendentemente\n";
		cout<<"\t0 - Finalizar\n";
		cout<<"\nSeleccione opcion: ";
		cin>>opc;
	switch(opc){
		case 0: cout<<"\n\nFinaliza y vacia la memoria";
 			getch();
 			exit(0);
		case 1:
			insertar_al_final();
			break;
		case 2:
			insertar_al_inicio(cabe);
			break;
		case 3:
			insertar_ordenadamente();
			break;
 		case 4: 
			cout<<"Digite el valor a eliminar";
			cin>>numero;
			eliminar(cabe,numero,1);
			break;
		case 5:
			eliminarRepetidos(cabe);
			break;
			
		case 6: 
			while(cabe!=NULL){
				liberarLista(cabe);	
			}
			break;
		case 7:
			recorrer(cabe,1);
			break;
		case 8: 
			recorrer(cabe,2);
			break;
		case 9:
			buscarUnDato(cabe);
			break;
			
		case 10:
			ordenarAsecendentemente(cabe);
			break;
		case 11:
			ordenarDesedente(cabe);
			break;
		default: 
			cout<<"\n\nOPCION NO VALIDA!!";
			getch();
		}
	}while(opc);
}
void insertar_al_inicio(nodo *&lista){
	if(lista==NULL){
		int cantidad,i=1;
		cout<<"Digite la cantidad de elementos: ";
		cin>>cantidad;
		while(i<=cantidad){
			int num1;
			cout<<"Digite el valor: ";
			cin>>num1;
			insertar(lista,0,num1);
			i++;
		}
	}else{
		cout<<"La lista no estaba vacia\n";
	}
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
void recorrer(nodo *lista,int n){
	if (lista==0) {
		cout<<"\nLista Vacia!!\n";
	}
	else {
		nodo *recorre;
		recorre=lista;
		while(recorre!=0){
			if(n==1){
				cout<<"\nDato= "<<recorre->info;	
			}
			if(n==2){
				cout<<"\nPosicion= "<<recorre;
				cout<<"\nDato= "<<recorre->info;
				cout<<"\nApunta a= "<<recorre->sgt;
			}
			
			recorre=recorre->sgt;
		}
	}
}

void eliminar(nodo *&lista,int n,int condicion){
	if(lista!=NULL){
		nodo *aux_borrar;
		nodo *anterior = NULL;
		aux_borrar = lista;
		while((aux_borrar != NULL)&&(aux_borrar->info !=n)){
			anterior=aux_borrar;
			aux_borrar=aux_borrar->sgt;
		}
		if(condicion==1){
			if(aux_borrar ==NULL){
			cout<<"El elemento no existe";
		}else if(anterior==NULL){
			lista=lista->sgt;
			delete aux_borrar;
		}else{
			anterior->sgt =aux_borrar->sgt;
			delete aux_borrar;
		}	
		}else{
			if(aux_borrar ==NULL){
				cout<<" ";
			}else if(anterior==NULL){
				lista=lista->sgt;
				delete aux_borrar;
			}else{
				anterior->sgt =aux_borrar->sgt;
				delete aux_borrar;
			}
		}
		
		
	}
}


void eliminarRepetidos(nodo *&lista){
	if(lista!=NULL){
			int n,aux,i=0;
			cout<<"Digita el valor que quieres eliminar: ";
			cin>>aux;
			n=veces(lista,aux,n);
			while(i<=n){
				eliminar(*&lista,aux,0);
				i++;
			}	
	}else{
		cout<<"Lista vacia"<<endl;
	}
}

int veces(nodo *lista,int num,int n){
	while(lista!=NULL){
		if(lista->info==num){
			n++;
		}
		lista=lista->sgt;
	}
	return n;
}
nodo *ultimo(nodo *lista){
	nodo *p=lista;
	if(lista==NULL){
		return 0;
	}
	while(p->sgt!=NULL){
		p=p->sgt;
	}
	return p;

}

void insertar_al_final(){
	int cant,da;
	int i=1;
	cout<<"Digite la cantidad de nodos: ";
	cin>>cant;
	while (i<=cant){
		cout<<"Ingrese el dato: ";
		cin>>da;
		nodo *y;
		y=ultimo(cabe);
		insertar(cabe,y,da);
		i++;
	}
	cout<<"\n Los datos fueron igresados correctamente";
	system("pause>>null");
}
void ordenarAsecendentemente(nodo *lista){
	if(lista!=NULL){
		nodo *p=lista,*q;
		int aux;
		while(p->sgt!=NULL){
			q=p->sgt;
			while(q!=NULL){
				if(p->info>q->info){
					aux=p->info;
					p->info=q->info;	
					q->info=aux;
				}
				q=q->sgt;
			}	
			
			p=p->sgt;
		}
		cout<<"\n Los datos fueron ordenados correctamente\n";
	}else{
		cout<<"\n La lista vacia no se puede ordenar \n";
	}
}

void ordenarDesedente(nodo *lista){
	if(lista!=NULL){
		nodo *p=lista,*q;
		int aux;
		while(p->sgt!=NULL){
			q=p->sgt;
			while(q!=NULL){
					if(p->info < q->info){
						aux=p->info;
						p->info=q->info;	
						q->info=aux;
					}
					q=q->sgt;
			}
			
			p=p->sgt;
		}
		cout<<"\n Los datos fueron ordenados correctamente\n";
	}else{
		cout<<"\n La lista vacia no se puede ordenar \n";
	}
}

void liberarLista(nodo *&lista){
	nodo *aux=lista;
	lista=aux->sgt;
	delete aux;
}
void buscarUnDato(nodo *lista){
	if(lista!=NULL){
		int numero,condicion=0;
		cout<<"Digite el elemento que buscas :";
		cin>>numero;
		while(lista!=NULL and condicion==0){
			if(lista->info==numero)
			{	cout<<"\nPosicion= "<<lista;
				cout<<"\nDato= "<<lista->info;
				cout<<"\nApunta a= "<<lista->sgt;
				condicion=3;
			}
			lista=lista->sgt;
		}
		if(condicion=0){
			cout<<"No se encontro el elemento\n";
		}
	}else{
		cout<<"Lista vacia"<<endl;
	}
}
