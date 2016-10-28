// Fichero: practica_2.cpp

/*!
	\mainpage Clases Punto2D y Recta2D
	\author Profesor de prácticas de la asignatura de Programación Orientada a Objetos
	\date 5 de octubre de 2011
*/

//
// Se muestra el uso de las clases Punto2D y Recta2D
// codificados desde el punto de vista de la "programación orientada a objetos"
// 

// Ficheros de cabecera

#include <iostream>
// Permite el uso de sqrt
#include <cmath>

#include "punto2D.hpp"
#include "recta2D.hpp"

// Espacio de nombres para la entrada y salida de datos
using namespace std;

//! \namespace poo Espacio de nombres de la asignatura de Programación Orientada a Objetos
using namespace poo;

//! Programa principial que muestra el uso de las clase Punto2D y Recta2D
int main(void)
{

  ///////////////////////////////////////////////////////////////
  // Uso de las funciones de la clase Punto2D

  // Declaración de variables locales

  // Se crea un punto con las coordenadas indicadas
  Punto2D p1(1.0,2.0);

  // Se crea un punto con las coordenadas por defecto: (0.0, 0.0)
  Punto2D p2;

  // Se crea un punto con la segunda coordenada por defecto:
  Punto2D p3(9.0);

  // Se crea un punto a partir de otro
  Punto2D p4(p3);

  // Se escriben los puntos

  cout << "Se escriben las coordenadas de los puntos" << endl;
  p1.escribirPunto2D();

  p2.escribirPunto2D();

  p3.escribirPunto2D();

  p4.escribirPunto2D();

  // Se modifican los valores de un punto leyendo las coordenadas desde el teclado
  p4.leerPunto2D();

  p4.escribirPunto2D();

  
  // 
  cout << "Distancia euclídea entre p1 y p2" << endl;
  cout << calcularDistanciaEuclidea2D(p1,p2) << endl;

  cout << endl;

  ///////////////////////////////////////////////////////////////
  // Uso de las funciones de la clase Recta2D

 // Nueva declaración de variables locales
  
  // Se crea una recta con los valores por defecto: x + y + 1 = 0
  Recta2D r1;

  // Se crea una recta indicando el coeficiente "a"; los coeficientes "b" y "c" toman los valores por defecto: -1 x + y + 1 = 0
  Recta2D r2(-1);

  // Se crea una recta indicando los coeficientes "a" y "b"; el coeficiente "c" toma el valor por defecto: 1 x - 2 y + 1 = 0
  Recta2D r3(1,-2);

  // Se crea una recta indicando los coeficientes "a", "b" y "c": 1 x - 2 y + 3 = 0
  Recta2D r4(1,-2,3);

  // Se crea la recta que pasa por los puntos p1 y p2
  Recta2D r5(p1, p2);

  cout << "Se escriben las ecuaciones de las rectas" << endl;

  cout << "Recta r1: " ;
  r1.escribirRecta2D();

  cout << "Recta r2: " ;
  r2.escribirRecta2D();

  cout << "Recta r3: " ;
  r3.escribirRecta2D();
 
  cout << "Recta r4: " ;
  r4.escribirRecta2D();

  cout << "Recta r5: " ;
  r5.escribirRecta2D();
  cout << endl;

  // Se modifican los valores de una leyendo las coordenadas desde el teclado
  r5.leerRecta2D();

  cout << "Recta r5 modificada: " ;
  r5.escribirRecta2D();
  cout << endl;

  // Se comprueban si las dos primeras rectas son perpendiculares o paralelas

 if (sonRectas2DPerpendiculares(r1, r2))
     cout << "Las rectas r1 y r2 son perpendiculares" << endl;
 else
     cout << "Las rectas r1 y r2 no son perpendiculares" << endl;


 if (sonRectas2DParalelas(r1, r2))
     cout << "Las rectas r1 y r2 son paralelas" << endl;
 else
     cout << "Las rectas r1 y r2 no son paralelas" << endl;

 cout << endl;

  // Se calcula la distancia del punto p1 a la recta r1
  cout << "La distancia del punto p1 = ";
  p1.escribirPunto2D();
  cout << " a la recta r1 : ";
  r1.escribirRecta2D();
  cout  << " es " << calcularDistanciaPunto2DRecta2D (p1,r1) << endl;
  cout << endl;

  ////////////////////////////////////////////////////////
  // Uso de gestión de memoria para trabajar con puntos 

  int n;

  cout << " Introduzca el número de puntos --> ";
  cin  >> n;

  // Se reserva memoria para el vector de puntos
  Punto2D *v = new Punto2D[n];


  cout << " Introduzca las coordenadas de los puntos --> " << endl;
  for (int i = 0; i< n; i++)
     {
      v[i].leerPunto2D();
     }

  cout << " Se escriben las coordenadas de los puntos --> " << endl;
  for (int i = 0; i< n; i++)
     {
      v[i].escribirPunto2D();
     }

   // Se libera la memoria 
   delete [] v;

  // Fin del programa

  return 0;
}





