#pragma once
#include "Commande.h"
#include "CL_CAD.h"
#include "GestionArticle.h"
#include "Adresse.h"
#include "Paiement.h"

using namespace System::Data;
using namespace System;

public ref class GestionCommande
{
private:
    CL_CAD^ connexion;
    GestionArticle^ GestionA;
public:

    String^ getTableName();
    array<Commande^>^ getCommandeClient(int);
    array<Commande^>^ getCommandes();
    array<String^>^ getClientNameCommande(int);
    array<Paiement^>^ getPaiementCommande(int);
    void persist(Commande^, array<NombreArticle^>^ NbrArticle,Adresse^,Adresse^);
    void del(Commande^);
};

