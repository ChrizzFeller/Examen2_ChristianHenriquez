#include "logia.h"

using namespace std;

logia::logia() {
}

logia::logia(string pnombre, string pelementos) : frutadeldiablo(pnombre){
	elementos = pelementos;
}

string logia::getElementos() {
	return elementos;
}