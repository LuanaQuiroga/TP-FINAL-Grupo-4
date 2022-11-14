#pragma once
#include <iostream>
#include <string>
#include "cEnum.h"
#include "cUsuarios.h"
#include "cServidor.h"
#ifndef CSERVICIOS_H
#define CSERVICIOS_H

using namespace std;
class cUsuarios;
class cServicios {
	friend class cServidor;
private: 
	string Nombre;
	float Duracion;
	int Visitas;
	int CantVisitas;
	eEstadoNivel EstadoNivel;
	eEstado Estado;
	eTipoCliente Cliente;
	ePaises Pais; 
public:
#pragma region Constructor y Destructor
	cServicios(string nombre, float duracion, int visitas, int cantVisitas, eEstadoNivel estadonivel, eTipoCliente Cliente, eEstado estado, ePaises pais);
	~cServicios();
#pragma endregion

#pragma region Metodos
	void CalcularEstadistica();
	void EstadisticaTipoCliente();
	void EstadisticaUsuario();
	void PromUsuariosConectados();
	void ListarServicios();
	bool Disponible(cUsuarios* usuario);
#pragma endregion

#pragma region Metodos Virtuales
	virtual void Iniciar() = 0;
	virtual void Apagar() = 0;
	virtual void Pausar() = 0;
	virtual void Descargar() = 0;
#pragma endregion
#pragma region Getters y Setters
	eEstadoNivel getestado() { return this->EstadoNivel; }
	ePaises getpais() { return this->Pais; }
#pragma endregion
};
#endif
