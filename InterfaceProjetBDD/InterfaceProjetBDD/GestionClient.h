#pragma once
#include "Client.h"
#include "CL_CAD.h"

using namespace System::Data;
using namespace System;


ref class GestionClient
{
private:
    CL_CAD^ connexion;


public:
    GestionClient();
    array<Client^>^ getClients(); //NE PAS OUBLIER DE VERIF QUE SUPPRIMER = FALSE
    String^ getTableName();
    //void persist(Personnel^, Adresse^);  void del(Personnel^);
};