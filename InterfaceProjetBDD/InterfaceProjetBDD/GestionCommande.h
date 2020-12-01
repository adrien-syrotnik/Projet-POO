#pragma once
#include "Commande.h"
#include "CL_CAD.h"


public ref class GestionCommande
{
private:
    CL_CAD^ connexion;
public:

    String^ getTableName();
    array<Commande^>^ getCommandeClient(int);
    //void persist(int);
};

