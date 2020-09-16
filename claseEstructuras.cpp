#include <iostream>
using namespace std;
 
struct estudiante{
	char nombre[20];
	char apellido[20];
	float nota;
	int id;
};
main(){
	estudiante vectorEstudiante[3];
	
	for(int i=0; i<3;i++)
	{	cout<<"Ingrese la identificacion del estudiante: ";
		cin>>vectorEstudiante[i].id;	
	
		cout<<"Ingrese el nombre del estudiante: ";
		cin>>vectorEstudiante[i].nombre;
	
		cout<<"Ingrese el apellido del estudiante: ";
		cin>>vectorEstudiante[i].apellido;
	
		cout<<"Ingrese la nota del estudiante: ";
		cin>>vectorEstudiante[i].nota;
		
	}	
	for(int i=0;i<3;i++){
		cout<<endl;
		cout<<endl;
		cout<<"usted  se ha registrado los datos del siguiente estudiante: ";
		cout<<endl;
		cout<<"nombre y apellido "<<vectorEstudiante[i].nombre<<" "<<vectorEstudiante[i].apellido;
		cout<<endl;
		cout<<"Nota definitiva:  "<<vectorEstudiante[i].nota;
		cout<<endl;
		cout<<"No. de indetificacion: "<<vectorEstudiante[i].id;	
	}

	return 0;
}


// esta es la es para un solo elemento
//	estudiante estudiante1;
//	cout<<"Ingrese la identificacion del estudiante: ";
//	cin>>estudiante1.id;	
//	
//	cout<<"Ingrese el nombre del estudiante: ";
//	cin>>estudiante1.nombre;
//	
//	cout<<"Ingrese el apellido del estudiante: ";
//	cin>>estudiante1.apellido;
//	
//	cout<<"Ingrese la nota del estudiante: ";
//	cin>>estudiante1.nota;
//	cout<<endl;
//	cout<<endl;
//	cout<<"usted  se ha registrado los datos del siguiente estudiante: ";
//	cout<<endl;
//	cout<<"nombre y apellido "<<estudiante1.nombre<<" "<<estudiante1.apellido;
//	cout<<endl;
//	cout<<"Nota definitiva:  "<<estudiante1.nota;
//	cout<<endl;
//	cout<<"No. de indetificacion: "<<estudiante1.id;
//	cout<<endl;
