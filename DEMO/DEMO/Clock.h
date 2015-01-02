// Clock.h: la clase representa un reloj que gobierna las funcionalidades de reproducción y de grabación de un demo.

#ifndef CLOCK_H
#define CLOCK_H

#include<time.h>

class Clock
{
public:
	Clock();
	~Clock();

	float minuto(float minuto); // avanzar o retrasar reloj hasta un tiempo 'minuto' deseado.
	void pauseClock(); // detiene el reloj instantáneamente.
	void stopClock(); // detiene el reloj y lo vuelve a 0.
	void startClock(); // inicia el conteo del tiempo desde el punto actual del reloj
	
	float getTiempoRep(); // devuelve el tiempo de reproducción válida en un momento dado.

private:
	float clockEn0; // indica el momento 0 de la reproducción. A partir de ahí se inicia el conteo.
	float tiempoRep; // almacena el tiempo de reproducción válida.
	bool pausado; // indica que el reloj está en pausa.
	bool reseteado; // indica que el reloj se ha vuelto a 0 después de un stop.
};

#endif //!CLOCK_H
