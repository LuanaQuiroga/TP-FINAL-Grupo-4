#pragma once
#include <iostream>
#include <string>
class cServidor
{
private:

public:
#pragma region Constructor y Destructor:
	cServidor();
	~cServidor();
#pragma endregion

#pragma region Metodos:
	void AgregarUsuario();
	void AgregarServicio();
	void LoggearUsuario();
	void ListarServicios();
	void Desconectar();
	void UsarServicio();
	void cBackUp();
	void GetEstadisticas();
#pragma endregion
};

