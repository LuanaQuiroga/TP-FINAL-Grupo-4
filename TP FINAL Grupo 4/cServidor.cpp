#include "cServidor.h"

cServidor::cServidor(){
	this->ListaUsuarios = new cLista<cUsuarios>();
	this->ListaServicios = new cLista<cServicios>();
	this->ListaBackUp = new cLista<cBackUp>();
	this->ListaServiciosFREE = new cLista<cServicios>();
}
cServidor::~cServidor(){
	int i;
	for (i = 0; i < ListaUsuarios->getCA(); i++) {
		delete ListaUsuarios->Buscar(i);
	}
	for (i = 0; i < ListaServicios->getCA(); i++) {
		delete ListaServicios->Buscar(i);
	}
	for (i = 0; i < ListaServiciosFREE->getCA(); i++) {
		delete ListaServiciosFREE->Buscar(i);
	}
	for (i = 0; i < ListaBackUp->getCA(); i++) {
		delete ListaBackUp->Buscar(i);
	}
}
void cServidor::setfecha(cFecha* Fecha) {
	this->Fecha = Fecha;
}
void cServidor::setcontusuariosconectados(int contusuariosconectados) {
	this->contusuariosconectados = contusuariosconectados;
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
			cout << "Usuario logueado" << endl;
			this->contusuariosconectados++;
		}
		i++;
	}
	if (!encontre)
		cout << "El usuario no esta logueado" << endl;
}
void cServidor::HacerBackup() {
	cBackUp* aux = new cBackUp();
	//cBackUp* aux1 = new cBackUp();
	int i;
	aux->setdia(this->getfecha());
	aux->setCantUsuariosConectados(this->contusuariosconectados);
	this->contusuariosconectados = 0; //aca empezo el nuevo dia
	aux->setMasJugados(this->MasJugado());
	aux->setMasEscuchados(this->MasEscuchado());
	aux->setMasVistos(this->MasVisto());
	//recorro la lista con los 3 y le seteo las estadisticas en 0
	for (i = 0; i < this->ListaServicios->getCA(); i++) {
		cServicios* aux = this->ListaServicios->Buscar(i);
		aux->CantHoras = 0;
		aux->CantVisitas = 0;
	}
	this->ListaBackUp->Insertar(aux);
	aux->getdia()->setdia(aux->getdia()->getdia() + 1);
}
cJuegos* cServidor::MasJugado() {
	cJuegos* MasJugados = NULL;
	int i;
	for (i = 0; i < this->ListaServicios->getCA(); i++) {
		try {
			cJuegos* juego = (cJuegos*)dynamic_cast<cJuegos*>(ListaServicios->Buscar(i));
			if (MasJugados == NULL) {
				MasJugados = juego;
			}
			else {
				if (MasJugados->getcantvisitas() <juego->getcantvisitas()){
					MasJugados = juego;
				}
			}
		}
		catch (exception ex) {

		}
	}
	return MasJugados;
}
cVideos* cServidor::MasVisto() {
	cVideos* MasVisto = NULL;
	int i;
	for (i = 0; i < this->ListaServicios->getCA(); i++) {
		try {
			cVideos* video = (cVideos*)dynamic_cast<cVideos*>(ListaServicios->Buscar(i));
			if (MasVisto == NULL) {
				MasVisto = video;
			}
			else {
				if (MasVisto->getcantvisitas() < video->getcantvisitas()) {
					MasVisto = video;
				}
			}
		}
		catch (exception ex) {

		}
	}
	return MasVisto;
}
cAudios* cServidor::MasEscuchado() {
	cAudios* MasEscuchado = NULL;
	int i;
	for (i = 0; i < this->ListaServicios->getCA(); i++) {
		try {
			cAudios* audio = (cAudios*)dynamic_cast<cAudios*>(ListaServicios->Buscar(i));
			if (MasEscuchado == NULL) {
				MasEscuchado = audio;
			}
			else {
				if (MasEscuchado->getcantvisitas() < audio->getcantvisitas()) {
					MasEscuchado = audio;
				}
			}
		}
		catch (exception ex) {

		}
	}
	return MasEscuchado;
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
	usuario->setLogueado(false);
}
void cServidor::UsarServicio(cServicios* servicio) {
	/*
	* servicio->Disponible(this->ListarServicios());
	cServicios* servicio = this->getservicio();
	int i;
	i = rand() % ListaServicios->getCA();
	cServicios* aux = this->ListaServicios->Buscar(i);
	if (aux->Disponible(false))
		cout << "El servicio que busca no esta disponible" << endl;
	else cout << "El servicio que busca esta disponible" << endl;
	*/
}

int cServidor::getpromediousuarios() {
	int ToR = 0;
	int i;
	for (i = 0; i < this->ListaBackUp->getCA(); i++) {
		ToR = ToR + this->ListaBackUp->Buscar(i)->getCantUsuariosConectados();
	}
	return ToR / ListaBackUp->getCA(); //promedio usuarios conectados por dia
}
int cServidor::getpromediousuarios_semana() {
	int ToR = 0;
	int i;
	int semana = 1;
	int usuariosemana = 0;
	for (i = 0; i < this->ListaBackUp->getCA(); i++) {
		ToR = ToR + this->ListaBackUp->Buscar(i)->getCantUsuariosConectados(); //usuario de un dia
		if (i % 7 == 0) {
			semana++;
			usuariosemana = usuariosemana + ToR;
			ToR = 0; //en esta semana ya conte los que quiero
		}
	}
	return usuariosemana / semana; //promedio usuarios conectados por semana
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
void cServidor::generarlistaFREE() {
	int i;
	for (i = 0; i < this->ListaServiciosFREE->getCA(); i++) {
		cServicios* aux = this->ListaServiciosFREE->Buscar(i);
		aux->setclientedisponible(eTipoCliente::BASIC);
		this->ListaServiciosFREE->Eliminar(i);
	}
	for (i = 0; i < 5; i++) {
		cServicios* aux = this->ListaServicios->Buscar(rand ()%this->ListaServicios->getCA());
		aux->setclientedisponible(eTipoCliente::FREE);
		this->ListaServiciosFREE->Insertar(aux);
	}
}

