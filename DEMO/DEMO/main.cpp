// Main para testear clock

#include <iostream>
#include "Clock.h"
#include <Windows.h>


int main()
{
	int hora = 0, minuto = 0, segundo = 0, centesima = 0;

	char tiempo;

	Clock myClock;

	myClock.startClock();

	while (true){






		{
			centesima = myClock.getTiempoRep();
			segundo = centesima / 100;
			centesima -= (segundo * 100);
			minuto = segundo / 60;
			segundo -= (minuto * 60);
			hora = minuto / 60;
			minuto -= (hora * 60);

			std::cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t" << hora << ":" << minuto << ":" << segundo << "." << centesima << std::endl;

		}

		Sleep(100);
		system("CLS");

	}


}