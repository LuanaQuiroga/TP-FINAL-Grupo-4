#include "cVideos.h"

cVideos::~cVideos() {

}
void cVideos::Iniciar() {
	cout << "Esta inicializando un video" << endl;
	this->setcantvisitas(this->getcantvisitas() + 1);

}
void cVideos::Apagar() {
	int i = rand() % 5 + 1;
	this->setcanthoras(this->getcanthoras() + i);
	cout << "El video ha sido apagado" << endl;
}
void cVideos::Pausar() {
	int i = rand() % 5 + 1;
	this->setcanthoras(this->getcanthoras() + i);
	cout << "El video ha sido apagado" << endl;
}

void cVideos::Disponible() {
	this->getclientedisponible();
}
