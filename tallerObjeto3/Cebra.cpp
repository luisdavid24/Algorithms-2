#include "Cebra.h"
#include <iostream>
using namespace std;

void Cebra::setLugar(string l){
	lugar=l;
}
void Cebra::setMensaje()const{
	cout<<"CEBRA "<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Lugar "<<lugar<<endl;
}

