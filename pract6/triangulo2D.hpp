#ifndef _TRIANGULO2D_HPP_
#define _TRIANGULO2D_HPP_
#include<cmath>
#include "poligono2D.hpp"
namespace poo
{
	class Triangulo2D:public Poligono2D
	{
		public:
		Triangulo2D():Poligono2D(3)
		{
		}
	float  calcularPerimetro()
	{
		return lados(1)+lados(2)+lados(3);
	}
	float calcularArea()
	{
		if(esTriangulo()==true)
		{
		
		sqrt((lados(1)+lados(2)+lados(3)/2)*((lados(1)+lados(2)+lados(3)/2)-lados(1))*((lados(1)+lados(2)+lados(3)/2)-lados(2))*((lados(1)+lados(2)+lados(3)/2)-lados(3)));
		}
		else
		{
			return 0;
		}
	}
		bool esTriangulo();
	};
}
#endif
