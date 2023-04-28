#pragma once
#include <iostream>
#include <string>
#include "cServicios.h"
#include "cUsuarioPREMIUM.h"
#include "cUsuarioBASIC.h"

using namespace std;
class cUsuarioPREMIUM;
class cUsuarioBASIC;
class cAudios: public cServicios {
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
	void Record(cUsuarios* usuario);
#pragma endregion
#pragma Getters y Setters:
	void SetMinAudios();
	int GetMinAudios(int minutos);
	int GetDuracionMaxAudios(int duracionmax);
	void SetDuracionMaxAudios();
	int GetSegAudios(int segundos);
	void SetSegAudios();
#pragma endregion
};

