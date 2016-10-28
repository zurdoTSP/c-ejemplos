#include<iostream>
#include<cmath>
using namespace std;
namespace poo
{
	template<class T> T calcularDistanciaEuclidea2D(T x,T y,T a, T b)
	{
		return sqrt(pow(x-a,2)+pow(y-b,2));
	}
	template<class T> T calcularDistanciaManhattan2D(T x,T y,T a, T b)
	{
		return fabs(a-x)+fabs(b-y);
	}
	template<class T> T calcularDistanciaAjedrez2D(T x,T y,T a, T b)
	{
		return fabs(x-a)+fabs(y-b));
	}
}
