// Clock.cpp: implementación de la clase 'Clock'.

#include <time.h>
#include "Clock.h"

Clock::Clock()
{
	clockEn0 = clock() / CLOCKS_PER_SEC;
	tiempoRep = 0;
	pausado = false;
	reseteado = false;
}


void Clock::minuto(float min)
{
	tiempoRep = min;
}


void Clock::pauseClock()
{
	pausado = true;
}


void Clock::stopClock()
{
	reseteado = true;
}


void Clock::startClock()
{

	clockEn0 = clock() / CLOCKS_PER_SEC;

	if (reseteado)
	{
		tiempoRep = 0;
		reseteado = false;
	}
	else if (pausado)
		pausado = false;
}


float Clock::getTiempoRep()
{
	tiempoRep = (clock() / (CLOCKS_PER_SEC)) - clockEn0;
	return tiempoRep;
}
