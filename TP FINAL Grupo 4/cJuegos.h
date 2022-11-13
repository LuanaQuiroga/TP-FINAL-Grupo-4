#pragma once
#include <iostream>
#include <string>
#include "cEnum.h"
#include "cServicios.h"
#include "cServicios.h"

using namespace std;
class cJuegos: public cServicios {
private:
	eEstado estado;
public:
	static int contjuegos;
#pragma region Constructor y Destructor:
	cJuegos();
	~cJuegos();
#pragma endregion

#pragma region Metodos:
	void Iniciar(eEstado* estado);
	void Apagar(eEstado* estado);
	void Pausar(eEstado* estado);
	void Descargar();
	void Disponible(eTipoCliente Cliente);
#pragma endregion
#pragma region Getters y Setters
	eEstado getestado() { return this->estado; }
#pragma endregion
};

