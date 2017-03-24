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

string seres::getRaza() {
	return this->raza;
}

string seres::getNombre() {
	return this->nombre;
}

frutadeldiablo* seres::getFruta() {
	return this->fruta;
}

bool seres::getHakiobs() { 
	return this->hakiobservacion; 
}

bool seres::getHakiarmadura() { 
	return this->hakiarmadura; 
}

bool seres::getHakirey() { 
	return this->hakirey; 
}

int seres::getEdad() {
	return this->edad;
}

void seres::setFruta(frutadeldiablo* f2) {
	this->fruta = f2;
}

bool seres::getFrutaE() {
	return this->frutaE;
}