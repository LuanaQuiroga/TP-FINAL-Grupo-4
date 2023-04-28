#ifndef CUSUARIOPREMIUM_H
#define CUSUARIOPREMIUM_H
#include "cUsuarios.h"

using namespace std;
class cUsuario;
class cUsuarioPREMIUM : public cUsuarios {
public:
#pragma region Constructor y Destructor:
	cUsuarioPREMIUM(string Nombre, bool Estado, ePaises Pais, eTipoCliente Cliente, bool Logueado, cFecha* FechaLogging);
	~cUsuarioPREMIUM();
#pragma endregion
#pragma region Metodos:
	void UsarServicio();
	void Descargar(); 
	void FastBackward();
	void FastFoward();
	void Record();
#pragma endregion
#pragma region Getters y Setters:
	eTipoCliente gettipocliente() { return eTipoCliente::PREMIUM; } //metodo polimorfico

#pragma endregion
};
#endif
