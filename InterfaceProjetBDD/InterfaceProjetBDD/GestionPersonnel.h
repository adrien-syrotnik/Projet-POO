#pragma once
#include "Personnel.h"
#include "CL_CAD.h"
#include "Adresse.h"

using namespace System::Data;
using namespace System;


ref class GestionPersonnel
{
private :
    CL_CAD^ connexion;


public :
    GestionPersonnel();
    String^ getTableName();
    array<Personnel^>^ getPersonnels(); //NE PAS OUBLIER DE VERIF QUE SUPPRIMER = FALSE
    
    void persist(Personnel^,Adresse^);
    void del(Personnel^);
    


};

