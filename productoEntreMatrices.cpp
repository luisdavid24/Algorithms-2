#include <stdio.h>
#include <iostream>
#include <cstdlib>
int **matriz1, **matriz2, matriz3,filas,columnas;
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
float multiplicacion()
{
	
}	
int main(){
	columnas=2; 
	filas=2;
	
	cout<<"Matriz 1: "<<endl; 	
	llenado(matriz1);
	
	cout<<"MAtriz 2: "<<endl;
	llenado(matriz2);
	matriz3=multiplicacion();
	return 0;
}
