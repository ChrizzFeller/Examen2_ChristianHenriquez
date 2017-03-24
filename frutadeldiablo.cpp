#include "frutadeldiablo.h"

using namespace std;

frutadeldiablo::frutadeldiablo() {
}

frutadeldiablo::frutadeldiablo(string pnombre) {
	nombre = pnombre;
}

string frutadeldiablo::getNombre() {
	return nombre;
}