#pragma once
#ifndef CSERVIDOR_H
#define CSERVIDOR_H
#include <iostream>
#include <string>
#include "cUsuarios.h"
#include "cServicios.h"
#include "Lista.h"

using namespace std;
class cUsuarios;
class cServicios;
class cServidor{ 
private:
	cLista<cUsuarios>* ListaUsuarios;
	cLista<cServicios>* ListaServicios;
	cLista<cServicios>* ListaServiciosFREE;
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
	void UsarServicio();
	void cBackUp();
	
#pragma endregion
#pragma region Getters y Setters
	void GetEstadisticas();
	void generarlistaFREE();
#pragma endregion
};
#endif
