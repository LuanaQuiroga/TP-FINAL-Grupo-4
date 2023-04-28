#pragma once
#include <iostream>
#include <string>
#include "cEnum.h"
#include "cServicios.h"

using namespace std;
class cServicios;
class cJuegos: public cServicios {
public:
	static int contjuegos;
private:
	eEstadoNivel Nivel;
#pragma region Constructor y Destructor:
public:
	cJuegos(string nombre, float duracion, int visitas, int cantVisitas, eEstadoNivel estadonivel, eTipoCliente cliente, eEstado estado, ePaises pais);
	~cJuegos();
#pragma endregion

#pragma region Metodos:
	void Iniciar();
	void Apagar();
	void Pausar();
	void Descargar();
	void Disponible();
	void NivelJuego();
#pragma endregion
#pragma region Getters y Setters
	int getcontjuegos(int contjuegos) {return this->contjuegos; }
	void setcontjuegos(int contjuegos) { this->contjuegos = contjuegos; }
	eEstadoNivel getestado() { return this->Nivel; }
	void setestado() { this->Nivel = Nivel; }
#pragma endregion
};

