#ifndef _CUADRADO2D_HPP_
#define _CUADRADO2D_HPP_
#include<cmath>
#include "poligono2D.hpp"
namespace poo
{
	class Cuadrado2D :public Poligono2D
	{
		public:
		Cuadrado2D() :Poligono2D(4)
		{
		}
	float  calcularPerimetro()
	{
		return 4*lados(1);
	}
	float calcularArea()
	{
		if(esCuadrado()==true)
		{
		return pow(lados(1),2);
		}
		else
		{
			return 0;
		}
	}
		bool esCuadrado();
	};
}
#endif
