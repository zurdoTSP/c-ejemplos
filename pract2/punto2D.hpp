#ifndef _PUNTO2D_HPP_
#define _PUNTO2D_HPP_
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
			void leerPunto2D();
			void escribirPunto2D();
		};
		float calcularDistanciaEuclidea2D(Punto2D p1, Punto2D p2);
}
#endif
