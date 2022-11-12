#pragma once
#include <iostream>
#include <string>
#include "cEnum.h"
#include "cFecha.h"
#include "cServicios.h"

using namespace std;
class cUsuarios
{
private:
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
	cServicios** listaServicios;
public:
#pragma region Constructor y Destructor:
	cUsuarios(string Nombre, bool Estado, int NumCliente, ePaises Pais, float TiempoUsoContinuo, float TiempoUsoDiario, eTipoCliente Cliente, bool Logueado, cFecha FechaLogging);
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
	eTipoCliente gettipocliente() { return this->Cliente; }
	void sethoy();
};

