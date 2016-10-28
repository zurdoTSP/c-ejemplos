#ifndef _DISTANCIA2D_HPP_
#define _DISTANCIA2D_HPP_
namespace poo
{
	template<class T> T calcularDistanciaEuclidea2D(T x,T y,T a, T b);
	template<class T> T calcularDistanciaManhattan2D(T x,T y,T a, T b);
	template<class T> T calcularDistanciaAjedrez2D(T x,T y,T a, T b);
}
#include"distancia2D.cpp"
#endif
