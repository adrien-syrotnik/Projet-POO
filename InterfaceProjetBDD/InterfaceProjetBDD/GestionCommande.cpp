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


array<Commande^>^ GestionCommande::getCommandes()
{
    String^ tableName = getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les Clients
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT * FROM Commande WHERE Supprimer = 'False';", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Commande^>^ Commandes = gcnew array<Commande^>(size);

    //remplir le tableau Clients à partir des Clients récupérée dans DS.
    for (int i = 0; i < size; i++) {
        Commandes[i] = gcnew Commande(ds->Tables[tableName]->Rows[i]);
        Commandes[i]->setNom(getClientNameCommande(Commandes[i]->getID())[0]);
        Commandes[i]->setID_Client(Convert::ToInt32(getClientNameCommande(Commandes[i]->getID())[1]));
    }
    return Commandes;
}



array<String^>^ GestionCommande::getClientNameCommande(int ID_Commande) {

    String^ tableName = getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les Clients
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT Nom, Client.ID FROM Client INNER JOIN Commande ON Client.ID = Commande.ID_Client WHERE Commande.ID = "+ ID_Commande +";", tableName);


    array<String^>^ Commandes = gcnew array<String^>(2);

    //remplir le tableau Clients à partir des Clients récupérée dans DS.
    
        Commandes[0] = Convert::ToString(ds->Tables[tableName]->Rows[0]->ItemArray[0]);
        Commandes[1] = Convert::ToString(ds->Tables[tableName]->Rows[0]->ItemArray[1]);

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