#ifndef _POLIGONO2D_HPP_
#define _POLIGONO2D_HPP_
#include <vector>
#include "punto2D.hpp"
namespace poo
{
	class Poligono2D
	{
		private:
			vector<Punto2D> _vertices;
		public:
			Poligono2D(int n)
			{
				_vertices.resize(n);
			}
			inline int getNumeroVertices()
			{
				return _vertices.size();
			}
			inline Punto2D &getVertice(int n)
			{
				_vertices[n];
			}
			inline void setVertice(int n,const Punto2D p)
			{
				_vertices[n]=p;
			}
			inline float lados(int n)
			{
				return (_vertices[n].getY())-(_vertices[n].getX());
			}
			virtual float calcularPerimetro()=0;
			virtual float calcularArea()=0;	
	};
}
#endif
