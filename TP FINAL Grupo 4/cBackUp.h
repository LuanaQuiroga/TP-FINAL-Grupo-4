#pragma once
#include <iostream>
#include <string>
#include "cFecha.h"
#include "cJuegos.h"
#include "cVideos.h"
#include "cAudios.h"

using namespace std;
class cBackUp{
private:
	cFecha Fecha;
	int CantUsuarios;
	cJuegos* MasJugados; //lista de juegos mas jugados
	cVideos* MasVistos; //lista de videos mas vistos
	cAudios* MasEscuchados; //lista de audios mas escuchados
public:
	
#pragma region Constructor y Destructor:
	cBackUp();
	~cBackUp();
#pragma endregion

#pragma region Metodos

#pragma endregion

#pragma region Getters y Setters:
	cJuegos* getMasJugados() { return this->MasJugados; }
	cVideos* getMasVistos() { return this->MasVistos; }
	cAudios* getMasEscuchados() { return this->MasEscuchados; }
#pragma endregion
};

