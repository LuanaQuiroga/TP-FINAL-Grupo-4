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
	cFecha* Fecha;
	int CantUsuariosConectados;
	cJuegos* MasJugados; //lista de juegos mas jugados
	cVideos* MasVistos; //lista de videos mas vistos
	cAudios* MasEscuchados; //lista de audios mas escuchados
	int visitaJuegos;
	int visitaVideos;
	int visitaAudios;
public:
	
#pragma region Constructor y Destructor:
	cBackUp();
	~cBackUp();
#pragma endregion

#pragma region Metodos

#pragma endregion

#pragma region Getters y Setters:
	cFecha* getdia() { return this->Fecha; }
	void setdia(cFecha* Fecha);
	int getCantUsuariosConectados() { return this->CantUsuariosConectados; }
	void setCantUsuariosConectados(int CantUsuariosConectados);
	cJuegos* getMasJugados() { return this->MasJugados; }
	void setMasJugados(cJuegos* MasJugados);
	cVideos* getMasVistos() { return this->MasVistos; }
	void setMasVistos(cVideos* MasVistos);
	cAudios* getMasEscuchados() { return this->MasEscuchados; }
	void setMasEscuchados(cAudios* MasEscuchados);
#pragma endregion
};

