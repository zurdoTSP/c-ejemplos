#ifndef _PUNTOGRAFICO2D_HPP_
#define _PUNTOGRAFICO2D_HPP_
#include "punto2D.hpp"
namespace poo
{
	class PuntoGrafico2D: public Punto2D
	{
		private:
			string _nombre;
			int _color;
		public:
			inline PuntoGrafico2D(float x=0,float y=0, string nombre="", int color=0):Punto2D(x,y)
			{
				setNombre(nombre);
				setColor(color);
			}
			inline PuntoGrafico2D(const PuntoGrafico2D &q)
			{
				setNombre(q.getNombre());
				setColor(q.getColor());
				setX(q.getX());
				setY(q.getY());
			}
			inline void setNombre(const string &nombre)
			{
				_nombre=nombre;
			}
			inline void setColor(const int &color)
			{
				_color=color;
			}
			inline void SetPuntoGrafico2D(const float &x,const float &y,const string &nombre,const int &color)
			{
				setX(x);
				setY(y);
				setNombre(nombre);
				setColor(color);
			}
			inline string getNombre()const
			{
				return _nombre;
			}
			inline int getColor()const
			{
				return _color;
			}
			inline PuntoGrafico2D & operator=(const PuntoGrafico2D &q)
			{
				setX(q.getX());
				setY(q.getY());
				setNombre(q.getNombre());
				setColor(q.getColor());
				return *this;
			}
			void leerPuntoGrafico2D();
			void escribirPuntoGrafico2D();
		};
}
#endif
