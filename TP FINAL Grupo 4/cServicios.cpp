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
void cServicios::setclientedisponible(eTipoCliente cliente) {
	this->Cliente = cliente;
}
/*
* bool cServicios::Disponible(cUsuarios* usuario) {
	try {
		if (usuario->gettipocliente() == eTipoCliente::BASIC) {
			//return usuario->gettipocliente() >= this->Cliente && usuario->getpais()>=this->Pais;
			cUsuarioBASIC* usuarioBASIC = (cUsuarioBASIC*) dynamic_cast<cUsuarioBASIC*>(usuario);
			return usuarioBASIC->gettipocliente() == this->Cliente && usuarioBASIC->getpais() == this->Pais;
		}
		if (usuario->gettipocliente() == eTipoCliente::FREE) {
			cUsuarioFREE* usuarioFREE = (cUsuarioFREE*) dynamic_cast<cUsuarioFREE*>(usuario);
			return usuarioFREE->gettipocliente() == this->Cliente && usuarioFREE->getpais() == this->Pais;
		}
		if (usuario->gettipocliente() == eTipoCliente::PREMIUM) {
			cUsuarioPREMIUM* usuarioPREMIUM = (cUsuarioPREMIUM*) dynamic_cast<cUsuarioPREMIUM*>(usuario);
			return usuarioPREMIUM->gettipocliente() == this->Cliente && usuarioPREMIUM->getpais() == this->Pais;
		}
		
	}
	catch (exception* ex) {
		std::cout << ex->what();
	}
	return false;
}
*/

