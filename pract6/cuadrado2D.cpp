#include "poligono2D.hpp"
#include "cuadrado2D.hpp"
namespace poo
{	
	bool Cuadrado2D:: esCuadrado()
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
