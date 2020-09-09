#include <stdio.h>
#include <iostream>
#include <cstdlib>
//#include <iostream>
using namespace std;

void myProc(int *var1,int var2){
	
	for(int i=0;i<var2;i++){
		cout<<"Valor del arreglo en posicion : "<<i<< " es: "<<*var1<<"\n";
		cout<<"Valor de la dirrecion de memoria en posicion : "<<i<< " es: "<<var1<<"\n";
		var1=var1+1;		
	}
}
int main(){ 
	int var_arr[]={11,22,33,44,55,66,77};
	myProc(var_arr,7);
	
	return 0;
}
