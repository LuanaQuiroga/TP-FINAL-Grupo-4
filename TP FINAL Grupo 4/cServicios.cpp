#include "cServicios.h"
cServicios::cServicios(string nombre, float duracion, int visitas, int cantVisitas, eEstadoNivel estadonivel,eTipoCliente cliente, eEstado estado, ePaises pais) {
	this->Nombre = nombre;
	this->Duracion = duracion;
	this->Visitas = visitas;
	this->CantVisitas = cantVisitas;
	this->EstadoNivel = estadonivel;
	this->Cliente = cliente;
	this->Estado = estado;
	this->Pais = pais;
}
cServicios::~cServicios() {

}
void cServicios::CalcularEstadistica() {

}
void cServicios::EstadisticaTipoCliente() {

}
void cServicios::EstadisticaUsuario() {

}
void cServicios::PromUsuariosConectados() {

}
void cServicios::ListarServicios() {

}
bool cServicios::Disponible(cServidor* servidor) {
	//return usuario->gettipocliente() >= this->Cliente; //hacer con pais
	return true;
}
