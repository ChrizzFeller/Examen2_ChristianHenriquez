#include "seres.h"

using namespace std;

//Constructor
seres::seres() {
}

seres::seres(string pRaza, int pEdad, string pnombre, bool pfrutaE, bool phakiobservacion, bool phakiarmadura, bool phakirey) {
	raza = pRaza;
	edad = pEdad;
	nombre = pnombre;
	pfrutaE = frutaE;
	phakiobservacion = hakiobservacion;
	phakiarmadura = hakiarmadura;
	phakirey = hakirey;
}

seres::getRaza() {
	return this->raza;
}

seres::getNombre() {
	return this->nombre;
}

seres::getfrutadeldiablo() {
	return this->fruta;
}

seres::getHakiobservacion() { 
	return this->hakiobservacion; 
}

seres::getHakiarmadura() { 
	return this->hakiarmadura; 
}

seres::getHakirey() { 
	return this->hakirey; 
}

seres::getEdad() {
	return this->edad;
}

seres::setFruta(frutadeldiablo f2) {
	this->fruta = f2;
}

seres::getFrutaE() {
	return this->frutaE;
}