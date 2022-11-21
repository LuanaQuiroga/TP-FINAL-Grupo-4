#pragma once
#ifndef CUSUARIOBASIC_H
#define CUSUARIOBASIC_H
#include "cUsuarios.h"

using namespace std;
class cUsuarios;
class cUsuarioBASIC : public cUsuarios {
public:
	eTipoCliente gettipocliente() { return eTipoCliente::BASIC; }
	void UsarServicio();
	cUsuarioBASIC(string Nombre, bool Estado, ePaises Pais, eTipoCliente Cliente, bool Logueado, cFecha* FechaLogging);

};
#endif


