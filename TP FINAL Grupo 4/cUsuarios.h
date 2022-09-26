#pragma once
#include <iostream>
#include <string>
#include "cEnum.h"
#include "cFecha.h"
using namespace std;

class cUsuarios
{
private:
	string Nombre;
	bool Estado;
	int NumCliente;
	ePaises Pais; 
	float TiempoUsoContinuo;
	float TiempoUsoDiario;
	eTipoCliente Cliente;
	bool Logueado;
	cFecha FechaLogging;
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
};

