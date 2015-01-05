// Clock.cpp: implementación de la clase 'Clock'.

#include <time.h>
#include "Clock.h"
#include "ClockTime.h"

Clock::Clock()
{
	clockEn0 = 0;
	tiempoRep = 0;
	pausa = false;
	contando = 0;
}


void Clock::minuto(int min) // traslada el conteo del tiempo al tiempo que se indique en el argumento 'min' (centésimas de segundo).
{
	tiempoRep = min * (CLOCKS_PER_SEC / 100);
	startClock();
}


void Clock::pauseClock() // detiene el conteo de tiempo pero mantiene el último valor de tiempoRep.
{
	if (!pausa)
	{
		pausa = true;
		contando = clock() - clockEn0;
		tiempoRep += contando;
	}
	else
	{
		tiempoRep = tiempoRep; // revisar esto con el reloj andando
	}
	
}


void Clock::stopClock() // detiene el conteo de tiempo y reseteta la variable tiempoRep para reinciciar el conteo desde 0 la próxima vez.
{
	pausa = true;
	tiempoRep = 0;
}


void Clock::startClock() // pone en marcha el reloj contando el tiempo en c_ticks
{
	clockEn0 = clock();
	if (pausa)
		pausa = false;
}


int Clock::getTiempoRep() // devuelve el tiempo de reproducción transcurrido, expresado en centésimas de segundo.
{
	if (!pausa)
		return ((clock() - clockEn0) + tiempoRep) / (CLOCKS_PER_SEC / 100);
	else
		return tiempoRep / (CLOCKS_PER_SEC / 100);
}

ClockTime Clock::getClockTimeTiempoRep()
{
	int temporalTiempoRep, hora, minuto, segundo, centesima;

	if (!pausa)
		temporalTiempoRep = ((clock() - clockEn0) + tiempoRep) / (CLOCKS_PER_SEC / 100);
	else
		temporalTiempoRep = tiempoRep / (CLOCKS_PER_SEC / 100);

	centesima = temporalTiempoRep;
	segundo = centesima / 100;
	centesima -= (segundo * 100);
	minuto = segundo / 60;
	segundo -= (minuto * 60);
	hora = minuto / 60;
	minuto -= (hora * 60);

	ClockTime returnClockTimeTiempoRep;

	returnClockTimeTiempoRep.hora = hora;
	returnClockTimeTiempoRep.minuto = minuto;
	returnClockTimeTiempoRep.segundo = segundo;
	returnClockTimeTiempoRep.centesima = centesima;

	return returnClockTimeTiempoRep;
	
}