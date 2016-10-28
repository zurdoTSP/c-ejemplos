#ifndef __COLA2_HPP__
#define __COLA2_HPP__
#include <vector>
#include<iostream>
using namespace std;	
template<class G>
class cola
{
	private:
		vector<G> _cola;
		int _cabeza;
	public:
		cola()
		{
			_cabeza=0;
		}
		cola(const cola &c)
		{
			*this = c;
		}
		~cola()
		{
			borrarCola();
		}
		inline G cabeza() const
		{
			return _cola[0];
		}
		inline vector<G> getCola()const
		{
			return _cola;
		}
		inline int setCabeza(const int &cabezas)
		{
			_cabeza=cabezas;
		}
		inline void setCola(const vector<G> &colas)
		{
			_cola=colas;
		}	
		inline void insertar(const G &elemento)
		{
			_cola.push_back(elemento);
			_cabeza++;
		}
		inline void eliminar()
		{
			_cola.erase(_cola.begin());
			_cabeza--;
		}
		inline bool estaVacia () const
		{
			return _cabeza == 0;
		}
		cola &operator=(const cola &c)
		{
			setCola(c.getCola());
			setCabeza(c.cabeza());
			return *this;
		}
		inline void borrarCola()
		{
			_cola.clear();
			_cabeza=0;
		}
};
#endif
