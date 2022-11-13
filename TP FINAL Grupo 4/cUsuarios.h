#pragma once
#include <iostream>
#include <string>
#include "cEnum.h"
#include "cFecha.h"
#include "cServicios.h"
#ifndef CUSUARIOS_H
#define CUSUARIOS_H
using namespace std;
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
public:
#pragma region Constructor y Destructor:
	cUsuarios(string Nombre, bool Estado, ePaises Pais, eTipoCliente Cliente, bool Logueado, cFecha* FechaLogging);
	~cUsuarios();
#pragma endregion

#pragma region Metodos:
	void ChequearListas();
	void IniciarSesion();
	void CrearCUenta();
	void SeleccionarServicio();
	void UsarServicio();
#pragma endregion
#pragma region Getters y Setters
	tm getfechalogging() { return this->Fecha; }
	int getnumcliente() { return this->NumCliente; }
	eTipoCliente gettipocliente() { return this->Cliente; }
	void sethoy();
};
//#endif








