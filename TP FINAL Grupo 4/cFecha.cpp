#include "cFecha.h"
cFecha::cFecha() {

}
cFecha::cFecha(int d, int m, int a) {

}
cFecha::cFecha(int dia, int mes, int año, int hora, int minutos) {

}
cFecha::~cFecha() {

}
void cFecha::VerificarFecha(int d, int m, int a) {
	bool bisiesto;
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
		bisiesto = true;
	else
		bisiesto = false;
	if (m >= 1 && m <= 12) {
		switch (m) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			if (d >= 1 && d <= 31) {
				cout << "Fecha Correcta" << endl;
			}
			else {
				cout << "Fecha Incorrecta" << endl;
			}
			case 4:
			case 6:
			case 9:
			case 11:
			if (d >= 1 && d <= 30) {
				cout << "Fecha Correcta" << endl;
			}
			else {
				cout << "Fecha Incorrecta" << endl;
			}
			case 2:
			if (bisiesto = true && d >= 1 && d <= 29) {
				cout << "Fecha Correcta" << endl;
				cout << "Año bisiesto" << endl;
			}
			else if (bisiesto = false && d >= 1 && d <= 28) {
				cout << "Fecha Correcta" << endl;
				cout << "Año no bisiesto" << endl;
			}
			else {
			cout << "Fecha Incorrecta" << endl;
		}
		}
	}
	else
		cout << "Mes Incorrecta" << endl;
}