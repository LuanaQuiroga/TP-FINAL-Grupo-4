#include <iostream>
#include "cUsuarios.h"
#include "cServicios.h"
#include "cVideos.h"
#include "cAudios.h"
#include "cJuegos.h"
#include "cFecha.h"
#include "cServidor.h"

using namespace std;

int main()
{
	//hacer excepciones

	cServidor* _servidor = new cServidor();  //inicializamos el servidor
	//Le agregamos los usuarios
	cUsuarios* usuario1 = new cUsuarios();  //Agregar _
	cServicios* servicio1 = new cVideos();
	cFecha* FechaHoy = new cFecha();

	_servidor->AgregarUsuario(usuario1); //Agregamos el usuario

	_servidor->AgregarServicio(servicio1); //

	for (int i = 0; i < _servidor->listaUsuarios()->getCA(); i++) {
		cUsuarios* usuario1 = listaUsuario->get(i);

		_servidor->LoggearUsuario(usuario1);


		_servidor->ListarServicios(usuario1);  //Depende el pais, enlista los sevicios disponibles por pais

		usuario1->SeleccionarServicio(servicio1);

		//Hacer for

		usuario1->UsarServicio();
		_servidor->Desconectar(usuario1);
	}



	_servidor->cBackUp(FechaHoy);
	_servidor->GetEstadisticas();  //void que imprime las estadisticas

	//Hacer deletes
}