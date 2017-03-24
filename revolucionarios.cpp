#include "revolucionarios.h"

using namespace std;

revolucionarios::revolucionarios() {
}

revolucionarios::revolucionarios(string pRaza, int pEdad, string pnombre, bool pfrutaE, bool phakiobservacion, bool phakiarmadura, bool phakirey, string pfechaingreso) : seres(pRaza, pEdad, pnombre, pfrutaE, phakiobservacion, phakiarmadura, phakirey) {
	fechadeingreso = pfechaingreso;
}

string revolucionarios::getFecha() {
	return fechadeingreso;
}