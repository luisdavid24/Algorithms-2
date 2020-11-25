#ifndef BOOK_H
#define BOOK_H
#include "Author.h"
#include <string>

class Book
{
	private:
		Author author;
		string name;
		double price;
		int qtyInStock;
	public:
		Book(string name,Author author,double price,int qtyInStock=0);
		string getName()const;
		Author getAuthor()const;
		double getPrice()const;
		void setPrice(double price);
		int getQtyInStock()const;
		void setQtyInStock(int qtyInStock);
		void print()const;
		string getAuthorName()const;
	
};

#endif
