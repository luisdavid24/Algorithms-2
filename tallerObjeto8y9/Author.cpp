#include "Author.h"
#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

Author::Author(string name,string email,char gender){
	this->name=name;
	setEmail(email);
	if(gender=='m'||gender=='f'){
		this->gender=gender;	
	}else{
		cout<<"Genero indeterminado"<<endl;
		this->gender='i';	
	}
	
}

string Author::getName()const{
	return name;
}
string Author::getEmail()const{
	return email;
}
void Author::setEmail(string email){
	size_t atIndex=email.find('@');
	if(atIndex != string::npos && atIndex!=0 && atIndex!=email.length()-1){
		this->email=email;
	}else{
		cout<<"Escribiste mal el correo, no olvides el @"<<endl;
		this->email="no definido";	
	}
}
char Author::getGender()const{
	return gender;
}
void Author::print()const{
	cout<<name<<"("<<gender<<") at "<<email<<endl;
}
		
		
			
