#include "cJuegos.h"
using namespace std;

int cJuegos::contjuegos = 0;

cJuegos::cJuegos(string nombre, float duracion, int visitas, int cantVisitas, eEstadoNivel estadonivel, eTipoCliente cliente, eEstado estado, ePaises pais) :cServicios(nombre, duracion, visitas, cantVisitas, estadonivel, cliente, estado, pais) {

}
cJuegos::~cJuegos() {

}
void cJuegos::Iniciar() {

}
void cJuegos::Apagar() {

}
void cJuegos::Pausar() {

}
void cJuegos::Descargar() {

}
void cJuegos::Disponible() {

}
