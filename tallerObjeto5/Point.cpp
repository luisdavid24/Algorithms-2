#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;

Point::Point(int x,int y)
{	x=x;
	y=y;
}

int Point::getX()const{
	return x;
}
void Point::setX(int x){
	x=x;
}
int Point::getY()const{
	return y;
}
void Point::setY(int y){
	y=y;
}
void Point::setXY(int x,int y){
	x=x;
	y=y;
}
double Point::getManitude(){
	cout<<sqrt(x*x+y*y);
}
double Point::getArgument(){
	cout<<atan2(y,x);	
}
void Point::print(){
	cout<<"("<<x<<","<<y<<")";
}
		
