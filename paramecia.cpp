#include "paramecia.h"

using namespace std;

paramecia::paramecia() {
}

paramecia::paramecia(string pnombre, string pdescripcion) : frutadeldiablo(pnombre) {
	descripcion = pdescripcion;
}

string paramecia::getDescripcion() {
	return descripcion;
}