#include "seres.h"
#include "marina.h"
#include "piratas.h"
#include "revolucionarios.h"
#include "frutadeldiablo.h"
#include "paramecia.h"
#include "zoan.h"
#include "logia.h"

#include <sstream>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void imprimirSer(seres*);

int main() {
	vector<seres*> listaseres;
	vector<frutadeldiablo*> listafrutas;
	listaseres.push_back(new piratas("Humano", 19, "Monkey D. Luffy", true, true, true, true, "East Blue", "Sombreros de Pajas", "Capitan"));
	listaseres.at(0) -> setFruta(new paramecia("Gomu Gomu no Mi", 0, "Da poderes de goma."));
	imprimirSer(listaseres.at(0));
	bool continuar = true;
	int posfruta = -1;
	int posser = listaseres.size() - 1;
	while (continuar == true) {
		cout << "---------- Menu ----------" << endl;
		cout << "Eliga una opcion: " << endl;
		cout << "1) Seres" << endl;
		cout << "2) Frutas" << endl;
		int respuesta1;
		cin >> respuesta1;
		while (respuesta1 < 1 || respuesta1 > 2) {
			cout << "Numero invalido! Ingrese su opcion de nuevo!" << endl;
			cin >> respuesta1;
		}
		if (respuesta1 == 1)
		{
			cout << "Que desea agregar o listar?" << endl;
			cout << "1) Agregar" << endl;
			cout << "2) Listar" << endl;
			int respuesta2;
			cin >> respuesta2;
			while (respuesta2 < 1 || respuesta2 > 2) {
				cout << "Numero invalido! Ingrese su opcion de nuevo!" << endl;
				cin >> respuesta2;
			}
			if (respuesta2 == 1)
			{
				string raza;
				int razaI;
				int edad;
				string nombre;
				bool frutaE;
				bool hakiobservacion;
				bool hakiarmadura;
				bool hakirey;
				int respfruta;
				int tipofruta;
				int elegirfruta;
				posser++;
				cout << "Ingrese la raza del ser: " << endl;
				cout << "1) Gyojin" << endl;
				cout << "2) Kyojin" << endl;
				cout << "3) Ningyo" << endl;
				cout << "4) Humano" << endl;
				cout << "5) Mink" << endl;
				cout << "6) Skypieans" << endl;
				cin >> razaI;
				while (razaI < 1 || razaI > 6) {
					cout << "Numero invalido! Ingrese su opcion de nuevo!" << endl;
					cin >> razaI;
				}
				if (razaI == 1)
				{
					raza = "Gyojin";
				} else if (razaI == 2)
				{
					raza = "Kyojin";
				} else if (razaI == 3)
				{
					raza = "Ningyo";
				} else if (razaI == 4)
				{
					raza = "Humano";
				} else if (razaI == 5)
				{
					raza = "Mink";
				} else
				{
					raza = "Skypieans";
				}
				cout << "Ingrese la edad del ser: " << endl;
				cin >> edad;
				cout << "Ingrese el nombre del ser: " << endl;
				cin >> nombre;
				cout << "Ha consumido una fruta del diablo?" << endl;
				cout << "1) Si" << endl << "2) No" << endl;
				cin >> respfruta;
				while (respfruta < 1 || respfruta > 2) {
					cout << "Numero invalido! Ingrese su opcion de nuevo!" << endl;
					cin >> respfruta;
				}
				bool sacarlista = false;
				if (respfruta == 1)
				{
					cout << "Desea crear una fruta o elegir una de la lista?" << endl << "1) Crear" << endl << "2) Elegir" << endl;
					int sacarlistaI;
					cin >> sacarlistaI;
					if (sacarlistaI == 1)
					{
						sacarlista = false;
					} else {
						sacarlista = true;
					}
				}
				if (respfruta == 1 && sacarlista == false)
				{
					frutaE = true;
					cout << "Ingrese el tipo de fruta: " << endl;
					cout << "1) Paramecia" << endl << "2) Zoan" << endl << "3) Logia" << endl;
					cin >> tipofruta;
					while (tipofruta < 1 || tipofruta > 3) {
						cout << "Numero invalido! Ingrese su opcion de nuevo!" << endl;
						cin >> tipofruta;
					}
					string nombreFruta;
					cout << "Ingrese nombre de la fruta: " << endl;
					cin >> nombreFruta;
					if (tipofruta == 1)
					{
						string descripcion;
						cout << "Ingrese descripcion de la fruta: " << endl;
						cin >> descripcion;
						posfruta++;
						listafrutas.push_back(new paramecia(nombreFruta, posfruta, descripcion));
					} else if (tipofruta == 2)
					{
						string tipozoan;
						int tipozoanI;
						string animal;
						cout << "Ingrese tipo de zoan: " << endl << "1) Normal" << endl << "2) Prehistorico" << endl << "3) Legendaria" << endl;
						cin >> tipozoanI;
						while (tipozoanI < 1 || tipozoanI > 3) {
							cout << "Numero invalido! Ingrese su opcion de nuevo!" << endl;
							cin >> tipozoanI;
						}
						if (tipozoanI == 1)
						{
							tipozoan = "Normal";
						} else if (tipozoanI == 2)
						{
							tipozoan = "Prehistorico";
						} else {
							tipozoan = "Legendaria";
						}
						cout << "Ingrese el animal que representa." << endl;
						cin >> animal;
						posfruta++;
						listafrutas.push_back(new zoan(nombreFruta, posfruta, tipozoan, animal));
					} else {
						string elemento;
						cout << "Ingrese el elemento que representa: " << endl;
						cin >> elemento;
						posfruta++;
						listafrutas.push_back(new logia(nombreFruta, posfruta, elemento));
					}
				} else if (respfruta == 1 && sacarlista == true)
				{
					frutaE = true;
					bool frutarepetida = false;
					cout << "Eliga una fruta de a lista: " << endl;
					for (int i = 0; i < listafrutas.size(); ++i)
					{
						cout << "Fruta " << (i) << " " << listafrutas.at(i) -> getNombre() << endl;
					}
					cin >> elegirfruta;
					for (int i = 0; i < listafrutas.size(); ++i)
					{
						if (elegirfruta == listafrutas.at(i) -> getPos())
						{
							frutarepetida = true;
							i = listafrutas.size();
						}
					}
					while (frutarepetida = true) {
						cout << "Fruta repetida, ingrese otro numero!" << endl;
						cin >> elegirfruta;
						frutarepetida = false;
						for (int i = 0; i < listafrutas.size(); ++i)
						{
							if (elegirfruta == listafrutas.at(i) -> getPos())
							{
								frutarepetida = true;
								i = listafrutas.size();
							}
						}
					}
				} else {
					frutaE = false;
				}
				cout << "Tiene el haki de observacion?" << endl << "1) Si" << endl << "2) No" << endl;
				int respobs;
				cin >> respobs;
				while (respobs < 1 || respobs > 2) {
					cout << "Numero invalido! Ingrese su opcion de nuevo!" << endl;
					cin >> respobs;
				}
				if (respobs == 1)
				{
					hakiobservacion = true;
				} else {
					hakiobservacion = false;
				}
				cout << "Tiene el haki de armadura?" << endl << "1) Si" << endl << "2) No" << endl;
				int resparm;
				cin >> resparm;
				while (resparm < 1 || resparm > 2) {
					cout << "Numero invalido! Ingrese su opcion de nuevo!" << endl;
					cin >> resparm;
				}
				if (resparm == 1)
				{
					hakiarmadura = true;
				} else {
					hakiarmadura = false;
				}
				cout << "Tiene el haki del rey?" << endl << "1) Si" << endl << "2) No" << endl;
				int resprey;
				cin >> resprey;
				while (resprey < 1 || resprey > 2) {
					cout << "Numero invalido! Ingrese su opcion de nuevo!" << endl;
					cin >> resprey;
				}
				if (resprey == 1)
				{
					hakirey = true;
				} else {
					hakirey = false;
				}

				cout << "Que tipo de ser desea agregar?" << endl;
				cout << "1) Marina" << endl;
				cout << "2) Pirata" << endl;
				cout << "3) Revolucionario" << endl;
				int respuesta3;
				cin >> respuesta3;
				while (respuesta3 < 1 || respuesta3 > 3) {
					cout << "Numero invalido! Ingrese su opcion de nuevo!" << endl;
					cin >> respuesta3;
				}
				if (respuesta3 == 1)
				{
					string fechadeingreso;
					string rango;
					int rangoI;
					cout << "Ingrese la fecha de ingreso del ser: " << endl;
					cin >> fechadeingreso;
					cout << "Ingrese el rango del ser: " << endl << "1) Cadete" << endl << "2) Teniente" << endl << "3) Vice - Almirante" << endl << "4) Almirante" << endl << "5) Almirante de Flota" << endl;
					cin >> rangoI;
					while (rangoI < 1 || rangoI > 5) {
						cout << "Numero invalido! Ingrese un numero de nuevo!" << endl;
						cin >> rangoI;
					}
					if (rangoI == 1)
					{
						rango = "Cadete";
					} else if (rangoI == 2)
					{
						rango = "Teniente";
					} else if (rangoI == 3)
					{
						rango = "Vice - Almirante";
					} else if (rangoI == 4)
					{
						rango = "Almirante";
					} else
					{
						rango = "Almirante de Flota";
					}
					listaseres.push_back(new marina(raza, edad, nombre, frutaE, hakiobservacion, hakiarmadura, hakirey, fechadeingreso, rango));
					imprimirSer(listaseres.at(posser));
					if (frutaE == true && sacarlista == false)
					{
						listaseres.at(posser) -> setFruta(listafrutas.at(posfruta));
					} else if (frutaE == true && sacarlista == true)
					{
						listaseres.at(posser) -> setFruta(listafrutas.at(elegirfruta));
					}
				} else if (respuesta3 == 2)
				{
					string oceano;
					string tripulacion;
					string funcion;
					cout << "Ingrese el oceano donde proviene: " << endl << "1) East Blue" << endl << "2) West Blue" << endl << "3) South Blue" << endl << "4) North Blue" << endl << "5) Grand Line" << endl << "6) New World" << endl;
					int respoceano;
					cin >> respoceano;
					while (respoceano < 1 || respoceano > 6) {
						cout << "Numero invalido! Ingrese su opcion de nuevo! 2" << endl;
						cin >> respoceano;
					}
					if (respoceano == 1)
					{
						oceano = "East Blue";
					} else if (respoceano == 2)
					{
						oceano = "West Blue";
					} else if (respoceano == 2)
					{
						oceano = "South Blue";
					} else if (respoceano == 2)
					{
						oceano = "North Blue";
					} else if (respoceano == 2)
					{
						oceano = "Grand Line";
					} else {
						oceano = "New World";
					}
					cout << "Ingrese de que tripulacion es: " << endl;
					cin >> tripulacion;
					cout << "Ingrese la funcion del ser: " << endl;
					cin >> funcion;
					listaseres.push_back(new piratas(raza, edad, nombre, frutaE, hakiobservacion, hakiarmadura, hakirey, oceano, tripulacion, funcion));
					imprimirSer(listaseres.at(posser));
					if (frutaE == true && sacarlista == false)
					{
						listaseres.at(posser) -> setFruta(listafrutas.at(posfruta));
					} else if (frutaE == true && sacarlista == true)
					{
						listaseres.at(posser) -> setFruta(listafrutas.at(elegirfruta));
					}
				} else {
					string fechadeingreso2;
					cout << "Ingrese la fecha de ingreso del ser: " << endl;
					cin >> fechadeingreso2;
					listaseres.push_back(new revolucionarios(raza, edad, nombre, frutaE, hakiobservacion, hakiarmadura, hakirey, fechadeingreso2));
					imprimirSer(listaseres.at(posser));
					if (frutaE == true && sacarlista == false)
					{
						listaseres.at(posser) -> setFruta(listafrutas.at(posfruta));
					} else if (frutaE == true && sacarlista == true)
					{
						listaseres.at(posser) -> setFruta(listafrutas.at(elegirfruta));
					}
				}
			} else {
				for (int i = 0; i < listaseres.size(); ++i)
				{
					cout << "Ser #" << i << " " << listaseres.at(i) -> getNombre() << endl;
				}
			}// Fin agregar y listar de frutas
		} else {
			cout << "Que desea hacer?" << endl << "1) Agregar" << endl << "2) Listar" << endl;
			int respuesta4;
			cin >> respuesta4;
			while (respuesta4 < 1 || respuesta4 > 2) {
				cout << "Numero invalido! 3" << endl;
				cin >> respuesta4;
			}
			if (respuesta4 == 1)
			{
				int tipofruta2;
				cout << "Ingrese el tipo de fruta: " << endl;
				cout << "1) Paramecia" << endl << "2) Zoan" << endl << "3) Logia" << endl;
				cin >> tipofruta2;
				while (tipofruta2 < 1 || tipofruta2 > 3) {
					cout << "Numero invalido! Ingrese su opcion de nuevo!" << endl;
					cin >> tipofruta2;
				}
				string nombreFruta2;
				cout << "Ingrese nombre de la fruta: " << endl;
				cin >> nombreFruta2;
				if (tipofruta2 == 1)
				{
					string descripcion;
					cout << "Ingrese descripcion de la fruta: " << endl;
					cin >> descripcion;
					posfruta++;
					listafrutas.push_back(new paramecia(nombreFruta2, posfruta, descripcion));
				} else if (tipofruta2 == 2)
				{
					string tipozoan;
					int tipozoanI;
					string animal;
					cout << "Ingrese tipo de zoan: " << endl << "1) Normal" << endl << "2) Prehistorico" << endl << "3) Legendaria" << endl;
					cin >> tipozoanI;
					while (tipozoanI < 1 || tipozoanI > 3) {
						cout << "Numero invalido! Ingrese su opcion de nuevo!" << endl;
						cin >> tipozoanI;
					}
					if (tipozoanI == 1)
					{
						tipozoan = "Normal";
					} else if (tipozoanI == 2)
					{
						tipozoan = "Prehistorico";
					} else {
						tipozoan = "Legendaria";
					}
					cout << "Ingrese el animal que representa." << endl;
					cin >> animal;
					posfruta++;
					listafrutas.push_back(new zoan(nombreFruta2, posfruta, tipozoan, animal));
				} else {
					string elemento;
					cout << "Ingrese el elemento que representa: " << endl;
					cin >> elemento;
					posfruta++;
					listafrutas.push_back(new logia(nombreFruta2, posfruta, elemento));
				}
			} else {
				for (int i = 0; i < listafrutas.size(); ++i)
				{
					cout << "Fruta #" << i << " " << listafrutas.at(i) -> getNombre() << endl;
				}
			}
		} //Fin if frutas o seres
		cout << "Desea seguir con el programa?" << endl << "1) Si" << endl << "2) No" << endl;
		int respuestasalir;
		cin >> respuestasalir;
		while (respuestasalir < 1 || respuestasalir > 2) {
			cout << "Numero invalido, ingrese su opcion de nuevo." << endl;
			cin >> respuestasalir;
		}
		if (respuestasalir == 1)
		{
			continuar = true;
		} else {
			continuar = false;
		}
	}//Fin while

	for (int i=0; i< listaseres.size(); i++){
		listaseres.erase(listaseres.begin() + i);
	}
	listaseres.clear();

	for (int i=0; i< listafrutas.size(); i++){
		listafrutas.erase(listafrutas.begin() + i);
	}
	listafrutas.clear();

	return 0;
}

