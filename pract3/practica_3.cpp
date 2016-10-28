// Fichero: practica_3.cpp

/*!
	\mainpage Clases Punto2D, PuntoGrafico2D 
	\author Profesor de prácticas de la asignatura de Programación Orientada a Objetos
	\date 1 de noviembre de 2011
	\brief Esta práctica muestra el uso de la herencia de clases en C++
*/


// Ficheros de cabecera
#include <iostream>
#include <string>

#include "puntoGrafico2D.hpp"

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

  ///////////////////////////////////////////////////////////////

  // Ejemplos de uso de la clase padre o base Punto2D
  cout << "\nUso de la clase base Punto2D " << endl;

  // Uso del constructor con los valores por defecto
  Punto2D p;

  // Uso del extractor "<<" de la clase Punto2D para mostrar los valores por defecto
  cout << "p = " << p << endl;
  
  // Uso del insertador ">>"  para modificar los valores del Punto2D
  cout << "\nUso del insertador de la clase Punto2D " << endl; 
  cin >> p;

  // Uso del extractor para mostrar las nuevas coordenadas
  cout << "Punto modificado --> p = " << p << endl;

  cout << endl; 

  // Declaración de otro Punto2D
  Punto2D q;

  // Ejemplo de uso del operador de asignación "=" sobrecargado de la clase Punto2D
   q = p;

  // Uso del extractor "<<" para mostrar las coordenadas de q
  cout << "Nuevo punto q = " << q << endl << endl;

  cout << "++++++++++++++++++++++++++++++++++++++++++" << endl << endl;
   

  ///////////////////////////////////////////////////////////////

  // Ejemplos de uso de la clase hija PuntoGrafico2D
  cout << "Uso de la clase hija PuntoGrafico2D " << endl;

  // Uso del constructor con argumentos por defecto
 PuntoGrafico2D p1;

  // Se escriben en la pantalla los datos del punto
  cout << "\nDatos del punto con los argumentos por defecto" << endl;
  p1.escribirPuntoGrafico2D ();

  /////////////////////////////////////////////////

  // Se leen del teclado los datos del punto gráfico
  p1.leerPuntoGrafico2D();

  // Se escriben en la pantalla los datos del punto
  cout << "\nDatos del punto modificado " << endl;
  p1.escribirPuntoGrafico2D ();

  /////////////////////////////////////////////////
  
  // Uso del constructor de copia
  PuntoGrafico2D p2(p1);
  
  // Se usa la función de modificación para cambiar el nombre del punto
  p2.setNombre("p2");

  // Se escriben en la pantalla los datos del punto creado con el constructor de copia
  cout << "\nDatos del punto p2" << endl;
  p2.escribirPuntoGrafico2D ();


   /////////////////////////////////////////////////
  
  // Uso del constructor con argumentos por defecto
  PuntoGrafico2D p3;
  
  // Se usa el operador de asignación "=" sobrecargado de la clase PuntoGrafico2D
  p3 = p2;

  // Se usa la función de modificación para cambiar el nombre del punto
  p3.setNombre("p3");

  // Se escriben en la pantalla los datos del punto creado con el constructor de copia
  cout << "\nDatos del punto p3" << endl;
  p3.escribirPuntoGrafico2D();

  // Se usa el extractor de la clase base Punto2D
  cout << "\nCoordenadas del punto p3 usando el extractor \"<<\" de la clase base Punto2D" << endl; 
  cout <<  p3 << endl;

  ///////////////////////////////////////////////////////////////////////////////

  cout << "++++++++++++++++++++++++++++++++++++++++++" << endl << endl;

  // Uso de "string"
  string nombre;

  // Se lee del teclado el nuevo nombre
  cout << "Introduce el nuevo nombre del punto --> ";
  cin >> nombre;

  // Se asigna al punto p3
  p3.setNombre(nombre);

  // Se muestra por pantalla
  cout << "Nuevo nombre de p3 --> " << p3.getNombre() << endl;
  
  p3.escribirPuntoGrafico2D();

  // Fin del programa

  return 0;
}



