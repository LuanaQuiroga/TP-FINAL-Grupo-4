#pragma once
#include <iostream>
#include <ctime>
#include <stdio.h>
#include <string.h>

using namespace std;
class cFecha
{
private:
	tm fecha;
public:
#pragma region Constructor y Destructor:
	cFecha();
	cFecha(int d, int m, int a);
	cFecha(int dia, int mes, int año, int hora, int minutos);
	~cFecha();
#pragma endregion

#pragma region Metodos:

#pragma endregion

};

