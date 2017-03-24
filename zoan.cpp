#include "zoan.h"

using namespace std;

zoan::zoan() {
}

zoan::zoan(string pnombre, string ptipo, string panimal) : frutadeldiablo(pnombre) {
	tipo = ptipo;
	animal = panimal;
}

string zoan::getTipo() {
	return tipo;
}

string zoan::getAnimal() {
	return animal;
}