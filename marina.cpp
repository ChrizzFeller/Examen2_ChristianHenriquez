#include "marina.h"

using namespace std;

marina::marina() {
}

marina::marina(string pRaza, int pEdad, string pnombre, bool pfrutaE, bool phakiobservacion, bool phakiarmadura, bool phakirey, string pfechadeingreso, string prango) : seres(pRaza, pEdad, pnombre, pfrutaE, phakiobservacion, phakiarmadura, phakirey) {
	fechadeingreso = pfechadeingreso;
	rango = prango;
}

string marina::getFecha() {
	return fechadeingreso;
}

string marina::getRango() {
	return rango;
}