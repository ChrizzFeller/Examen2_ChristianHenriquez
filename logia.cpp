#include "logia.h"

using namespace std;

logia::logia() {
}

logia::logia(string pnombre, int ppos, string pelementos) : frutadeldiablo(pnombre, ppos){
	elementos = pelementos;
}

string logia::getElementos() {
	return elementos;
}