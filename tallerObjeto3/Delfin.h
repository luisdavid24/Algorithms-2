#ifndef DELFIN_H
#define DELFIN_H
#include "Animal.h"
using namespace std;

class Delfin: public Animal
{
	private:
		string color;
	public:
		void setColor(string c);
		void setMensaje()const;
	
};

#endif
