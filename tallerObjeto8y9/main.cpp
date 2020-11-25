#include <iostream>
#include "Author.h"
#include "Book.h"
#include <string.h>
using namespace std;

int main() {
	Author david("david2","david@hotmail",'x');
//	david.setEmail("david2@hotmail");
//	david.print();
	
	Book b1("Capa de mi corazon",david,22.2);
	b1.setQtyInStock(4);
	b1.print();
	cout<<"Cantidad de stock: "<<b1.getQtyInStock()<<endl;
	cout<<"Precio del libro "<<b1.getPrice()<<endl;
	cout<<"Correo electronico de autor "<<b1.getAuthor().getEmail()<<endl;
	
	return 0;
}
