#pragma once
#include <iostream>
#include <string>

using namespace std;
class cAudios
{
public:
	cAudios();
	~cAudios();
	void Iniciar();
	void Apagar();
	void Pausar();
	void Descargar();
	void Disponible();

	void FastBackward();
	void FastFoward();
	void Record();
};

