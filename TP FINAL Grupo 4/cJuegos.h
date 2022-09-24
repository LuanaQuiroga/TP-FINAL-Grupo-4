#pragma once
#include <iostream>
#include <string>

using namespace std;
class cJuegos
{
public:
#pragma region Constructor y Destructor:
	cJuegos();
	~cJuegos();
#pragma endregion

#pragma region Metodos:
	void Iniciar();
	void Apagar();
	void Pausar();
	void Descargar();
	void Disponible();
#pragma endregion
};

