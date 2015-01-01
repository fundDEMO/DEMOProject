// Pista.h: representaciòn de una pista dentro de un demo, con informaciòn sobre el clip de audio que la compone y su configuraciòn al momento de reproducir

#ifndef PISTA_H
#define PISTA_H

#include <string>
#include <vector>
#include "Segmento.h"
#include "Efecto.h"

class Pista
{
public:
	Pista();
	~Pista();

private:
	std::string pistaId; // identificador de la pista.
	std::string audio; //un string que indica el path hacia el clip de audio que compone la pista.
	float clipEn0; // el tiempo en el que se encuentra el punto 0 del clip dentro del demo.
	std::vector<Segmento*> segsRep; // almacena los segmentos de del clip que hay que reproducir. 
	std::vector<Efecto*> efectosAplicados; // almacena todos los efectos que se han aplicado a una pista
	int numSegs; // Variable de control que indica la cantidad de segmentos reproducibles en una pista
	int numEf; // Variable de control que indica el numero de efectos que se han aplicado a una pista.
	float masterVolume; // volumen master de la pista.
	bool looped; // indica que la pista es un loop
	bool activa; // indica que la pista está activa disponible para cargarse en cola de reproducción.
	bool modificable; // indica que la pista puede ser modificada.
	bool seleccionada; //indica que la pista ha sido seleccionada para edición.
	bool vacia; // indica que la pista es una pista vacía disponible para grabación.
	bool historial; // indica que una pista ha sido eliminada del demo y puede ser cargada en el historial del mismo.
};






#endif // !PISTA_H
