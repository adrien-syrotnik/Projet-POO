#include "pch.h"
#include "GestionAdresse.h"
#include "CL_CAD.h"

array<Adresse^>^ GestionAdresse::getAdressePersonnel(int IdClient)
{
    String^ tableName = getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les Clients
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT Adresse.ID,Ligne1, Pays, CodePostal, Ville FROM Personnel INNER JOIN Adresse ON Adresse.ID = Personnel.ID_Adresse WHERE Personnel.ID =" + IdClient + ";", tableName);

    //SELECT * FROM Client_Adresse INNER JOIN Adresse ON Client_Adresse.ID = Adresse.ID WHERE Client_Adresse.ID_Client = 1;

    int size = ds->Tables[tableName]->Rows->Count;
    array<Adresse^>^ Adresses = gcnew array<Adresse^>(size);

    //remplir le tableau Clients à partir des Clients récupérée dans DS.
    for (int i = 0; i < size; i++)
        Adresses[i] = gcnew Adresse(ds->Tables[tableName]->Rows[i]);
    return Adresses;
}


String^ GestionAdresse::getTableName()
{
    return "Adresse";
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


void GestionAdresse::addAdress() {


}
