#pragma once
#include <iostream>
#include <string>

using namespace std;
class cAudios:public cServicios {
private:
	const int duracionmax = 10;
	int minutos;
	int segundos;
public:
#pragma region Constructor y destructor:
	cAudios();
	~cAudios();
#pragma endregion

#pragma region Metodos:
	void Iniciar();
	void Apagar();
	void Pausar();
	void Descargar();
	void Disponible();
	void FastBackward();
	void FastFoward();
	void Record();
#pragma endregion
};

