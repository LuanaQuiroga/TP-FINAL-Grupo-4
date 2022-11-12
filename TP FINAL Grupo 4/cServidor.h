#pragma once
#include <iostream>
#include <string>
#include "cUsuarios.h"
using namespace std;
class cServidor{
private:
	cUsuarios** ListaUsuarios;
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
#pragma region Getters y Setters
	cUsuarios** getListaUsuarios();
#pragma endregion
};

