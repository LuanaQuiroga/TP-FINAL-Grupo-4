#include "cUsuarios.h"

cUsuarios::cUsuarios(string Nombre, bool Estado, int NumCliente, ePaises Pais, float TiempoUsoContinuo, float TiempoUsoDiario, eTipoCliente Cliente, bool Logueado, cFecha FechaLogging) {

}

cUsuarios::~cUsuarios() {

}
void cUsuarios::ChequearListas() {

}
void cUsuarios::IniciarSesion() {

}
void cUsuarios::CrearCUenta() {

}
void cUsuarios::SeleccionarServicio() {

}
void cUsuarios::UsarServicio() {

}

void cUsuarios::sethoy(){
	time_t now = time(0);
	tm aux;
	localtime_s(&aux, &now); //obtengo fecha y hora de hoy
	Fecha.tm_mday = aux.tm_mday;
	Fecha.tm_mon = aux.tm_mon;
	Fecha.tm_year = aux.tm_year;
}
