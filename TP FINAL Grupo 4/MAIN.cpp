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
#include "cUsuarioBASIC.h"
class cUsuarioBASIC;

using namespace std;

int main()
{
	try {
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
		
		cUsuarioBASIC* usuario1 = new cUsuarioBASIC("Pilar", true, ePaises::Argentina, eTipoCliente::FREE, true, FechaHoy);
		cUsuarioBASIC* usuario2 = new cUsuarioBASIC("Pilar", true, ePaises::Argentina, eTipoCliente::FREE, true, FechaHoy);
		cout << "Mi numero de cliente es: " << usuario1->getnumcliente() << endl;
		cout << "Mi numero de cliente es: " << usuario2->getnumcliente() << endl;
		_servidor->AgregarUsuario(usuario1);
		_servidor->AgregarUsuario(usuario2);

		cout << "He Insertado un usuario" << endl;
		cJuegos::contjuegos = 0;
		cLista<cUsuarios>* ListaUsuarios = new cLista<cUsuarios>();
		cJuegos* juego1 = new cJuegos("Juego1", 32.5, 5, 32, eEstadoNivel::Nivel2, eTipoCliente::FREE, eEstado::Apagado, ePaises::Chile);
		_servidor->AgregarServicio(juego1);
		_servidor->LoggearUsuario(usuario1);
		//usuario1->SeleccionarServicio(_servidor->ListarServicios(usuario1)); //le entrego la lista y selecciono 1
		usuario1->UsarServicio();
		_servidor->GetEstadisticas();  //imprimo estadisticas
		delete FechaHoy;
		delete _servidor;
		delete ListaUsuarios;
		delete juego1;

	}
	catch (exception* ex) {
		std::cout << ex->what();
	}
	  
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