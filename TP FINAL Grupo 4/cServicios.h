#pragma once
#ifndef CSERVICIOS_H
#define CSERVICIOS_H
#include <iostream>
#include <string>
#include "cEnum.h"
#include "cServidor.h"
#include "cUsuarios.h"

using namespace std;
class cUsuarios;
class cServidor;
class cServicios {
	friend class cServidor;
private: 
	string Nombre;
	float Duracion;
	int Visitas;
	int CantVisitas;
	int CantHoras;
	eEstadoNivel EstadoNivel;
	eEstado Estado;
	eTipoCliente Cliente;
	ePaises Pais; 
	bool descargas;
public:
#pragma region Constructor y Destructor
	cServicios(string nombre, float duracion, int visitas, int cantVisitas, eEstadoNivel estadonivel, eTipoCliente Cliente, eEstado estado, ePaises pais);
	~cServicios();
#pragma endregion

#pragma region Metodos
	/*
	* void CalcularEstadistica();
	void EstadisticaTipoCliente();
	void EstadisticaUsuario();
	void PromUsuariosConectados();
	void ListarServicios();
	*/
	bool Disponible(cUsuarios* usuario);
	friend void Record(cServicios);
	void Descargar(cUsuarios* usuario);
#pragma endregion

#pragma region Metodos Virtuales
	virtual void Iniciar() = 0;
	virtual void Apagar() = 0;
	virtual void Pausar() = 0;
#pragma endregion
#pragma region Getters y Setters
	eEstadoNivel getestadonivel() { return this->EstadoNivel; }
	void setestadonivel(eEstadoNivel EstadoNivel) {this->EstadoNivel = EstadoNivel; }
	eEstado getEstado() { return this->Estado; }
	void setEstado(eEstado Estado) { this->Estado = Estado; }
	ePaises getpais() { return this->Pais; }
	void setpais(ePaises pais) { this->Pais = pais; }
	int getcantvisitas() { return this->CantVisitas; }
	void setcantvisitas(int cantvisitas) { this->CantVisitas = cantvisitas; }
	int getcanthoras() { return this->CantHoras; }
	void setcanthoras(int canthoras) {this->CantHoras=canthoras; }
	eTipoCliente getclientedisponible() {return this->Cliente; }
	void setclientedisponible(eTipoCliente cliente);
#pragma endregion
};
#endif
