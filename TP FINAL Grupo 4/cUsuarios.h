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
	bool borrarcuenta;
public:
#pragma region Constructor y Destructor:
	cUsuarios(string Nombre, bool Estado, ePaises Pais, eTipoCliente Cliente, bool Logueado, cFecha* FechaLogging);
	~cUsuarios();
#pragma endregion

#pragma region Metodos:
	void ChequearListas();
	void IniciarSesion();
	void CerrarSesion();
	void CrearCuenta();
	void SeleccionarServicio(cLista<cServicios>* lista);
	virtual void UsarServicio() = 0;
	friend ostream& operator<<(ostream& os, const cUsuarios& dt);
	cUsuarios& operator--()
	{
		this-> borrarcuenta -1;
		return *this;
	}
#pragma endregion
#pragma region Getters y Setters
	int getcontusuarios() { return this->cont; }
	void setcontusuarios();
	tm getfechalogging() { return this->Fecha; }
	void setfechalogging();
	string getnombre() { return this->Nombre; }
	void setnombre();
	bool getestadousuario() { return this->Estado; }
	void setestadousuario();
	int getnumcliente() { return this->NumCliente; }
	void setnumcliente();
	ePaises getpais() { return this->Pais; }
	void setpais();
	float getTiempoUsoContinuo() { return this->TiempoUsoContinuo; }
	void setTiempoUsoContinuo();
	float getTiempoUsoDiario() { return this->TiempoUsoDiario; }
	void setTiempoUsoDiario();
	virtual eTipoCliente gettipocliente() = 0;
	void settipocliente();
	tm gethoy() { return this->Fecha; }
	void sethoy();
	bool getLogueado() { return this->Logueado; }
	void setLogueado(bool log);
	bool getborrarcuenta() { return this->borrarcuenta; }
	void setborrarcuenta(bool borrar) { this->borrarcuenta = borrar; }
	cServicios* getdescargarservicio() { return this->servicio; }
	cServicios* getservicio() { return this->servicio; }
	void setservicio(cServicios* servicio);
	void getPromedioUsuariosConectadosDIA();
	void setPromedioUsuariosConectadosDIA();
	void getPromedioUsuariosConectadosSEMANA();
	void setPromedioUsuariosConectadosSEMANA();
};
#endif








