// Main para testear clock

#include <iostream>
#include "Clock.h"
#include <Windows.h>
#include "ClockTime.h"
#include "EventListener.h"


int main()
{
	int hora = 0, minuto = 0, segundo = 0, centesima = 0;

	char event = 0;

	Clock myClock;

	EventListener myEventListener(myClock);

	myEventListener.eventReceiver();

	myClock.startClock();

	while (true)
	{

		ClockTime myActualTime = myClock.getClockTimeTiempoRep();

			if (myActualTime.hora < 10)
				std::cout << "0" << myActualTime.hora;
			else
				std::cout << myActualTime.hora;

			std::cout << ":";

			if (myActualTime.minuto < 10)
				std::cout << "0" << myActualTime.minuto;
			else
				std::cout << myActualTime.minuto;

			std::cout << ":";

			if (myActualTime.segundo < 10)
				std::cout << "0" << myActualTime.segundo;
			else
				std::cout << myActualTime.segundo;

			std::cout << ".";

			if (myActualTime.centesima < 10)
				std::cout << "0" << myActualTime.centesima;
			else
				std::cout << myActualTime.centesima;

			std::cout << std::endl << std::endl;

			system("CLS");




	}

}