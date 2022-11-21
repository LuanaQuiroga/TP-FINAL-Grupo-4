#include "cUsuarioFREE.h"

cUsuarioFREE::cUsuarioFREE(string Nombre, bool Estado, ePaises Pais, eTipoCliente Cliente, bool Logueado, cFecha* FechaLogging) : cUsuarios(Nombre, Estado, Pais, Cliente, Logueado, FechaLogging) {

}
void cUsuarioFREE::UsarServicio() {
	cServicios* servicio = this->getservicio();
}