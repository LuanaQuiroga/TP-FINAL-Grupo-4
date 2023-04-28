#pragma once
#ifndef CSERVIDOR_H
#define CSERVIDOR_H
#include <iostream>
#include <string>
#include "cUsuarios.h"
#include "cServicios.h"
#include "Lista.h"
#include "cBackUp.h"

using namespace std;
class cUsuarios;
class cServicios;
class cBackUp;
class cServidor {
private:
	cFecha* Fecha;
	cLista<cUsuarios>* ListaUsuarios;
	cLista<cServicios>* ListaServicios;
	cLista<cServicios>* ListaServiciosFREE;
	cLista<cBackUp>* ListaBackUp;
	int contusuariosconectados;
public:
#pragma region Constructor y Destructor:
	cServidor();
	~cServidor();
#pragma endregion

#pragma region Metodos:
	void AgregarUsuario(cUsuarios* usuario);
	void AgregarServicio(cServicios* servicio);
	void LoggearUsuario(cUsuarios* usuario);
	cLista<cServicios>* ListarServicios(cUsuarios* usuario);
	void Desconectar(cUsuarios* usuario);
	void UsarServicio(cServicios* servicio);
	void HacerBackup();
	//int CantUsuariosConectados(cBackUp* cantusuarios);
	void generarlistaFREE();
	cJuegos* MasJugado();
	cVideos* MasVisto();
	cAudios* MasEscuchado();
#pragma endregion
#pragma region Getters y Setters
	cFecha* getfecha() { return this->Fecha; }
	void setfecha(cFecha* Fecha);
	int getcontusuariosconectados() { return this->contusuariosconectados; }
	void setcontusuariosconectados(int contusuariosconectados);
	void GetEstadisticas();
	int getpromediousuarios();
	int getpromediousuarios_semana();
	
	/*
	* void getEstadistica_usuario_unico();
	void setEstadistica_usuario_unico();
	void getEstadisticasFREE();
	void setEstadisticasFREE();
	void getEstadisticasBASIC();
	void setEstadisticasBASIC();
	void getEstadisticasPREMIUM();
	void setEstadisticasPREMIUM();
	*/
	
#pragma endregion
};
#endif
