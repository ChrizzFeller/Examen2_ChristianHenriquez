#include <string>
#include <vector>

#ifndef FRUTADELDIABLO_H
#define FRUTADELDIABLO_H

using namespace std;

class frutadeldiablo {

	protected:
		string nombre;
		int pos;

	public:
		frutadeldiablo();
		frutadeldiablo(string, int);
		string getNombre();
		int getPos();

};

#endif