#include "cServicios.h"
cServicios::cServicios(string nombre, float duracion, float cont, int visitas, int cantVisitas, eEstadoNivel estadonivel, eEstado estado, ePaises pais) {
	this->Nombre = nombre;
	this->Duracion = duracion;
	this->Cont = cont;
	this->Visitas = visitas;
	this->CantVisitas = cantVisitas;
	this->EstadoNivel = estadonivel;
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
