#include "paramecia.h"

using namespace std;

paramecia::paramecia() {
}

paramecia::paramecia(string pnombre, int ppos, string pdescripcion) : frutadeldiablo(pnombre, ppos) {
	descripcion = pdescripcion;
}

string paramecia::getDescripcion() {
	return descripcion;
}