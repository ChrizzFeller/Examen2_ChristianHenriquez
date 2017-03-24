#include <string>
#include <vector>

#ifndef ZOAN_H
#define ZOAN_H

using namespace std;

class zoan {

	private:
		string tipo;
		string animal;

	public:
		zoan();
		zoan(string, string);
		string getTipo();
		string getAnimal();

};

#endif