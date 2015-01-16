// ClockTime es un struct que representa un valor de tiempo en cuatro variables: hora, minuto, segundo y centésima. Además provee la 
// funcionalidad de traducir el tiempo a centésimas de segundo.

#ifndef CLOCK_TIME_H
#define CLOCK_TIME_H

struct ClockTime
{
	ClockTime();
	ClockTime(int h, int m, int s, int c); // Constructor
	int ClockTimeToSs();

	int hora;
	int minuto;
	int segundo;
	int centesima;
};


ClockTime::ClockTime(int h, int m, int s, int c)
{
	hora = h;
	minuto = m;
	segundo = s;
	centesima = c;
}


int ClockTime::ClockTimeToSs()
{
	return this->centesima + (this->segundo * 100) + (this->minuto * 60 * 100) + (this->hora * 60 * 60 * 100);
}

#endif // !CLOCK_TIME_H