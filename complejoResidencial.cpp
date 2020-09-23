#include <stdio.h>
#include <iostream>
#include <cstdlib>
//Nota el ejercicio lo hice con dos torres, dos pisos y dos departamentos, pero se puede 
//adaptar la cantidad de torres, departamento y pisos que se desea.
int habitantes,promedio,diferentes,torres,pisos,departamentos;
int complejo[2][2][2];
int habitantes_piso[2];

using namespace std;

void llenado();
void busqueda();

int main(){
	habitantes=0,diferentes=0;
	torres=2;
	departamentos=2;
	pisos=2;
	llenado();
	promedio=habitantes/(torres*pisos*departamentos);
	
	cout<<"Este el total de habitantes del complejo es : "<<habitantes<<endl;

	for(int i=0;i<2;i++){
		cout<<"El promedio de las personas de por piso de la torre "<<i+1<<" es de: "<<habitantes_piso[i]<<endl;
	}
	cout<<"Este el promedio de habitantes por torre: "<<habitantes/torres<<endl;
	
	busqueda();
	cout<<"La cantidad de apartamento que tiene un numero de habitantes diferentes al promedio es :"<<diferentes;
	return 0;
}

void llenado()
{	int x=0, promedio_piso=0,promedio_torre=0;

	for(int i=0;i<torres;i++){
		for(int j=0;j<pisos;j++){
			for(int z=0;z<departamentos;z++){
				cout<<"Digite el # de personas en el torre "<<i+1 <<" en el piso "<<j+1<<" en el departamento "<<z+1<<": " ;
				cin>>complejo[i][j][j];
				habitantes+=complejo[i][j][j];
				promedio_piso+=complejo[i][j][j];
				
			}
		}	
		habitantes_piso[x]=promedio_piso/4;
		x++;
		promedio_piso=0;
		
	}
}
void busqueda(){
	for(int i=0;i<torres;i++){
		for(int j=0;j<pisos;j++){
			for(int z=0;z<departamentos;z++){
				if(complejo[i][j][j]!=promedio){
					diferentes++;
				}
			
			}
		}	
		
	}
}
