#include<iostream>
#include "puntoGrafico2D.hpp"
#include "punto2D.hpp"
using namespace std;
namespace poo
{
	void PuntoGrafico2D:: leerPuntoGrafico2D()
	{
		float x, y;
		string nombre;
		int color;
		cout<<"dame x, y, nombre, color\n";
		cin>>x;
		cin>>y;
		cin>>nombre;
		cin>>color;
		setX(x);
		setY(y);
		setNombre(nombre);
		setColor(color);
	}
	void PuntoGrafico2D::escribirPuntoGrafico2D()
	{
		cout<<getNombre()<<"=("<<getX()<<","<<getY()<<")"<<","<<getColor();
	}
}
