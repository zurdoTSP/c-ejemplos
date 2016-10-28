#include "poligono2D.hpp"
#include "triangulo2D.hpp"

namespace poo
{	
	bool Triangulo2D:: esTriangulo()
	{
		if((lados(2)-lados(3))<lados(1)<(lados(2)+lados(3)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

}
