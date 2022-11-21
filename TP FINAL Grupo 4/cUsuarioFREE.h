#ifndef CUSUARIOFREE_H
#define CUSUARIOFREE_H
#include "cUsuarios.h"

using namespace std;
class cUsuario;
class cUsuarioFREE : public cUsuarios {
public:
	virtual eTipoCliente gettipocliente() { return eTipoCliente::FREE; }
	cUsuarioFREE(string Nombre, bool Estado, ePaises Pais, eTipoCliente Cliente, bool Logueado, cFecha* FechaLogging);
	void UsarServicio();
};
#endif