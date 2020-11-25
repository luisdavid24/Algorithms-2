#include "Ball.h"
#include <iostream>
#include <iomanip>
using namespace std;

Ball::Ball(double x,double y,double xSpeed,double ySpeed):x(x),y(y),xSpeed(xSpeed),ySpeed(ySpeed){}

double Ball::getX()const{
	return x;
}
void Ball::setX(double x){
	this->x=x;
}
double Ball::getY()const{
	return y;
}
void Ball::setY(double y){
	this->y=y;
}
double Ball::getXSpeed(double xSpeed)const{
	return xSpeed;
}

void Ball::setXSpeed(double xSpeed){
	this->xSpeed=xSpeed;
}
double Ball::getYSpeed()const{
	return y;
}
void Ball::setYSpeed(double y){
	this->y=y;
}		
void Ball::setXY(double x,double y){
	this->x=x;
	this->y=y;
}
void Ball::setXYSpeed(double xSpeed,double ySpeed){
	this->xSpeed=xSpeed;
	this->ySpeed=ySpeed;
}
void Ball::move(double xSpeed,double ySpeed){
	x+=xSpeed;
	y+=ySpeed;
}
void Ball::print(){
	cout<<"Ball @("<<x<<","<<y<<")"<<" con velocidad ("<<fixed<<setprecision(2)<<xSpeed<<","<<fixed<<setprecision(2)<<ySpeed<<")"<<endl;
}				
				
		
		
