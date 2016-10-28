// Fichero: practica_4.cpp

/*!
	\mainpage Clases Punto2D, Punto2D, Contorno
	\author Profesor de prácticas de la asignatura de Programación Orientada a Objetos
	\date 2 de noviembre de 2011
*/


// Ficheros de cabecera
#include <iostream>
#include <string>

#include "contorno.hpp"

// Espacio de nombres para la entrada y salida de datos
using namespace std;

//! \namespace poo Espacio de nombres de la asignatura de Programación Orientada a Objetos
using namespace poo;

//! Programa principial que muestra el uso de la clase Punto2D 
int main(void)
{

  // Se indica que se muestre el punto decimal
  cout << fixed;
  // Se indica que se muestren 2 cifras decimales
  cout.precision(2);

  // Se declara un objeto de la clase Contorno
  Contorno contorno;

  // Se declara una variable de tipo string para leer el nombre de un fichero
  char nombreFichero[50];

 // Se pide el nombre del fichero que contiene el contorno 
  cout << "Introduce el nombre del fichero que contiene el contorno --> "; 
  cin >> nombreFichero;

  // Se lee el contorno desde el fichero 
  contorno.leerContornoDeFichero(nombreFichero);

  // Se escriben por pantalla el nombre y el número de puntos del contorno leído
  cout << "El contorno " << contorno.getNombreContorno() 
       << " tiene " << contorno.getNumeroPuntos() << " puntos."
       << endl;

 // Se declara un objeto de tipo Punto2D que va a almacenar el centroide del contorno
  Punto2D centroide;

 // Se calcula el centroide del contorno y se muestra por pantalla
  centroide = contorno.calcularCentroide();

  // Se usa el extractor de la clase Punto2D
  cout << "El centroide es el punto" << centroide << endl;

  // Se calcula el punto del contorno más alejado del centroide
  int n = contorno.getNumeroPuntos();
  float maximo = 0;
  float distancia;
  int indicePuntoMaximo;
  
  for (int i = 0; i < n; i++)
    {
      distancia = calcularDistanciaEuclidea2D(centroide,contorno.getPunto(i));
  
      if (maximo < distancia)
 	{
		maximo = distancia;
		indicePuntoMaximo = i;
	}
    }

  // Se muestra el punto más alejado del centroide
  // Se usa el extractor de la clase Punto2D
  cout << "El punto más alejado del centroide es P" << indicePuntoMaximo << " = " << contorno.getPunto(indicePuntoMaximo) << endl;
  cout << "La distancia máxima es --> " << maximo << endl;


  // Se rota el contorno para que el primer punto sea el punto más alejado del contorno
  contorno.nuevoPrimerPunto(indicePuntoMaximo);

  // Se pide por pantalla el nombre del fichero en el que se va a grabar el contorno modificado
  cout << "Introduce el nombre del fichero en el que se va a grabar el contorno --> "; 
  cin >> nombreFichero;

 // Se graba el contorno modificado en el nuevo fichero
  contorno.grabarContornoEnFichero(nombreFichero);
 

  // Fin del programa

  return 0;
}





