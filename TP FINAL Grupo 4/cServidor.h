#pragma once
#include <iostream>
#include <string>
#include "cUsuarios.h"
#include "Lista.h"
#ifndef CSERVIDOR_H
#define CSERVIDOR_H
using namespace std;
class cUsuarios;
class cServicios;
class cServidor{ 
private:
	cLista<cUsuarios>* ListaUsuarios;
	cLista<cServicios>* ListaServicios;
public:
#pragma region Constructor y Destructor:
	cServidor();
	~cServidor();
#pragma endregion

#pragma region Metodos:
	void AgregarUsuario(cUsuarios* usuario);
	void AgregarServicio(cServicios* servicio);
	void LoggearUsuario(cUsuarios* usuario);
	cLista<cServicios>*ListarServicios(cUsuarios* usuario);
	void Desconectar(cUsuarios* usuario);
	void UsarServicio(cServicios* servicios);
	void cBackUp();
	void GetEstadisticas();
#pragma endregion
#pragma region Getters y Setters

#pragma endregion
};
#endif
