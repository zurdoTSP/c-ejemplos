#include<cmath>
namespace poo
{
	template<class T> T calcularDistanciaEuclidea2D(T x,T y,T a, T b)
	{
		return sqrt(pow(x-a,2)+pow(y-b,2));
	}
	template<class T> T calcularDistanciaManhattan2D(T x,T y,T a, T b)
	{
		return x-a+y-b;
	}
	template<class T> T calcularDistanciaAjedrez2D(T x,T y,T a, T b)
	{
		return x-a+y-b;
	}
}
