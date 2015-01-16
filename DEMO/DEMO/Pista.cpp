// Pista.cpp: implementación de la clase Pista

#include "Pista.h"
#include <vector>
#include <string>


Pista::Pista()                  // Constructor default.
{
	pistaId = "";
	audio = "";
	clipEn0 = new ClockTime(0, 0, 0, 0);
	efectosAplicados = new std::vector<Efecto*>;
	masterVolume = 0.0f;
	looped = false;
	activa = true;
	modificable = true;
	seleccionada = false;
	vacia = true;
	historial = false;
	numEf = 0;
}


Pista::Pista(std::string& au)   // Constructor con valores default y referencia a un clip de audio.
{
	Pista();
	audio = &au;
}


Pista::Pista(const std::string& id, std::string& au, const ClockTime& en0, const std::vector<Segmento*>& segs,
	const std::vector<Efecto*>& efcts, float mstrVol, bool loop, bool act, bool mod, bool vac)
{
	Pista(au);

}