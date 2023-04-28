#include "cBackUp.h"
cBackUp::cBackUp() {

}
cBackUp::~cBackUp() {

}
void cBackUp::setdia(cFecha* Fecha) {
	this->Fecha = Fecha;
}
void cBackUp::setCantUsuariosConectados(int CantUsuariosConectados) {
	this->CantUsuariosConectados = CantUsuariosConectados;
}
void cBackUp::setMasJugados(cJuegos* MasJugados) {
	this->MasJugados = MasJugados;
	this->visitaJuegos = MasJugados->getcantvisitas();
}
void cBackUp::setMasVistos(cVideos* MasVistos) {
	this->MasVistos = MasVistos;
	this->visitaVideos = MasVistos->getcantvisitas();
}
void cBackUp::setMasEscuchados(cAudios* MasEscuchados) {
	this->MasEscuchados = MasEscuchados;
	this->visitaAudios = MasEscuchados->getcantvisitas();
}