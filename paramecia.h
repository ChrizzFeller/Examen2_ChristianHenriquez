#include <string>
#include <vector>
#include "frutadeldiablo.h"

#ifndef PARAMECIA_H
#define PARAMECIA_H

using namespace std;

class paramecia : public frutadeldiablo {

	private:
		string descripcion;

	public:
		paramecia();
		paramecia(string, string);
		string getDescripcion();

};

#endif