#pragma once
#ifndef CUSUARIOS_H
#define CUSUARIOS_H
#include <iostream>
#include <string>
#include "cEnum.h"
#include "cFecha.h"
#include "cServicios.h"
#include "Lista.h"


using namespace std;
class cServicios;
class cUsuarios
{
private:
	static int cont;
	tm Fecha;
	string Nombre;
	bool Estado;
	int NumCliente;
	ePaises Pais; 
	float TiempoUsoContinuo;
	float TiempoUsoDiario;
	eTipoCliente Cliente;
	bool Logueado;
	cFecha* FechaLogging;
	cServicios* servicio;
public:
#pragma region Constructor y Destructor:
	cUsuarios(string Nombre, bool Estado, ePaises Pais, eTipoCliente Cliente, bool Logueado, cFecha* FechaLogging);
	~cUsuarios();
#pragma endregion

#pragma region Metodos:
	void ChequearListas();
	void IniciarSesion();
	void CrearCUenta();
	void SeleccionarServicio(cLista<cServicios>* lista);
	virtual void UsarServicio() = 0;
#pragma endregion
#pragma region Getters y Setters
	tm getfechalogging() { return this->Fecha; }
	int getnumcliente() { return this->NumCliente; }
	virtual eTipoCliente gettipocliente() = 0;
	ePaises getpais() { return this->Pais; }
	void sethoy();
	void setLogueado(bool log);
	cServicios* getservicio() { return this->servicio; }
	void setservicio(cServicios* servicio);
};
#endif








