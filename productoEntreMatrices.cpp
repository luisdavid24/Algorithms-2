#include <stdio.h>
#include <iostream>
#include <cstdlib>
int **matriz1, **matriz2, **matriz3,filas,columnas;
using namespace std;

int llenado(int **matriz)
{	matriz=new int*[filas];
	for(int i=0;i<filas;i++)
	{	matriz[i]=new int[columnas];
	}
	for (int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"\nDigite un numero en la fila ["<<i<<"] columna ["<<j<<"]: ";
			cin>>*(*(matriz+i)+j);
		}
	}
	
}
void multiplicacion(int **matriz1,int **matriz2,int **matriz3)
{
	matriz3 =new int*[3];
	for(int i=0;i<3;i++)
	{
		matriz3[i]=new int[3];
	}
	for (int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				*(*(matriz3+i)+j)=0;
			}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int z=0;z<3;z++){
				*(*(matriz3+i)+j)+=(*(*(matriz1+i)+z)) * (*(*(matriz2+z)+j));
			}
		}
	}
}
//void mostrar(int **matriz)
//{	for (int i=0;i<filas;i++){
//		cout<<"\n"<<"\t";
//		for (int j=0;j<columnas;j++){
//			cout<<"\t"<<*(*(matriz+i)+j); 
//		}
//	}
//	
//}
int main(){
	columnas=2; 
	filas=2;
	
	cout<<"Matriz 1: "<<endl; 	
	llenado(matriz1);
	
	cout<<"MAtriz 2: "<<endl;
	llenado(matriz2);
	
//	multiplicacion(matriz1,matriz2,matriz3);
	
//	mostrar(matriz3);
	return 0;
}
