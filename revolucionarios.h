#include <string>
#include <vector>
#include "seres.h"

#ifndef REVOLUCIONARIOS_H
#define REVOLUCIONARIOS_H

using namespace std;

class revolucionarios : public seres {

	private:
		string fechadeingreso;

	public:
		revolucionarios();
		revolucionarios(string, int, string, bool, bool, bool, bool, string);
		string getFecha();

};

#endif