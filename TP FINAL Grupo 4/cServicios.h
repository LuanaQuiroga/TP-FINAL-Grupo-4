#pragma once
#include <iostream>
#include <string>
#include "cEnum.h"

using namespace std;

class cServicios {
	friend class cServidor;
private: 
	string Nombre;
	float Duracion;
	float Cont;
	int Visitas;
	int CantVisitas;
	eEstadoNivel EstadoNivel;
	eEstado Estado;
	ePaises Pais; 
public:
#pragma region Constructor y Destructor
	cServicios(string nombre, float duracion, float cont, int visitas, int cantVisitas, eEstadoNivel estadonivel,eEstado estado, ePaises pais);
	~cServicios();
#pragma endregion

#pragma region Metodos
	void CalcularEstadistica();
	void EstadisticaTipoCliente();
	void EstadisticaUsuario();
	void PromUsuariosConectados();
	void ListarServicios();
#pragma endregion

#pragma region Metodos Virtuales
	virtual void Iniciar(eEstado* estado) = 0;
	virtual void Apagar(eEstado* estado) = 0;
	virtual void Pausar(eEstado* estado) = 0;
	virtual void Descargar() = 0;
	virtual void Disponible() = 0;
#pragma endregion
#pragma region Getters y Setters
	eEstadoNivel getestado() { return this->EstadoNivel; }
	ePaises getpais() { return this->Pais; }
#pragma endregion
};

