#include "cUsuarioPREMIUM.h"

cUsuarioPREMIUM::cUsuarioPREMIUM(string Nombre, bool Estado, ePaises Pais, eTipoCliente Cliente, bool Logueado, cFecha* FechaLogging) : cUsuarios(Nombre, Estado, Pais, Cliente, Logueado, FechaLogging) {

}
void cUsuarioPREMIUM::UsarServicio() {
	cServicios* servicio = this->getservicio();

}