#include "circle.h"

//implemento el constructor
circle::circle(double r,string color)
{
	radius=r;
	this->color=color;
}

//Implemento metodos especificados
double circle::getRadius() const {
	return radius;
}
string circle::getColor()const {
	return color;
}
double circle::getArea()const {
	return radius*radius*3.14159265;
}
//Implemento los setters restantes
void circle::setRadius(double radius){
	this->radius=radius;
}
void circle::setColor(string c){
	color=c;
}
