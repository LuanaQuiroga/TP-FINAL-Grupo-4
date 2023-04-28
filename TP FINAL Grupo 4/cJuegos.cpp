#include "cJuegos.h"
using namespace std;

int cJuegos::contjuegos = 0;

cJuegos::cJuegos(string nombre, float duracion, int visitas, int cantVisitas, eEstadoNivel estadonivel, eTipoCliente cliente, eEstado estado, ePaises pais) :cServicios(nombre, duracion, visitas, cantVisitas, estadonivel, cliente, estado, pais) {
	
}
cJuegos::~cJuegos() {

}
void cJuegos::Iniciar() {
	cout << "Esta inicializando un juego" << endl;
	this->setcantvisitas(this->getcantvisitas() + 1);
}
void cJuegos::Apagar() {
	int i = rand() % 5 + 1;
	this->setcanthoras(this->getcanthoras() + i);
	cout << "El juego ha sido apagado" << endl;
}
void cJuegos::Pausar() {
	int i = rand() % 5 + 1;
	this->setcanthoras(this->getcanthoras() + i);
	cout << "El juego ha sido pausado" << endl;
}

void cJuegos::Disponible() {
	this->getclientedisponible();
}
void cJuegos::NivelJuego() {
	this->getestadonivel();
}
