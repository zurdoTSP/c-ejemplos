#include<iostream>
#include"punto2D.hpp"
using namespace std;
namespace poo
{
	template<class T >void Punto2D< T>::leerPunto2D()
	{
		T x;
		T y;
		cout<<"dame primero la x, luego la y saludos hermana\n";
		cin>>x;
		cin>>y;
		setX(x);
		setY(y);
	}
	template<class T >void Punto2D< T>::escribirPunto2D()
	{
		cout<<"("<<getX()<<","<<getY()<<")\n";
	}
}
