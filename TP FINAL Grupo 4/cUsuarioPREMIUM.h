#ifndef CUSUARIOPREMIUM_H
#define CUSUARIOPREMIUM_H
#include "cUsuarios.h"

using namespace std;
class cUsuario;
class cUsuarioPREMIUM : public cUsuarios {
public:
	void UsarServicio();
	eTipoCliente gettipocliente() { return eTipoCliente::PREMIUM; }
	cUsuarioPREMIUM(string Nombre, bool Estado, ePaises Pais, eTipoCliente Cliente, bool Logueado, cFecha* FechaLogging);

};
#endif
