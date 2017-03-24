#include <string>
#include <vector>
#include "frutadeldiablo.h"

#ifndef LOGIA_H
#define LOGIA_H

using namespace std;

class logia : public frutadeldiablo {

	private:
		string elementos;

	public:
		logia();
		logia(string, string);
		string getElementos();

};

#endif