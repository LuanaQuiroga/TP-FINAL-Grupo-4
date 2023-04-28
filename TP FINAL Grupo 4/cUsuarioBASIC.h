#pragma once
#ifndef CUSUARIOBASIC_H
#define CUSUARIOBASIC_H
#include "cUsuarios.h"

using namespace std;
class cUsuarios;
class cUsuarioBASIC : public cUsuarios {
public:
#pragma region Constructor y Destructor:
	cUsuarioBASIC(string Nombre, bool Estado, ePaises Pais, eTipoCliente Cliente, bool Logueado, cFecha* FechaLogging);
	~cUsuarioBASIC();
#pragma endregion
#pragma region Metodos:
	void UsarServicio();
#pragma endregion
#pragma region Getters y Setters:
	eTipoCliente gettipocliente() { return eTipoCliente::BASIC; } //metodo polimorfico
#pragma endregion
};
#endif


