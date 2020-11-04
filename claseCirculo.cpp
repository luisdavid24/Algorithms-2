#include <iostream>
#include <string>
using namespace std;

class Circle{
	private:
		double radius;
		string color;
	public:
		Circle (double r=1.0,string c="red"){
			radius=r;
			color=c;
		}//esto es un constructor
		double getRadius() const{ //esto es por movitos de seguridad para que no se pueda manipular
 			return radius;
		}
		string getColor() const{
			return color;
		}
		double getArea(){
			return radius*radius*3.1416;
		}
		void setRadius(double r){
//			radius=r;
			this->radius=radius;
		}
		void setColor(string c){
			color=c;
		}
};


int main(){
	Circle c1(2.0,"blue");
	cout<<"El circulo 1 tiene Radio= "<<c1.getRadius()<<" y un area de = "<<c1.getArea();
	cout<<"Es de Color = "<<c1.getColor()<<endl;
	
	Circle c2(3.0);
	cout<<"El circulo 2 tiene Radio= "<<c2.getRadius()<<" y un area de = "<<c2.getArea();
	cout<<"Es de Color = "<<c2.getArea()<<endl;
	
	Circle c3;
	cout<<"El circulo 3 tene Radio= "<<c3.getRadius()<<" y un area de = "<<c3.getArea();
	cout<<"Es de Color = "<<c3.getArea()<<endl;
	
	Circle c4(c2);
	cout<<"El circulo 4 tene Radio= "<<c4.getRadius()<<" y un area de = "<<c4.getArea();
	cout<<"Es de Color = "<<c4.getArea()<<endl;
	
	return 0;
}
