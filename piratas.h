#include <string>
#include <vector>

#ifndef PIRATAS_H
#define PIRATAS_H

using namespace std;

class piratas {

	private:
		string oceano;
		string tripulacion;
		string funcion;

	public:
		piratas();
		piratas(string, string, string);
		string getOceano();
		string getTripulacion();
		string getFuncion();

};

#endif