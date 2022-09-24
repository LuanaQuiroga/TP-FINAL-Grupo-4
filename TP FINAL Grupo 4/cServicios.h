#pragma once
#include <iostream>
#include <string>
#include "cEnum.h"

using namespace std;

class cServicios
{
private: 
	string Nombre;
	float Duracion;
	float cont;
	int Visitas;
	int CantVisitas;
	eEstado Estado;
	ePaises Pais; 
public:
#pragma region Constructor y Destructor
	cServicios(string Nombre, float Duracion, float cont, int Visitas, int CantVisitas, eEstado Estado, cPaises Pais);
	~cServicios();
#pragma endregion

#pragma region Metodos
	void CalcularEstadistica();
	void EstadisticaTipoCliente();
	void EstadisticaUsuario();
	void PromUsuariosConectados();
	void ListarServicios();

	virtual void Iniciar();
	virtual void Apagar();
	virtual void Pausar();
	virtual void Descargar();
	virtual void Disponible();
#pragma endregion
};

