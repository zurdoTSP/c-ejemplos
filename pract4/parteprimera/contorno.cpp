#include<iostream>
#include <fstream>
#include"contorno.hpp"
#include"punto2D.hpp"
using namespace std;
namespace poo
{
	void Contorno::escribirContornoGrafico2D()
	{
		int i;
		for(int i=0;i<getNumeroPuntos();i++)
		{
			cout<<getPunto(i)<<"\n";
		}
	}
	void Contorno::leerContornoDeFichero(char *nombre)
	{
		Punto2D *b;
		ifstream fe(nombre); 
		string nombres;
		int puntos;
		float x,y;
		int i;
		fe>>nombres;
		setNombreContorno(nombres);
		fe>>puntos;
		cout<<puntos<<"\n";
		setVectorPuntos(puntos,b);
		for(i=0;i<getNumeroPuntos();i++)
		{
			fe>>x;
			fe>>y;
			modificar(i,x,y);
		}
		fe.close();
	}
	void Contorno::grabarContornoEnFichero(char *nombre)
	{
		ofstream fs(nombre); 


		fs << getNombreContorno() << endl;
		fs<<getNumeroPuntos()<<endl;
		for(int i=0;i<getNumeroPuntos();i++)
		{
			fs<<mandarX(i)<<" "<<mandarY(i)<<"\n";
		}
		fs.close();
	}
		Punto2D Contorno:: calcularCentroide()
		{
			Punto2D b;
			float x,y;
			for(int i=0;i<getNumeroPuntos();i++)
			{
				x=x+mandarX(i);
				y=y+mandarY(i);
			}	
			b.setX(x/getNumeroPuntos());	
			b.setY(y/getNumeroPuntos());
			return b;
		}	
		void Contorno::nuevoPrimerPunto(const int &a)
		{
			float x, y;
			x=mandarX(0);
			y=mandarY(0);
			modificar(0, mandarX(a),mandarY(a));
			modificar(a, mandarX(x),mandarY(y));
		}
}