void imprimirSer(seres* ser)
{
	ofstream salida;
	stringstream stm;
	string fichero;

	stm << "./Log_Seres/" << ser->getNombre()<< ".log";
	fichero = stm.str();
	salida.open(fichero.c_str());
	salida << "-----------Ser---------" << endl;
	salida << "Nombre: "<<ser->getNombre()<< endl;
	salida << "Raza: "<<ser->getRaza()<< endl;
	salida << "Edad: "<<ser->getEdad()<< endl;
	salida << "Nombre: "<<ser->getNombre()<< endl;
	salida << "Fruta: "<<ser->getFruta()->getNombre()<< endl;
	bool hakio = ser->getHakiobs();
	if (hakio == true)
	{
		salida << "Haki Observacion: Si"<< endl;
	}else if (hakio == false)
	{
		salida << "Haki Observacion: No"<< endl;
	}

	bool hakia = ser->getHakiarmadura();
	if (hakia == true)
	{
		salida << "Haki Armadura: Si"<< endl;
	}else if (hakia == false)
	{
		salida << "Haki Armadura: No"<< endl;
	}

	bool hakir = ser->getHakirey();
	if (hakir == true)
	{
		salida << "Haki Rey: Si" << endl;
	} else
	{
		salida << "Haki Rey: No" << endl;
	}
	
	salida.close();
	salida << "---------------------------" << endl;
	
}