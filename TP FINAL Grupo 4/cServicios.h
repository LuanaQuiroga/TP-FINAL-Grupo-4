#pragma once
#include <iostream>
#include <string>

using namespace std;
enum eEstado{PRENDIDO, APAGADO, PAUSADO};
class cServicios
{
private: 
	string Nombre;
	float Duracion;
	float cont;
	int Visitas;
	int CantVisitas;
	eEstado Estado;
	cPaises Pais; //hacer enum
public:
	cServicios(string Nombre, float Duracion, float cont, int Visitas, int CantVisitas, eEstado Estado, cPaises Pais);
	~cServicios();
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
	
};

