#pragma once
#include <iostream>
#include <string>
#include "cEnum.h"
#include "cServicios.h"

using namespace std;
class cJuegos: public cServicios {
public:
	static int contjuegos;
#pragma region Constructor y Destructor:
	cJuegos(string nombre, float duracion, int visitas, int cantVisitas, eEstadoNivel estadonivel, eTipoCliente cliente, eEstado estado, ePaises pais);
	~cJuegos();
#pragma endregion

#pragma region Metodos:
	void Iniciar();
	void Apagar();
	void Pausar();
	void Descargar();
	void Disponible();
#pragma endregion
#pragma region Getters y Setters
	//eEstado getestado() { return this->estado; }
#pragma endregion
};

