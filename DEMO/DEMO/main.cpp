// Main para testear clock

#include <iostream>
#include "Clock.h"
#include <Windows.h>

int main()
{	
	Clock myClock;

	bool termina = false;
	float tiempo = 0.0f;

	while (!termina)
	{
		if (myClock.getTiempoRep() >= tiempo && myClock.getTiempoRep() < (tiempo + 2))
		{
			std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t" << myClock.getTiempoRep() << std::endl;
			tiempo += 1;
		}

		Sleep(1000);

		system("cls");
	}
}