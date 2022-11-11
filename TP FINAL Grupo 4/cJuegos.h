#pragma once
#include <iostream>
#include <string>
#include "cEnum.h"
#include "cServicios.h"
using namespace std;
class cJuegos: public cServicios
{
private:
	eEstado estado;
public:
	static int contjuegos;
#pragma region Constructor y Destructor:
	cJuegos();
	~cJuegos();
#pragma endregion

#pragma region Metodos:
	void Iniciar();
	void Apagar();
	void Pausar();
	void Descargar();
	void Disponible(eTipoCliente Cliente);
#pragma endregion
};

