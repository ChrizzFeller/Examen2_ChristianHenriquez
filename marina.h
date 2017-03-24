#include <string>
#include <vector>
#include "seres.h"

#ifndef MARINA_H
#define MARINA_H

using namespace std;

class marina : public seres {

	private:
		string fechadeingreso;
		string rango;

	public:
		marina();
		marina(string, int, string, bool, bool, bool, bool, string, string);
		string getFecha();
		string getRango();

};

#endif