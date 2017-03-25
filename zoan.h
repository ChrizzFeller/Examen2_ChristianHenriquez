#include <string>
#include <vector>
#include "frutadeldiablo.h"

#ifndef ZOAN_H
#define ZOAN_H

using namespace std;

class zoan : public frutadeldiablo {

	private:
		string tipo;
		string animal;

	public:
		zoan();
		zoan(string, int, string, string);
		string getTipo();
		string getAnimal();

};

#endif