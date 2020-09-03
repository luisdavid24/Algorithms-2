#include <iostream>
int vec[12]; 
int i,n,menor,contador;
using namespace std;

int main(int argc, char** argv) {
	n=12;
	for(i=0;i<n;i++)
	{	cout<<"Valor posicion "<<i<<":";
		cin>>vec[i];
	}
	i=11;
	while(i>=0){
		cout<<vec[i]<<"\t";
		i--;
	}
	menor=vec[0];
	contador=0;
	for(i=1;i<n;i++){
		if(menor>vec[i]){
			menor=vec[i];
		}
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{	if(vec[i]==menor){
			contador++;
		}
	}
	
	cout<<"Este es el menor: "<<menor<<endl;
	cout<<"El numero de vecez que aparece el menor es: "<<contador<<endl;
	
	cout<<"Las posiciones donde esta el menor son: "<<endl;
	for(i=0;i<n;i++){
		if(vec[i]==menor){
			cout<<"Posicion : "<<i<<endl;
		}
	}
	return 0;
}
