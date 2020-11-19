#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;

class Animal
{	protected:
		string nombre;
		int edad;
	public:
		void setNombre(string a);
		void setEdad(int t);
	
};

#endif

