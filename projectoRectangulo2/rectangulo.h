#ifndef RECTANGULO_H
#define RECTANGULO_H

class rectangulo
{
	private:
		double l1;
		string color;
		double l2;	
	public:
		rectangulo(double l1=2.0,string color="rojo",double l2=3.0);
		
		//metodos publicos especificados
		double getLado1() const;
		double getLado2() const;
		string getColor() const;
		double getArea() const;	
		//definir setters adicionales
		void setColor(string color);
		void setLado1(double l1);
		void setLado2(double l2);
};

#endif
