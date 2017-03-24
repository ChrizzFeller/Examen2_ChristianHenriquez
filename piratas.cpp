#include "piratas.h"

using namespace std;

piratas::piratas() {
}

piratas::piratas(string pRaza, int pEdad, string pnombre, bool pfrutaE, bool phakiobservacion, bool phakiarmadura, bool phakirey, string poceano, string ptripulacion, string pfuncion) : seres(pRaza, pEdad, pnombre, pfrutaE, phakiobservacion, phakiarmadura, phakirey) {
	oceano = poceano;
	tripulacion = ptripulacion;
	funcion = pfuncion;
}

string piratas::getOceano() {
	return oceano;
}

string piratas::getTripulacion() {
	return tripulacion;
}

string piratas::getFuncion() {
	return funcion;
}