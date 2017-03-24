#include <string>
#include <vector>

#ifndef REVOLUCIONARIOS_H
#define REVOLUCIONARIOS_H

using namespace std;

class revolucionarios {

	private:
		string fechadeingreso;

	public:
		revolucionarios();
		revolucionarios(string);
		string getFecha();

};

#endif