#include "cServidor.h"

cServidor::cServidor(){
	this->ListaUsuarios = new cLista<cUsuarios>();
	this->ListaServicios = new cLista<cServicios>();
}
cServidor::~cServidor(){

}
void cServidor::AgregarUsuario(cUsuarios* usuario){
	this->ListaUsuarios->Insertar(usuario);
}
void cServidor::AgregarServicio(cServicios* servicio) {
	this->ListaServicios->Insertar(servicio);
}
void cServidor::LoggearUsuario(cUsuarios* usuario) {
	bool encontre = false;
	int i = 0;
	while (!encontre && i < this->ListaUsuarios->getCA()) {
		cUsuarios* aux = this->ListaUsuarios->Buscar(i);
		if (aux->getnumcliente() == usuario->getnumcliente()) {
			encontre = true;
			usuario->setLogueado(encontre);
			cout << "Usuario logueado";
		}
		i++;
	}
	if (!encontre)
		cout << "El usuario no esta logueado";
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
	int i;
	cout << "Imprimo estadisticas: " << endl;
	for (i = 0; i < this->ListaServicios->getCA(); i++) {
		cServicios* aux = this->ListaServicios->Buscar(i);
		cout << "Cantidad de horas" << endl;
		cout << aux->getcanthoras() << endl;
		cout << "Cantidad de visitas" << endl;
		cout << aux->getcantvisitas() << endl;
	}
}

