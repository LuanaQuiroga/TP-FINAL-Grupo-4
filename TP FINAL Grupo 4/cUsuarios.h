#pragma once
#include <iostream>
#include <string>

using namespace std;
enum eTipoCliente {FREE, BASIC, PREMIUM};
class cUsuarios
{
private:
	string Nombre;
	bool Estado;
	int NumCliente;
	ePaises Pais; //hacer enum
	float TiempoUsoContinuo;
	float TiempoUsoDiario;
	eTipoCliente Cliente;
	bool Logueado;
	cFecha FechaLogging;// hacer fecha
public:
	cUsuarios(string Nombre, bool Estado, int NumCliente, ePaises Pais, float TiempoUsoContinuo, float TiempoUsoDiario, eTipoCliente Cliente, bool Logueado, cFecha FechaLogging);
	~cUsuarios();
	void ChequearListas();
	void IniciarSesion();
	void CrearCUenta();
};

