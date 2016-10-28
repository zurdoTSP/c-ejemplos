
CPPFLAGS = -g -Wall -ansi
OBJECTS = practica_7.o 

practica_7.exe: practica_7.o 
	g++ -o practica_7.exe $(OBJECTS)

practica_7.o: practica_7.cpp  punto2D.hpp punto2D.cpp distancias2D.hpp
	g++ -c $(CPPFLAGS) practica_7.cpp 

clean:
	rm -f $(OBJECTS)
