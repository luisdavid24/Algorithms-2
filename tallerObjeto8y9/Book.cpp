#include "Book.h"
#include "Author.h"
#include <iostream>
using namespace std;

Book::Book(string name,Author author,double price,int qtyInStock):name(name),author(author)
{	
	setPrice(price);
	setQtyInStock(qtyInStock);
}

string Book::getName()const{
	return name;
}
Author Book::getAuthor()const{
	return author;
}
double Book::getPrice()const{
	return price;
}
void Book::setPrice(double price){
	if(price>0){
		this->price=price;	
	}else{
		cout<<"El precio deberia ser positivo se configura como 0"<<endl;
		this->price=0;
	}
	
}
int Book::getQtyInStock()const{
	return qtyInStock;
}
void Book::setQtyInStock(int qtyInStock){
	if(qtyInStock>=0){
		this->qtyInStock=qtyInStock;	
	}else{
		cout<<"No puede haber stock negativo"<<endl;
		this->qtyInStock=0;
	}
	
}
void Book::print()const{
	cout<<" "<<name<<" escrito por ";
	author.print(); 
}
string Book::getAuthorName()const{
	return author.getName();
}

	
		
		
		
		
		
