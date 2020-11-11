#ifndef CIRCLE_H
#define CIRCLE_H
#include <string>

using namespace std;

class circle
{
	//definimos los atributos con visibilidad privada
	private:
		double radius;
		string color;		
	//definimos los métodos
	public:
		//definimos el constructor
		circle(double radius=1.0,string color="red");
		
		//metodos publicos especificados
		double getRadius() const;
		string getColor() const;
		double getArea()  const;
		
		//definir setters adicionales
		void setRadius(double radius);
		void setColor(string color);
		
		
};
#endif
