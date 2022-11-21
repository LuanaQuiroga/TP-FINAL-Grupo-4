#include "cUsuarioBASIC.h"

cUsuarioBASIC::cUsuarioBASIC(string Nombre, bool Estado, ePaises Pais, eTipoCliente Cliente, bool Logueado, cFecha* FechaLogging):cUsuarios( Nombre, Estado,Pais, Cliente, Logueado, FechaLogging) {


}
void cUsuarioBASIC::UsarServicio() {
	cServicios* servicio = this->getservicio();
}


