#include <string>
#include <vector>

#ifndef LOGIA_H
#define LOGIA_H

using namespace std;

class logia {

	private:
		string elemento;

	public:
		logia();
		logia(string);
		string getElemento();

};

#endif