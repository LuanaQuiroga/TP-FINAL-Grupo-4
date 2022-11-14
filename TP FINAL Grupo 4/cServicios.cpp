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
	this->CantHoras = 0;
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
bool cServicios::Disponible(cUsuarios* usuario) {
	return usuario->gettipocliente() >= this->Cliente; //hacer con pais
	
}
