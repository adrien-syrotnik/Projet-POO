#include "pch.h"
#include "GestionCommande.h"



array<Commande^>^ GestionCommande::getCommandeClient(int IdClient)
{
    String^ tableName = getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les Clients
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT Commande.ID,Reference,DatePrevueLivraison,DateReglementEnregistre,DateAchatCommande,MontantHT,MontantTVA,MontantTTC,ID_Client,ID_Adresse,ID_Adresse_Commande_AdresseFacturation FROM Client INNER JOIN Commande ON Client.ID = Commande.ID_Client WHERE Client.ID =" + IdClient + ";", tableName);

    //SELECT * FROM Client_Adresse INNER JOIN Adresse ON Client_Adresse.ID = Adresse.ID WHERE Client_Adresse.ID_Client = 1;

    int size = ds->Tables[tableName]->Rows->Count;
    array<Commande^>^ Commandes = gcnew array<Commande^>(size);

    //remplir le tableau Clients à partir des Clients récupérée dans DS.
    for (int i = 0; i < size; i++)
        Commandes[i] = gcnew Commande(ds->Tables[tableName]->Rows[i]);
    return Commandes;
}


String^ GestionCommande::getTableName()
{
    return "Commande";
}

/*
void GestionAdresse::persist(int IdClient)
{

    CL_CAD^ connexion = gcnew CL_CAD();
    if (this->ID == -1)
    {
        //Insert
        this->ID = connexion->insert("INSERT INTO Adresse (Adresse,Ville,CP) " +
            "VALUES('" + this->getLigneAdresse() + "','" + this->getVille() + "','" + this->getCP() + "');SELECT @@IDENTITY;");


        this->id = connexion->insert("INSERT INTO Client_Adresse (ID,ID_Client) " +
            "VALUES('" + this->id + "','" + IdClient + "');SELECT @@IDENTITY;");




    }



}*/