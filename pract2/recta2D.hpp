#ifndef _RECTA2D_HPP_
#define _RECTA2D_HPP_
#include"punto2D.hpp"
namespace poo
{
	class Recta2D
	{
		private:
			float _a;
			float _b;
			float _c;
		public:
			inline Recta2D(float a=1,float b=1,float c=1)
			{
				setA(a);
				setB(b);
				setC(c);
			}
			inline Recta2D(const Recta2D &s)
			{
				setA(s.getA());
				setB(s.getB());
				setC(s.getC());
			}
			inline Recta2D(Punto2D p1,Punto2D p2)
			{
				setA(p1.getX());
				setB(p2.getY());
				setC(p1.getX()+p2.getY());
			}
			inline float getA()const
			{
				return _a;
			}
			inline float getB()const
			{
				return _b;
			}      
			inline float getC()const
			{
				return _c;
			}
			inline void setA(const float &a)
			{
				_a=a;
			}
			inline void setB(const float &b)
			{
				_b=b;
			}
			inline void setC(const float &c)
			{
				_c=c;
			}
			void leerRecta2D();
			void escribirRecta2D();
			};
		float calcularDistanciaPunto2DRecta2D(Punto2D p, Recta2D r);
		bool sonRectas2DPerpendiculares(Recta2D r1, Recta2D r2);
		bool sonRectas2DParalelas(Recta2D r1, Recta2D r2);
}
#endif
