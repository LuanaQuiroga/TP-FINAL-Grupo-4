#include "cAudios.h"


cAudios::~cAudios() {

}
void cAudios::Iniciar(){
	cout << "Esta inicializando un audio" << endl;
	this->setcantvisitas(this->getcantvisitas() + 1);
}
void cAudios::Apagar(){
	int i = rand() % 5 + 1;
	this->setcanthoras(this->getcanthoras() + i);
	cout << "El audio ha sido apagado" << endl;
}
void cAudios::Pausar() {
	int i = rand() % 5 + 1;
	this->setcanthoras(this->getcanthoras() + i);
	cout << "El audio ha sido pausado" << endl;
}
void cAudios::Disponible() {
	this->getclientedisponible();
}
void cAudios::Record(cUsuarios* usuario) {
	try{
		cUsuarioPREMIUM* usuario = (cUsuarioPREMIUM*) dynamic_cast<cUsuarioPREMIUM*>(usuario);
		cout << "El usuario esta haciendo record" << endl;

	}
	catch (exception ex) {

	}
	try {
		cUsuarioBASIC* usuario = (cUsuarioBASIC*) dynamic_cast<cUsuarioBASIC*>(usuario);
		cout << "El usuario esta haciendo record" << endl;

	}
	catch (exception ex) {
		throw("El usuario no tiene permitido descargar");
	}
}
