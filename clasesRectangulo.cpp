#include <iostream>
#include <string>
using namespace std;

class Rectangle{
	private:
		double l1;
		double l2;
		string color;
	public:
		Rectangle(double lado1=2.0,double lado2=3.0,string c="rojo"){
			l1=lado1;
			l2=lado2;	
			color=c;
		}
//		Rectangle(double lado1=2.0,double lado2=3.0,string c="rojo"){
//			l1=lado1;
//			l2=lado2;	
//			color=c;
//		}
		double getLado1() {
			return l1;
		}
		double getLado2() const{
			return l2;
		}
		string getColor() const{
			return color;
		}
		double getArea(){
			return l1*l2;
		}
		void setLado1(){
			this->l1=l1;
		}
		void setLado2(){
			this->l2=l2;
		}
};


int main(){
	Rectangle r1(3.0,2.0,"Naranja");
	cout<<"El rentangulo 1 tiene un lado "<<r1.getLado1()<<" y otra lado de "<<r1.getLado2();
	cout<<" tambien tiene un color el cual es "<<r1.getColor()<<" y tiene un area "<<r1.getArea()<<endl;


	Rectangle r2;
	cout<<"El rentangulo 2 tiene un lado "<<r2.getLado1()<<" y otra lado de "<<r2.getLado2();
	cout<<" tambien tiene un color el cual es "<<r2.getColor()<<" y tiene un area "<<r2.getArea()<<endl;

	Rectangle r3(9.0);
	cout<<"El rentangulo 3 tiene un lado "<<r3.getLado1()<<" y otra lado de "<<r3.getLado2();
	cout<<" tambien tiene un color el cual es "<<r3.getColor()<<" y tiene un area "<<r3.getArea()<<endl;
	
	Rectangle r4(0,1.6,"BLue");
	cout<<"El rentangulo 4 tiene un lado "<<r4.getLado1()<<" y otra lado de "<<r4.getLado2();
	cout<<" tambien tiene un color el cual es "<<r4.getColor()<<" y tiene un area "<<r4.getArea()<<endl;
	
	return 0;
}
