#include <iostream>
#include "cUsuarios.h"
#include "cServicios.h"
#include "cVideos.h"
#include "cAudios.h"
#include "cJuegos.h"
#include "cFecha.h"
#include "cServidor.h"
#include "cBackUp.h"
#include "cEnum.h"
#include "Lista.h"

using namespace std;

int main()
{
	//cFecha* aux = new cFecha(12,11,2022);
	cFecha* FechaHoy = new cFecha();
	cout << "Ingrese el dia de hoy: ";
	int dia;
	std::cin >> dia;
	cout << "Ingrese el mes de hoy: ";
	int mes;
	std::cin >> mes;
	cout << "Ingrese el año de hoy: ";
	int año;
	std::cin >> año;
	cServidor* _servidor = new cServidor();  //inicializamos el servidor
	cUsuarios* usuario1 = new cUsuarios("Pilar", true, ePaises::Argentina, eTipoCliente::FREE, true, FechaHoy);
	cUsuarios* usuario2 = new cUsuarios("Pilar", true, ePaises::Argentina, eTipoCliente::FREE, true, FechaHoy);
	cout << "Mi numero de cliente es: " << usuario1->getnumcliente() << endl;
	cout << "Mi numero de cliente es: " << usuario2->getnumcliente() << endl;
	_servidor->AgregarUsuario(usuario1);
	_servidor->AgregarUsuario(usuario2);
	
	cout << "Inserte un usuario";
	cJuegos::contjuegos = 0;
	cLista<cUsuarios>* ListaUsuarios = new cLista<cUsuarios>();
	//cJuegos* juego1 = new cJuegos();
	


	delete FechaHoy;
	delete _servidor;
	delete ListaUsuarios;
	  
	//cJuegos* aux = new cJuegos();
	/*
	try {
		cJuegos::contjuegos = 0;
		
		cServicios* servicio1 = new cVideos();
		
		
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
	catch (exception *ex) {
		std::cout << ex->what();
	}
	*/
	return 0;
}