// Fichero: practica_6cpp

/*!
	\mainpage Clases Poligono2D (clase abstracta), Triangulo2D y Cuadrado2D
	\author Profesor de prácticas de la asignatura de Programación Orientada a Objetos
	\date 28 de noviembre de 2011
	\brief Esta práctica muestra el uso de la herencia de clases abstractas en C++ y el manejo del contenedor STL vector
*/

// Ficheros de cabecera
#include <iostream>
#include <vector>

#include "poligono2D.hpp"
#include "triangulo2D.hpp"
#include "cuadrado2D.hpp"

void pausa();

// Espacio de nombres para la entrada y salida de datos
using namespace std;

//! \namespace poo Espacio de nombres de la asignatura de Programación Orientada a Objetos
using namespace poo;

int main(void)
{
  // Se indica que se muestre el punto decimal
  cout << fixed;
  // Se indica que se muestren 2 cifras decimales
  cout.precision(2);

   //Solo se pueden declarar punteros a la clase base "abstracta"
    Poligono2D *poligono;

   // Objetos de las clases herederas
    Triangulo2D triangulo;
    Cuadrado2D  cuadrado;
  
    // Objeto de la clase Punto2D  
    Punto2D p;

    // Variables auxiliares
    int opcion; 
    char caracter;

  do{
	cout << "Elija una opcion --> " << endl;
	cout << "\t Terminar: 0 " << endl;
 	cout << "\t Triángulo: 1" << endl;
	cout << "\t Cuadrado: 2" << endl << endl;
 	cout << "\t ---> ";
	cin >> opcion;
	// Lee el salto de línea
	cin.get(caracter);
  
	switch (opcion)
    	{
	   case 0:
		cout << "0 --> Fin del programa" << endl;
		break;

	   case 1: // El puntero de la clase abstracta apunta a un triángulo 
		poligono = &triangulo;
		break;

	   case 2:// El puntero de la clase abstracta apunta a un cuadrado
		poligono = &cuadrado;
		break;
     default: 
      		cout << endl << " ----> Opcion incorrecta" << endl;  
        }


   if ( (opcion == 1) || (opcion == 2))
     {
        // Se utiliza un método de la clase base
	cout << "Introduce " << poligono->getNumeroVertices() << "vertices del poligono" << endl;

	for (int i = 0; i < poligono->getNumeroVertices(); i++)
	{
		cout << "Vértice nº " << i+1 << endl;
		cin >> p;
	        cin.get(caracter);

		cout << endl;	
                 // Se utiliza un método de la clase base
		poligono->setVertice(i,p);
	} 	

	// Se usan las definiciones de los métodos de las clases herederas: Triangulo2D y Cuadrado2D
	cout << "Perímetro " 
	         << poligono->calcularPerimetro()
		<< endl;
  
  	 cout << "Área " << poligono->calcularArea() << endl;

	pausa();	
      }


 }while(opcion != 0);	

  // Fin del programa

  return 0;
}



void pausa()
{
 char caracter;
  // Se espera que pulse enter
  cout << "\n Pulse ENTER para continuar--> ";
  cin.get(caracter);
}




