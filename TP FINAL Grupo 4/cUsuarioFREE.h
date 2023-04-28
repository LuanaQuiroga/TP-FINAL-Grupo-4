#ifndef CUSUARIOFREE_H
#define CUSUARIOFREE_H
#include "cUsuarios.h"

using namespace std;
class cUsuario;
class cUsuarioFREE : public cUsuarios {
public:
#pragma region Constructor y Destructor:
	cUsuarioFREE(string Nombre, bool Estado, ePaises Pais, eTipoCliente Cliente, bool Logueado, cFecha* FechaLogging);
	~cUsuarioFREE();
#pragma endregion
#pragma region Metodos:
	void UsarServicio();
#pragma endregion
#pragma region Getters y Setters:
	eTipoCliente gettipocliente() { return eTipoCliente::FREE; } //metodo polimorfico

#pragma endregion
};
#endif