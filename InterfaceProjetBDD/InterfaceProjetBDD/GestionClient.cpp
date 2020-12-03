#include "pch.h"
#include "GestionClient.h"


GestionClient::GestionClient() {
    connexion = gcnew CL_CAD();
}

array<Client^>^ GestionClient::getClients()
{
    String^ tableName = GestionClient::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les Clients
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + " WHERE Supprimer='False';", tableName);
    int size = ds->Tables[tableName]->Rows->Count;
    array<Client^>^ Personnels = gcnew array<Client^>(size);

    //remplir le tableau Clients à partir des Clients récupérée dans DS.
    for (int i = 0; i < size; i++)
        Personnels[i] = gcnew Client(ds->Tables[tableName]->Rows[i]);
    return Personnels;
}

String^ GestionClient::getTableName()
{
    return "Client";
}





void GestionClient::persist(Client^ C)//, array<Adresse^>^ A)
{
    String^ tableName = GestionClient::getTableName();
    CL_CAD^ connexion = gcnew CL_CAD();

    String^ DateAnniv;
    if (C->getDatePremierAchat() == L"")
        DateAnniv = "NULL";
    else
        DateAnniv = "'" + C->getDatePremierAchat() + "'";

    if (C->getID() == -1)
    {
        //Insert

        //A->setID(connexion->insert("INSERT INTO Adresse (Ligne1,Pays,CodePostal,Ville) " + "VALUES('" + A->getLigneAdresse() + "','" + A->getPays() + "','" + A->getCP() + "','" + A->getVille() + "');SELECT @@IDENTITY;"));
        C->setID(connexion->insert("INSERT INTO Client (Nom,Prenom,DateAnniversaire,DatePremiereAchat,Supprimer) VALUES('"+ C->getNom() +"','" + C->getPrenom() + "','" + C->getDateAnniversaire() + "',"+ DateAnniv +",'False');SELECT @@IDENTITY;"));
    }
    else
    {
        //Update
        connexion->update("UPDATE Client SET Nom = '"+ C->getNom() +"', Prenom = '"+ C->getPrenom() +"', DateAnniversaire = '"+ C->getDateAnniversaire() +"',DatePremiereAchat = "+ DateAnniv +" WHERE id = " + C->getID() + ";");

        //connexion->update("UPDATE Adresse SET Ligne1 = '" + A->getLigneAdresse() + "', Pays = '" + A->getPays() + "', CodePostal = '" + A->getCP() + "', Ville = '" + A->getVille() + "'  WHERE id = " + A->getID() + ";");

    }

}

void GestionClient::del(Client^ C) {

    CL_CAD^ connexion = gcnew CL_CAD();

    //Update
    connexion->update("UPDATE Client SET Supprimer = 'True' WHERE ID = " + C->getID() + ";");

}
