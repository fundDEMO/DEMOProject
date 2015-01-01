// Clock.h: la clase representa un reloj que gobierna las funcionalidades de reproducciòn y de grabaciòn de un demo.

#ifndef CLOCK_H
#define CLOCK_H

#include<time.h>

class Clock
{
public:
	Clock();
	~Clock();

	float minuto(float minuto); // avanzar o retrasar reloj hasta un tiempo 'minuto' deseado.
	void startClock(); // inicia el conteo del tiempo desde el punto actual del reloj


};



#endif //!CLOCK_H