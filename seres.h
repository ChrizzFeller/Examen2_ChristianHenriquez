#include "frutadeldiablo.h"

#include <string>
#include <vector>

#ifndef SERES_H
#define SERES_H

using namespace std;

class seres {

	protected:
		string raza;
		int edad;
		string nombre;
		frutadeldiablo* fruta;
		bool frutaE;
		bool hakiobservacion;
		bool hakiarmadura;
		bool hakirey;

	public:
		//Constructor
		seres();
		seres(string, int, string, bool, bool, bool, bool);

		//Getters
		string getRaza();
		int getEdad();
		string getNombre();
		frutadeldiablo* getFruta();
		bool getHakiobs();
		bool getHakiarmadura();
		bool getHakirey();
		bool getFrutaE();

		//Setter
		void setFruta(frutadeldiablo*);
};

#endif