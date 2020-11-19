#ifndef CEBRA_H
#define CEBRA_H
#include <iostream>
#include "Animal.h"

using namespace std;

class Cebra :public Animal
{
	private:
		string lugar;
	public:
		void setLugar(string l);
		void setMensaje()const;
	
};

#endif
