#include "frutadeldiablo.h"

using namespace std;

frutadeldiablo::frutadeldiablo() {
}

frutadeldiablo::frutadeldiablo(string pnombre, int ppos) {
	nombre = pnombre;
	pos = ppos;
}

string frutadeldiablo::getNombre() {
	return nombre;
}

int frutadeldiablo::getPos() {
	return pos;
}