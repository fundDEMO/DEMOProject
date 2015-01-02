// Clock.cpp: implementación de la clase Clock.

#include <time.h>
#include "Clock.h"

Clock::Clock()
{
  clockEn0 = clock() / CLOCKS_PER_SEC;
}
