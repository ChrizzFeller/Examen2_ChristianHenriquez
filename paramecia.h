#include <string>
#include <vector>

#ifndef PARAMECIA_H
#define PARAMECIA_H

using namespace std;

class paramecia {

	private:
		string descripcion;

	public:
		paramecia();
		paramecia(string);
		string getDescripcion();

};

#endif