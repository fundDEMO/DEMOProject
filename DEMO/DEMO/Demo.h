 // Demo.h

#ifndef DEMO_H
#define DEMO_H

#include <string>
#include <vector>
#include "Clock.h"

class Demo
{
public:
	Demo();
	Demo(Demo& rhs);
	Demo(/*con todos los argumentos*/);
	~Demo();

	Demo& operator=(Demo& rhs);

	void iniciaPistas();
	void play();
	void stop();
	void pause();


private:
	std::string demoID;
	std::vector<std::string> Pistas;
	int numPistasActivas;
	float tiempoReproduccionTotal;
	Clock relojDemo;
};


#endif // !DEMO_H
