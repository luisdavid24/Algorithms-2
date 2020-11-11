#include "rectangulo.h"

rectangulo::rectangulo(double l1,string color,double l2)
{	this->l1=l1;
	this->l2=l2;
	this->color=color;
}
//Implemento metodos especificados
double rectangulo::getLado1() const {
	return l1;
}
double rectangulo::getLado2()const {
	return l2;
}
string rectangulo::getColor()const{
	return color;
}
double rectangulo::getArea()const{
	return l1*l2;
}
//Implemento los setters restantes
void rectangulo::setLado1(double l1){
	this->l1=l1;
}
void rectangulo::setLado2(double l2){
	this->l2=l2;
}
void rectangulo::setColor(string color){
	this->color=color;
}
