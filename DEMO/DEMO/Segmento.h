// Segmento.h: representación de un segmento de tiempo entre dos ClockTime, utilizado para propósitos generales

#ifndef SEGMENTO_H
#define SEGMENTO_H

#include "ClockTime.h"


class Segmento
{
private:
	ClockTime* inicioSeg;
	ClockTime* finalSeg;
	int duracion;

public:
	Segmento(ClockTime& in, ClockTime& fn);
};


Segmento::Segmento(ClockTime& in, ClockTime& fn)
{
	inicioSeg = &in;
	finalSeg = &fn;
	duracion = finalSeg->ClockTimeToSs() - inicioSeg->ClockTimeToSs();
}

#endif // !SEGMENTO_H