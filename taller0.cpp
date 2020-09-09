#include <stdio.h>
#include <iostream>
#include <cstdlib>
//Este es el  taller 0 de algoritmos 2
int vector[12];
int radio,lado,menor,vecez;
using namespace std;

void figurasEsfericas(){
	float perimetro=2.0*3.14*radio;
	float area=3.14*radio*radio;
	float volumen=(4*3.14*radio*radio*radio)/3;
	cout<<"El perimetro de la circunferencia es de : "<<perimetro<<endl;
	cout<<"El area de la circunferencia es de : "<<area<<endl; 
	cout<<"El volumen de la circunferencia es de : "<<volumen<<endl; 
}
void figurasCuadradas(){
	float perimetro=lado*4;
	float area=lado*lado;
	float volumen=lado*lado*lado;
	cout<<"El valor del perimetro es de : "<<perimetro<<endl;
	cout<<"El valor del area es de : "<<area<<endl;
	cout<<"El valor del volumen es de "<<volumen<<endl;
}
void llenado(int *vector){
	for(int i=0;i<12;i++)
	{	cout<<"Valor posicion "<<i<<":";
		cin>>vector[i];
	}
	menor=vector[0];
}
void mostrar(int *vector){
	cout<<"Vector inveso: "<<endl;
	for(int i=11;i>=0;i--){
		cout<<"Valor de la posicion "<<i<<": ";
		cout<<vector[i]<<endl;
	}
	for(int i=0;i<12;i++){
		if(menor>vector[i]){
			menor=vector[i];
		}
	}	
	
}
void busqueda(int *vector){
	for(int i=0;i<11;i++){
		if(menor==vector[i]){
			cout<<"El elemento menor se encuentra en la posicion : "<<i<<endl;
			vecez++;
		}
	}
}
void vectorProcedimiento(){
	llenado(vector);
	mostrar(vector);
	cout<<"Este es el menor: "<<menor<<endl;
	busqueda(vector);
	cout<<"El numero de vecez que aparece el menor es : "<<vecez;
}
int main(){ 
//	cout<<"Escriba el valor del radio :";
//	cin>>radio;
//	figurasEsfericas();

//	cout<<"Escriba el valor del lado :";
//	cin>>lado;
//	figurasCuadradas();
	vectorProcedimiento();	

	return 0;
}
