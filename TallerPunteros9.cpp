#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string.h>
//Este el punto numero 9 del taller de Punteros C.
int *numero1,*numero2,*numero3;
using namespace std;

void cambiar(int *numero1,int *numero2){
	int auxiliar;
	auxiliar=*numero1;
	*numero1=*numero2;
	*numero2=auxiliar;
}
int main(){
	void *malloc(size_t size);
	numero1=(int *)malloc(sizeof(int));
	numero2=(int *)malloc(sizeof(int));
	numero3=(int *)malloc(sizeof(int));
	
	cout<<"Digite el valor para la variable #1: "<<endl;
	cin>>*numero1;
	cout<<"Digite el valor para la variable #2: "<<endl;
	cin>>*numero2;
	cout<<"Digite el valor para la variable #3: "<<endl;
	cin>>*numero3;
	
	cambiar(numero1,numero2);
	cambiar(numero1,numero3);

	cout<<"Este es el numero: "<<*numero1<<endl;
	cout<<"Este es el dos: "<<*numero2<<endl;
	cout<<"Este es el tres: "<<*numero3<<endl;
	
	return 0;
}
