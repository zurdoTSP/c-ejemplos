#include<iostream>
#include<cmath>
#include"punto2D.hpp"
#include"recta2D.hpp"
using namespace std;
namespace poo
{
	void Recta2D::leerRecta2D()
	{
		float a;
		float b;
		float c;
		cout<<"dame los números que quieres, 3\n";
		cin>>a;
		cin>>b;
		cin>>c;
		setA(a);
		setB(b);
		setC(c);
	}
	void Recta2D::escribirRecta2D()
	{
		if(getA()!=0)
		{
			cout<<getA()<<"X+";
		}
		if(getB()!=0)
		{
			cout<<getB()<<"Y+";
		}
		if(getC()!=0)
		{
			cout<<getC()<<"\n";
		}			
	}
	float calcularDistanciaPunto2DRecta2D(Punto2D p, Recta2D r)
	{
		return((r.getA()*p.getX()+r.getB()*p.getY()+r.getC())/sqrt(r.getA()*r.getA()+r.getB()*r.getB()));
	}
	bool sonRectas2DPerpendiculares(Recta2D r1, Recta2D r2)
	{
		if(r1.getA()*r2.getA()+r1.getB()*r2.getB()==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool sonRectas2DParalelas(Recta2D r1, Recta2D r2)
	{
		if(r1.getA()*r2.getA()-r1.getB()*r2.getB()==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
