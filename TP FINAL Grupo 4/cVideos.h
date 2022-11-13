#pragma once
#include <iostream>
#include <string>
#include "cServicios.h"

using namespace std;
class cVideos: public cServicios{
public:
#pragma region Constructor y destructor:
	cVideos();
	~cVideos();
#pragma endregion

#pragma region Metodos:
	void Iniciar();
	void Apagar();
	void Pausar();
	void Descargar();
	void Disponible();
	void FastBackward();
	void FastFoward();
	void Record();
#pragma endregion
};

