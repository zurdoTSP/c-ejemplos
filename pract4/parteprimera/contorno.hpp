#ifndef _CONTORNO_HPP_
#define _CONTORNO_HPP_
#include<iostream>
#include"punto2D.hpp"
using namespace std;
namespace poo
{
	class Contorno
	{
		private:
			string nombreContorno;
			int numeroPuntos;
			Punto2D *vectorPuntos;
		public:
			inline Contorno(string nombre="",int numero=0,Punto2D *v=NULL)
			{
				setNombreContorno(nombre);
				setVectorPuntos(numero,v);
			}
			inline Contorno(const Contorno &a)
			{
				setNombreContorno(a.getNombreContorno());
				setVectorPuntos(a.getNumeroPuntos(),a.getVectorPuntos());
			}
			inline ~Contorno()
			{
				delete [] vectorPuntos;
			}	
			inline Punto2D *getVectorPuntos()const
			{
				return vectorPuntos;
			}
			inline string getNombreContorno()const
			{
				return nombreContorno;
			}
			inline int getNumeroPuntos()const
			{
				return numeroPuntos;
			}
			inline Punto2D &getPunto(int n)
			{
				return vectorPuntos[n];
			}
			inline void setVectorPuntos(int n=0,Punto2D *v=NULL)
			{
				setNumero(n);
				if(v!=NULL)
				{
					delete [] vectorPuntos;
				}
					v=new Punto2D[n];
					vectorPuntos=v;
			}
			inline void setNombreContorno(string v="")
			{
				nombreContorno=v;
			}
			inline void setNumero(const int &num)
			{
				numeroPuntos=num;
			}
			inline Punto2D &operator[](int indice)
			{
				getPunto(indice);
			}
			inline Contorno & operator=(const Contorno &c)
			{
				setNombreContorno(c.getNombreContorno());
				setVectorPuntos(c.getNumeroPuntos(),c.getVectorPuntos());
			}
			inline void modificar(int n, float x,float y)
			{
				vectorPuntos[n].setX(x);
				vectorPuntos[n].setY(y);
			}
			inline float mandarX(int n)
			{
				return vectorPuntos[n].getX();
			}
			inline float mandarY(int n)
			{
				return vectorPuntos[n].getY();
			}
			void escribirContornoGrafico2D();
			void leerContornoDeFichero(char *nombre);
			void grabarContornoEnFichero(char *nombre);
			Punto2D calcularCentroide();
			void nuevoPrimerPunto(const int &a);	
	};
}
#endif
