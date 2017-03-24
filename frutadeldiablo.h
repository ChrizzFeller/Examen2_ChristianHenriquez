#include <string>
#include <vector>

#ifndef FRUTADELDIABLO_H
#define FRUTADELDIABLO_H

using namespace std;

class frutadeldiablo {

	protected:
		string nombre;

	public:
		frutadeldiablo();
		frutadeldiablo(string);
		string getNombre();

};

#endif