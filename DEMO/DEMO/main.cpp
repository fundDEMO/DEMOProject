// Main para testear clock

#include <iostream>
#include "Clock.h"
#include <Windows.h>
#include "ClockTime.h"
#include "EventListener.h"


int main()
{
	//int hora = 0, minuto = 0, segundo = 0, centesima = 0;

	char event = 0;
	int tiempo = 0;

	Clock myClock;

	while (true)
	{

		std::cout << "Opciones: p.pausa s.stop. a.start g.goto t.tiempo." << std::endl;
		std::cin >> event;

		switch (event)
		{
		case 'p':
			myClock.pauseClock();
			break;
		case 's':
			myClock.stopClock();
			break;
		case 'a':
			myClock.startClock();
			break;
		case 'g':
			std::cout << "tiempo." << std::endl;
			std::cin >> tiempo;
			myClock.minuto(tiempo);
			break;
		case 't':
			std::cout << myClock.getTiempoRep() << std::endl;
		}

	}

}