#ifndef _PUNTO2D_HPP_
#define _PUNTO2D_HPP_
namespace poo
{
	template<class T> class Punto2D
	{
		private:
			T _x;
			T _y;
		public:
			Punto2D(const T &x=0,const T &y=0)
			{
				setX(x);
				setY(y);
			}
			Punto2D(const Punto2D &a)
			{
				setX(getX());
				setY(getY());
			}
			inline T getX()const
			{
				return _x;
			}
			inline T getY()const
			{
				return _y;
			}
			inline void setX(const T &x)
			{
				_x=x;
			}
			inline void setY(const T &y)
			{
				_y=y;
			}
			Punto2D &operator=(Punto2D const&q)
			{
				setX(q.getX());
				setY(q.getY());
				return *this;
			}
			void leerPunto2D();
			void escribirPunto2D();
	};
}
#include"punto2D.cpp"
#endif
