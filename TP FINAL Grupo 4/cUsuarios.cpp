#include "cUsuarios.h"

int cUsuarios::cont = 0;
cUsuarios::cUsuarios(string nombre, bool estado, ePaises pais, eTipoCliente cliente, bool logueado, cFecha* fechalogging) {
	this->Nombre = nombre;
	this->Estado = estado;
	this->Pais = pais;
	this->Cliente = cliente;
	this->NumCliente = cUsuarios::cont;
	cUsuarios::cont++;
	this->TiempoUsoContinuo = 0;
	this->TiempoUsoDiario = 0;
	this->Logueado = logueado;
	this->FechaLogging = fechalogging;
}

cUsuarios::~cUsuarios() {

}

void cUsuarios::ChequearListas() {

}
void cUsuarios::IniciarSesion() {
	cout << "Inicio sesion" << endl;
}
void cUsuarios::CrearCuenta() {
	cout << "Se ha creado una nueva cuenta" << endl;
}
void cUsuarios::SeleccionarServicio(cLista<cServicios>* lista) {
	int i = 0;
	this->servicio=lista->Buscar(i);
	cout << "Seleccione servicio" << endl;
	cServicios* aux = this->servicio = lista->Buscar(i);
	aux->setcantvisitas(aux->getcantvisitas() + 1); //incremento la cantidad de visitas

}
void cUsuarios::UsarServicio() {
	this->servicio->Iniciar();
	this->servicio->Apagar();

}
void cUsuarios::setservicio(cServicios* servicio) {
	this->servicio = servicio;
}
void cUsuarios::sethoy(){
	time_t now = time(0);
	tm aux;
	localtime_s(&aux, &now); //obtengo fecha y hora de hoy
	Fecha.tm_mday = aux.tm_mday;
	Fecha.tm_mon = aux.tm_mon;
	Fecha.tm_year = aux.tm_year;
}
void cUsuarios::setLogueado(bool log){
	this->Logueado = log;
}
