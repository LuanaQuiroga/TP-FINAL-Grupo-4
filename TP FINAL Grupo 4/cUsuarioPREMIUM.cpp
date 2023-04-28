#include "cUsuarioPREMIUM.h"

cUsuarioPREMIUM::cUsuarioPREMIUM(string Nombre, bool Estado, ePaises Pais, eTipoCliente Cliente, bool Logueado, cFecha* FechaLogging) : cUsuarios(Nombre, Estado, Pais, Cliente, Logueado, FechaLogging) {

}
cUsuarioPREMIUM::~cUsuarioPREMIUM() {

}
void cUsuarioPREMIUM::Descargar() {
	cout << "Iniciando descarga" << endl;
}
void cUsuarioPREMIUM::Record() {
	cout << "Record Hecho" << endl;
}
void cUsuarioPREMIUM::UsarServicio() {
	cServicios* servicio = this->getservicio();
	try {
		cVideos* video = (cVideos*) dynamic_cast<cVideos*>(servicio);
		video->Iniciar();
		video->Pausar();
		if (rand() % 2 == 0) {
			video->Record();
		}
		video->Apagar();

	}
	catch (exception* ex) {
		std::cout << ex->what();
	}
	try {
		cAudios* audio = (cAudios*) dynamic_cast<cAudios*>(servicio);
		audio->Iniciar();
		audio->Pausar();
		if (rand() % 2 == 0) {
			audio->Record(this);
		}
		if (rand() % 2 == 0) {
			audio->Descargar();
		}
		audio->Apagar();

	}
	catch (exception* ex) {
		std::cout << ex->what();
	}
	try {
		cJuegos* juego = (cJuegos*) dynamic_cast<cJuegos*>(servicio);
		juego->Iniciar();
		juego->Pausar();
		juego->Apagar();

	}
	catch (exception* ex) {
		std::cout << ex->what();
	}


}
void cUsuarioPREMIUM::FastBackward() {
	cout << "Hago un fastbackward" << endl;
}
void cUsuarioPREMIUM::FastFoward() {
	cout << "Hago un fastforward" << endl;

}

