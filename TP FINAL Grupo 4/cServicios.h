#pragma once
#include <iostream>
#include <string>
#include "cEnum.h"

using namespace std;

class cServicios
{
private: 
	string Nombre;
	float Duracion;
	float cont;
	int Visitas;
	int CantVisitas;
	eEstadoNivel EstadoNivel;
	ePaises Pais; 
public:
#pragma region Constructor y Destructor
	cServicios(string Nombre, float Duracion, float cont, int Visitas, int CantVisitas, eEstado Estado, ePaises Pais);
	~cServicios();
#pragma endregion

#pragma region Metodos
	void CalcularEstadistica();
	void EstadisticaTipoCliente();
	void EstadisticaUsuario();
	void PromUsuariosConectados();
	void ListarServicios();
#pragma endregion

#pragma region Metodos Virtuales
	virtual void Iniciar() = 0;
	virtual void Apagar() = 0;
	virtual void Pausar() = 0;
	virtual void Descargar() = 0;
	virtual void Disponible() = 0;
#pragma endregion
#pragma region Getters y Setters
	eEstadoNivel getestado() { return this->EstadoNivel; }
	ePaises getpais() { return this->Pais; }
#pragma endregion
};

