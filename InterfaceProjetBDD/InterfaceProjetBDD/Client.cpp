#include "pch.h"

//Client.cpp
#include "Client.h"
#include "CL_CAD.h"



Client::Client()
{
    this->id = -1;
    this->Nom = "";
    this->Prenom = "";
}

Client::Client(DataRow^ DR)
{
    this->id = Convert::ToInt32(DR->ItemArray[0]);
    this->Nom = Convert::ToString(DR->ItemArray[1]);
    this->Prenom = Convert::ToString(DR->ItemArray[2]);
}
void Client::setID(int id)
{
    this->id = id;
}
int Client::getID()
{
    return this->id;
}
String^ Client::getPrenom()
{
    return this->Prenom;
}

void Client::setPrenom(String^ prenom)
{
    this->Prenom = prenom;
}

void Client::setNom(String^ nom)
{
    this->Nom = nom;
}
String^ Client::getNom()
{
    return this->Nom;
}
array<Client^>^ Client::getClients()
{
    String^ tableName = Client::getTableName();
    //Requête pour récupérer à partir de Sql Server 
    //le DataSet contenant les Clients
    CL_CAD^ connexion = gcnew CL_CAD();
    DataSet^ ds = connexion->getRows("SELECT * FROM " + tableName + ";", tableName);

    int size = ds->Tables[tableName]->Rows->Count;
    array<Client^>^ Clients = gcnew array<Client^>(size);

    //remplir le tableau Clients à partir des Clients récupérée dans DS.
    for (int i = 0; i < size; i++)
        Clients[i] = gcnew Client(ds->Tables[tableName]->Rows[i]);
    return Clients;
}
String^ Client::getTableName()
{
    return "Client";
}
void Client::persist()
{
    String^ tableName = Client::getTableName();
    CL_CAD^ connexion = gcnew CL_CAD();
    if (this->id == -1)
    {
        //Insert
        this->id = connexion->insert("INSERT INTO " + tableName + " (nom,prenom) " +
            "VALUES('" + this->getNom() + "','" + this->getPrenom() + "');SELECT @@IDENTITY;");
    }
    else
    {
        //Update
        connexion->update("UPDATE " + tableName +
            " SET nom = '" + this->getNom() + "' " +
            "WHERE(id = " + this->getID() + ");");

        connexion->update("UPDATE " + tableName +
            " SET prenom = '" + this->getPrenom() + "' " +
            "WHERE(id = " + this->getID() + ");");
    }
}

void Client::del() {

    String^ tableName = Client::getTableName();
    CL_CAD^ connexion = gcnew CL_CAD();

    //Insert
    connexion->update("DELETE FROM " + tableName + " WHERE ID = " + this->id + ";");

}
