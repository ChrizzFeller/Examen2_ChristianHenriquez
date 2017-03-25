#include "zoan.h"

using namespace std;

zoan::zoan() {
}

zoan::zoan(string pnombre, int ppos, string ptipo, string panimal) : frutadeldiablo(pnombre, ppos) {
	tipo = ptipo;
	animal = panimal;
}

string zoan::getTipo() {
	return tipo;
}

string zoan::getAnimal() {
	return animal;
}