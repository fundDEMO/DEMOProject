// Clock.h: la clase representa un reloj que gobierna las funcionalidades de reproducción y de grabación de un demo. Está construído sobre la 
// librería time.h que forma parte de la biblioteca standar de c++, por lo que la iplementación es muy portable.

#ifndef CLOCK_H
#define CLOCK_H

#include<time.h>
#include "ClockTime.h"

class Clock
{
public:
	Clock();

	void minuto(int min);       // avanzar o retrasar reloj hasta un tiempo 'minuto' deseado, expresado en centésimas de segundo.
	void minuto(ClockTime* time); // avanzar o retrasar reloj hasta un tiempo 'minuto' deseado, expresado en ClockTime.
	void pauseClock();          // detiene el reloj instantáneamente.
	void stopClock();           // detiene el reloj y lo vuelve a 0.
	void startClock();          // inicia el conteo del tiempo desde el punto actual del reloj
	 
	
	int getTiempoRep();         // devuelve el tiempo de reproducción válida en un momento dado, expresado en centésimas de segundo.
	ClockTime getClockTimeTiempoRep(); // devuelve el tiempo de reproducción válida en un momento dado, expresado en ClockTime struct.

private:
	clock_t clockEn0;           // Determina el momento 0 de referencia de cada conteo del reloj.
	clock_t tiempoRep;          // almacena el tiempo de reproducción válida.
	bool pausa;                 // indica que el reloj ha sido detenido.
};

#endif //!CLOCK_H
