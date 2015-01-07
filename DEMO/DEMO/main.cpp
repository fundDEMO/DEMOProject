// Main para testear clock

#include <iostream>
#include "Clock.h"
#include <Windows.h>
#include "ClockTime.h"
#include "EventListener.h"
#include <thread>


void imprimeReloj(Clock& reloj)
{

	while (true)
	{

		ClockTime time = reloj.getClockTimeTiempoRep();

		if (time.hora < 10)
			std::cout << "0" << time.hora;
		else
			std::cout << time.hora;

		std::cout << ":";

		if (time.minuto < 10)
			std::cout << "0" << time.minuto;

		std::cout << ":";

		if (time.segundo < 10)
			std::cout << "0" << time.segundo;
		else
			std::cout << time.segundo;

		std::cout << ".";

		if (time.centesima < 10)
			std::cout << "0" << time.centesima;
		else
			std::cout << time.centesima;

		std::cout << std::endl;


		system("CLS");

	}
}


int main()
{

	char event = 0;
	int tiempo = 0;

	Clock myClock;

	ClockTime myTime;

	EventListener myEvents(myClock);

	std::thread controlThread(&EventListener::eventReceiver, std::ref(myEvents));
	std::thread relojThread(&imprimeReloj, myClock);

	controlThread.join();


}