#include <string>
#include <vector>

#ifndef MARINA_H
#define MARINA_H

using namespace std;

class marina {

	private:
		string fechadeingreso;
		string rango;

	public:
		marina();
		marina(string, string);
		string getFecha();
		string getRango();

};

#endif