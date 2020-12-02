#pragma once
#include "CL_CAD.h"


ref class VerifVille
{
private :
	CL_CAD^ connexion;

public :
	VerifVille();
	String^ Verif(String^ Ville);
};

