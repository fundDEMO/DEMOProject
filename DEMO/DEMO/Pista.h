// Pista.h: representaciòn de una pista dentro de un demo, con informaciòn sobre el clip de audio que la compone y su configuraciòn al momento de reproducir

#ifndef PISTA_H
#define PISTA_H

#include <string>
#include <vector>
#include <string>
#include "Segmento.h"
#include "Efecto.h"
#include "ClockTime.h"

class Pista
{
public:
	Pista();                    // Constructor default, crea una pista vacía con valores default.
	Pista(std::string& au);  // Constructor con valores default y referencia a un clip de audio
	Pista(const std::string& id, std::string& au, const ClockTime& en0, const std::vector<Segmento*>& segs,
		  const std::vector<Efecto*>& efcts, float mstrVol, bool loop, bool act, bool mod, bool vac);
	                            // Constructor completo de pista.
	Pista(Pista& rhs);          // Copy constructors
	~Pista();                   // Destructor

	Pista& operator = (Pista& rhs); // Sobrecarga de operador de asignación
	bool operator == (Pista& rhs);  // Sobrecarga de operador de comparación
	Pista& operator + ();       // Sobrecarga de operador + para representar la fusión de dos pistas

	Pista& copiaPista(Pista& rhs); // realiza una deep copy de una pista existente.
	void eliminaPista();        // elimina la pista del Demo pero no la destruye, en lugar de eso dispone
						        // las cosas para que la pista pase a un historial de donde pueda ser
						        // recuperada.

	void setMasterVolumen(float vol); // Modifica el volumen master de la pista
	void nuevoEfecto(Segmento* seg, Efecto* efct); // Añade un efecto a la pista
	void setClipEn0(ClockTime nuevoTiempo); // modifica clipEn0.
	void setLoop();             // determina que la pista es un loop. Hay que verlo por ahi lo dejamos en efecto.

	std::string getId();        // devuelve el id de la pista.
	std::string getAudioPath(); // devuelve el path del archivo de audio.
	ClockTime getClipEn0();     // devuelve el valor actual de clipEn0.
	std::vector<Efecto*>* getEfectosAplicados(); // devuelve un puntero que apunta al vector que 
		                        // aloja todos los efectos aplicados a la pista
	int getNumEfcts();          // devuelve la cantidad de segmentos con efectos aplicados.
	float getMasterVolumen();   // devuelve el valor del volumen master de la pista.
	bool getLoop();             // devuelve true si la pista es un loop
	bool getActiva();           // devuelve true si la pista está activa
	bool getVacia();            // devuelve true si la pista está vacía.
	bool getHistorial();        // devuelve true si la pista está disponible para guardarse en Historial.

private:
	std::string pistaId;        // identificador de la pista.
	std::string* audio;          //un string que indica el path hacia el clip de audio que compone la pista.
	ClockTime* clipEn0;          // el tiempo en el que se encuentra el punto 0 del clip dentro del demo.
	std::vector<Efecto*>* efectosAplicados; // almacena todos los efectos que se han aplicado a una pista
	float masterVolume;         // volumen master de la pista.
	bool looped;                // indica que la pista es un loop
	bool activa;                // indica que la pista está activa disponible para cargarse en cola de reproducción.
	bool modificable;           // indica que la pista puede ser modificada
	bool seleccionada;          // indica que la pista ha sido seleccionada para edición.
	bool vacia;                 // indica que la pista es una pista vacía disponible para grabación.
	bool historial;             // indica que una pista ha sido eliminada del demo y puede ser cargada en el historial del mismo.
	int numEf;                  // Variable de control que indica el numero de efectos que se han aplicado a una pista.
};






#endif // !PISTA_H
