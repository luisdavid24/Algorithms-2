#include <stdio.h>
#include <iostream>
#include <cstdlib>
//Este es el  taller 0 de algoritmos 2
int radio,lado;
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
int main(){ 
//	cout<<"Escriba el valor del radio :";
//	cin>>radio;
//	figurasEsfericas();
	cout<<"Escriba el valor del lado :";
	cin>>lado;
	figurasCuadradas();
	

	return 0;
}
