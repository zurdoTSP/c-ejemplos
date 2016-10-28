#ifndef _PUNTO2D_HPP_
#define _PUNTO2D_HPP_
#include<iostream>
#include "punto2D.hpp"
using namespace std;
namespace poo
{
	class Punto2D
	{
		private:
			float _x;
			float _y;
		public:
			inline Punto2D(float x=0, float y=0)
			{
				setX(x);
				setY(y);
	
			}
			inline Punto2D(const Punto2D &q)
			{
				setX(q.getX());
				setY(q.getY());
			}
			inline  float getX() const
			{
				return _x;
			}
			inline float getY() const
			{
				return _y;
			}
			inline void  setX(const float &x)
			{
				_x=x;
			}
			inline void setY(const float &y)
			{
				_y=y;
			}
			inline Punto2D &operator=(const Punto2D &q)
			{
				setX(q.getX());
				setY(q.getY());
				return *this;
			}
			friend std::ostream &operator<<(std::ostream &stream, const Punto2D &p)
			{
				cout<<"("<<p.getX()<<","<<p.getY()<<")";
				//return *this;
			}
			friend std::istream &operator>>(std::istream &stream, Punto2D &p)
			{
				float x,y;
				cout<<"dame dos puntos x,y\n";
				cin>>x;
				cin>>y;
				p.setX(x);
				p.setY(y);
				//return *this;
			}
			void leerPunto2D();
			void escribirPunto2D();
		};
		float calcularDistanciaEuclidea2D(Punto2D p1, Punto2D p2);
}
#endif
