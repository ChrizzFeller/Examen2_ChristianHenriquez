#include <string>
#include <vector>
#include "seres.h"

#ifndef PIRATAS_H
#define PIRATAS_H

using namespace std;

class piratas : public seres {

	private:
		string oceano;
		string tripulacion;
		string funcion;

	public:
		piratas();
		piratas(string, int, string, bool, bool, bool, bool, string, string, string);
		string getOceano();
		string getTripulacion();
		string getFuncion();

};

#endif