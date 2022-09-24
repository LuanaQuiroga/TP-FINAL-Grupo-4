#pragma once
#include <string>

using namespace std;

enum class eTipoCliente { FREE, BASIC, PREMIUM };
string tipoclientestring(eTipoCliente tipocliente);

enum class ePaises { Argentina, Chile, Uruguay, Paraguay, Bolivia };
string tipopaisesstring(ePaises paises);

enum eEstado { Nivel1, Nivel2, Nivel3, Nivel4, Completado };
string tipoestadostring(eEstado estado);


