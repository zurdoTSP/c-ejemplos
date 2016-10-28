#include<iostream>
#include<cmath>
#include"punto2D.hpp"
using namespace std;
namespace poo
{
	void Punto2D::leerPunto2D()
	{
		float x,y;
		cout<<"dame dos puntos x,y\n";
		cin>>x;
		cin>>y;
		setX(x);
		setY(y);
	}
	void Punto2D::escribirPunto2D()
	{
		cout<<"("<<getX()<<","<<getY()<<")\n";
	}
	float calcularDistanciaEuclidea2D(Punto2D p1,Punto2D p2)
	{
		
		return sqrt(pow(p2.getX()-p1.getX(),2)+pow(p2.getY()-p1.getY(),2));
	}

}
