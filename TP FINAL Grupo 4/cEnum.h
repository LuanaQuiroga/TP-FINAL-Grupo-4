#pragma once
#include <string>

using namespace std;

enum class eTipoCliente { FREE = 1, BASIC, PREMIUM };
string tipoclientestring(eTipoCliente tipocliente);

enum class ePaises { Argentina = 1, Chile, Uruguay, Paraguay, Bolivia };
string tipopaisesstring(ePaises paises);

enum eEstadoNivel { Nivel1 = 1, Nivel2, Nivel3, Nivel4, Completado };
string tipoestadonivelstring(eEstadoNivel estadoNivel);

enum eEstado { Prendido = 1, Apagado, Pausado };
string tipoestadotring(eEstado estado);
