#include <stdio.h>
#include <iostream>
#include <cstdlib>
//Este el punto numero 14 del taller de Punteros C.
using namespace std;
struct estudiante{
	char nombre[20];
	char apellido[20];
	float nota;

};

void llenar(estudiante *estudiante1);

int main(){
	estudiante *estudiante1;
	llenar(estudiante1);	
	return 0;
}

void llenar(estudiante *estudiante1){
	cout<<"Digite el nombre del estudiante: ";
	cin>>estudiante1->nombre<<endl;
	cout<<"Digite el apellido del estudiante: ";
	cin>>estudiante1->apellido<<endl;
	cout<<"Digite el nota del estudiante: ";
	cin>>estudiante1->nota<<endl;
	
}
