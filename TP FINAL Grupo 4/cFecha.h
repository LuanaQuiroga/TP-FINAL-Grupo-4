#pragma once
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>

using namespace std;
class cFecha {
private:
	int dia;
	int mes;
	int anio;
public:
#pragma region Constructor y Destructor:
	cFecha();
	cFecha(int d, int m, int a);
	cFecha(int dia, int mes, int año, int hora, int minutos);
	~cFecha();
#pragma endregion

#pragma region Metodos:
	void VerificarFecha(int d, int m, int a);
	int getdia() { return this->dia; }
	void setmes(int mes) { this->mes= mes; }
	int getmes() { return this->mes; }
	void setdia(int dia) { this->dia = dia; }
	int getanio() { return this->anio; }
	void setanio(int dia) { this->anio = anio; }
	friend ostream& operator<<(ostream& os, const cFecha& dt);

	cFecha& operator++()
	{
		this->dia + 1;
		return *this;
	}
#pragma endregion
};

