#pragma once
#include <iostream>
#include <string>
#include "cServicios.h"

using namespace std;
class cServicios;
class cVideos: public cServicios{
private:
	const int duracionmax = 20;
	int minutos;
	int segundos;
#pragma region Constructor y destructor:
public:
	cVideos();
	~cVideos();
#pragma endregion

#pragma region Metodos:
	void Iniciar();
	void Apagar();
	void Pausar();
	//void Descargar();
	void Disponible();
	void FastBackward();
	void FastFoward();
	void Record();
#pragma endregion
#pragma region Getters y Setters:
	void SetMinVideos();
	int GetMinVideos(int minutos);
	int GetDuracionMaxVideos(int duracionmax);
	void SetDuracionMaxVideos();
	int GetSegVideos(int segundos);
	void SetSegVideos();
};

