#include "cServidor.h"

cServidor::cServidor(){
	this->ListaUsuarios = new cLista<cUsuarios>();

}
cServidor::~cServidor(){

}
void cServidor::AgregarUsuario(cUsuarios* usuario){
	this->ListaUsuarios->Insertar(usuario);

}
void cServidor::AgregarServicio(cServicios* servicio) {

}
void cServidor::LoggearUsuario(cUsuarios* usuario) {

}
 cLista<cServicios>*cServidor::ListarServicios(cUsuarios* usuario) { //me dice los servicios que puede acceder el usuario dependiendo de como es
	 cLista<cServicios>* lista1 = new cLista<cServicios>();
	 int i;
	 for (i = 0; i < ListaServicios->getCA(); i++) {
		 cServicios* aux = this->ListaServicios->Buscar(i);
		 if (aux->Disponible(usuario))
			 lista1->Insertar(aux);
	 }
	 return lista1;
}
void cServidor::Desconectar(cUsuarios* usuario) {

}
void cServidor::UsarServicio(cServicios* servicio) {

}
void cServidor::cBackUp() {

}
void cServidor::GetEstadisticas() {

}

