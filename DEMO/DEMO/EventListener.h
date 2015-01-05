// EventListener es un rudimentario event listener para el programita de prueba de la clase Clock

#ifndef EVENT_LISTENER_H
#define EVENT_LISTENER_H


#include "Clock.h"
#include <iostream>

class EventListener
{
public:
	EventListener(Clock& myClock);

	void eventReceiver();
	void start();
	void stop();
	void pausa();
	void goToMinute();

private:
	Clock theClock;
	char eventChooser;
};


EventListener::EventListener(Clock& myClock)
{
	theClock = myClock;
}


void EventListener::eventReceiver()
{
	std::cout << "Opciones: a:start s:stop p:pausa g:goToMinute." << std::endl;
	std::cin >> eventChooser;

	switch (eventChooser)
	{
	case 'a':
		start();
		break;
	case 's':
		stop();
		break;
	case 'p':
		pausa();
		break;
	case 'g':
		goToMinute();
		break;
	}
}


void EventListener::start()
{
	theClock.startClock();
}


void EventListener::stop()
{
	theClock.stopClock();
}


void EventListener::pausa()
{
	theClock.pauseClock();
}


void EventListener::goToMinute()
{
	int mins = 0;
	std::cout << "Tiempo deseado en centesimas de segundo." << std::endl;
	std::cin >> mins;

	theClock.minuto(mins);
}





#endif // !EVENT_LISTENER_H