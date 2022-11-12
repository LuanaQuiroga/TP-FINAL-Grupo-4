#include "cServidor.h"

cServidor::cServidor(){
	this->ListaUsuarios = new cLista<cUsuarios>();

}
cServidor::~cServidor(){

}
void cServidor::AgregarUsuario(cUsuarios* usuario){
	this->ListaUsuarios->Insertar(usuario);

}
void cServidor::AgregarServicio() {

}
void cServidor::LoggearUsuario() {

}
void cServidor::ListarServicios() {

}
void cServidor::Desconectar() {

}
void cServidor::UsarServicio() {

}
void cServidor::cBackUp() {

}
void cServidor::GetEstadisticas() {

}

