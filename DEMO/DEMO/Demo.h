 // Demo.h: representaciòn general del demo, con funcionalidades de control.

#ifndef DEMO_H
#define DEMO_H

#include <string>
#include <vector>
#include "Clock.h"

class Demo
{
public:
	Demo(); // Constructor default: se utiliza cuando se crea una nueva pista.
	Demo(Demo& rhs); // Constructor de copia
	Demo(std::string iD, std::vector<std::string> pistas, int activas); // Constructor completo 
	~Demo();

	Demo& operator=(Demo& rhs);

	void iniciaPistas();
	void play();
	void stop();
	void pause();


private:
	std::string demoID; // identificador del demo
	std::vector<std::string> pistas; // el vector almacena los IDs de todas las pistas incluidas en el demo
	int numPistasActivas; // indica la cantidad de pistas activas que el demo tiene en un momento dado
	std::vector<std::string> pistasActivas; // almacena las pistas activas que hay en el demo al momento de iniciar la reproducciòn
	float tiempoReproduccionTotal; // indica la suma total de tiempo que abarca la reproducciòn total del demo en un momento dado.
	Clock relojDemo; // reloj interno de referencia para reproducciòn y grabaciòn.
};


#endif // !DEMO_H
