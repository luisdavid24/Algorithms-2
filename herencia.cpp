#include<iostream>
using namespace std;
//clase base;

class Shape{
	//atributos
	protected:
		int ancho;
		int alto;
	//metodos
	public:
		void setAncho(int a){
			ancho=a;
		}
		void setAlto(int t){
			alto=t;
		}
};
//clase heredada
class Rectangulo: public Shape{
	public:
		int getArea(){
			return (ancho*alto);
		}
};
class Triangulo: public Shape{
	public:
		int getArea(){
			return(ancho*alto)/2;
		}
};
int main(){
	Rectangulo Rect;
	Rect.setAlto(6);
	Rect.setAncho(5);
	
	cout<<"El area del rectangulo definido es: "<<Rect.getArea()<<endl;
	Triangulo Tri;
	Tri.setAlto(8);
	Tri.setAncho(6);
	cout<<"El area del triangulo es "<<Tri.getArea()<<endl;
	return 0;
};
